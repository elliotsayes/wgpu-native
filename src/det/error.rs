use std::{error::Error, ffi::CString, fmt::Display};

use log::{error, info, warn};
use thiserror::Error as DeriveError;
use wgc::{
    binding_model::{
        CreateBindGroupError, CreateBindGroupLayoutError, CreatePipelineLayoutError,
        GetBindGroupLayoutError,
    },
    command::{
        ClearError, CommandEncoderError, ComputePassError, CopyError, QueryError, RenderPassError,
    },
    device::{queue::QueueWriteError, DeviceError},
    instance::{InvalidAdapter, RequestDeviceError},
    pipeline::{CreateComputePipelineError, CreateRenderPipelineError, CreateShaderModuleError},
    resource::{
        BufferAccessError, CreateBufferError, CreateQuerySetError, CreateSamplerError,
        CreateTextureError, CreateTextureViewError,
    },
};

use crate::{
    conv::ShaderParseError, det::global::DETERMINISM_EXTENSION_GLOBAL_STATE, format_error,
};

use super::error_check::get_category_and_root_error_dyn;

#[derive(Clone, Debug, DeriveError)]
pub enum CoreError {
    InvalidAdapter(#[from] InvalidAdapter),
    RequestDeviceError(#[from] RequestDeviceError),
    BufferAccessError(#[from] BufferAccessError),
    CommandEncoderError(#[from] CommandEncoderError),
    ClearError(#[from] ClearError),
    CopyError(#[from] CopyError),
    QueryError(#[from] QueryError),
    ComputePassError(#[from] ComputePassError),
    GetBindGroupLayoutError(#[from] GetBindGroupLayoutError),
    CreateBindGroupError(#[from] CreateBindGroupError),
    CreateBindGroupLayoutError(#[from] CreateBindGroupLayoutError),
    CreateBufferError(#[from] CreateBufferError),
    DeviceError(#[from] DeviceError),
    CreateComputePipelineError(#[from] CreateComputePipelineError),
    CreatePipelineLayoutError(#[from] CreatePipelineLayoutError),
    CreateQuerySetError(#[from] CreateQuerySetError),
    CreateRenderPipelineError(#[from] CreateRenderPipelineError),
    CreateSamplerError(#[from] CreateSamplerError),
    ShaderParseError(#[from] ShaderParseError),
    CreateShaderModuleError(#[from] CreateShaderModuleError),
    CreateTextureError(#[from] CreateTextureError),
    QueueWriteError(#[from] QueueWriteError),
    RenderPassError(#[from] RenderPassError),
    CreateTextureViewError(#[from] CreateTextureViewError),
}

impl Display for CoreError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "TODO: Implement Display for CoreError")
    }
}

#[derive(Clone, Debug, DeriveError, PartialEq)]
pub enum CategorizedError {
    // The error is due to an unknown problem with the execution, e.g. a bug in the
    // WebGPU implementation or GPU driver, or an invalid assumption in the execution model.
    Unknown,

    // The physical device provided by the system does not meet the requirements to create
    // the environment required for deterministic execution. Further attempts to run the
    // application in the same system configuration will also fail.
    UnderqualifiedDeviceFailure,

    // The system produced a non-deterministic runtime error, resulting in a bad state.
    // However, the problem may be transient and execution can be retried.
    SystemNonDeterministic,

    // The error arose deterministically due to the sandboxed applications use of the WebGPU API.
    // The error can be safely propagated to the application for it to handle.
    Deterministic,
}

impl Display for CategorizedError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            CategorizedError::Unknown => write!(f, "Unknown error"),
            CategorizedError::UnderqualifiedDeviceFailure => write!(f, "Underqualified device failure"),
            CategorizedError::SystemNonDeterministic => write!(f, "System non-deterministic"),
            CategorizedError::Deterministic => write!(f, "Deterministic error"),
        }
    }
}

#[derive(Clone, Debug, DeriveError, PartialEq)]
pub enum DeterminismError {
    UnsupportedShaderLanguage(String),
    NonProvablySafeShaderSource(String),
}

impl Display for DeterminismError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{:?}", self)
    }
}

pub type CategoryAndError = (CategorizedError, Box<dyn Error + Send + Sync + 'static>);

pub fn check_determinism_issue(
    error: CoreError,
    operation: &'static str,
) -> Box<dyn Error + Send + Sync + 'static> {
    let (category, root_error_dyn) = get_category_and_root_error_dyn(error);

    match category {
        CategorizedError::Unknown => {
            warn!("Unknown error in {operation}: {root_error_dyn:?}")
        }
        CategorizedError::UnderqualifiedDeviceFailure => {
            handle_error_underqualified_device_failure(root_error_dyn, operation)
        }
        CategorizedError::SystemNonDeterministic => {
            handle_error_non_determinism(root_error_dyn, operation)
        }
        CategorizedError::Deterministic => {
            info!("Deterministic error in {operation}: {root_error_dyn:?}")
        }
    }

    root_error_dyn
}

pub fn handle_error_non_determinism(
    cause: Box<dyn Error + Send + Sync + 'static>,
    operation: &'static str,
) -> ! {
    let message = format!(
        "Non-determinism error in {operation}: {f}",
        f = format_error(cause.as_ref())
    );
    error!("{message}");

    let state = DETERMINISM_EXTENSION_GLOBAL_STATE.lock();
    if let Some(callback) = state.non_determinism_error_callback {
        let message_c = CString::new(message.clone()).unwrap();
        unsafe { callback(message_c.as_ptr()) };
    }

    // TODO: is it okay to panic here?
    panic!("{message}");
}

fn handle_error_underqualified_device_failure(
    cause: Box<dyn Error + Send + Sync + 'static>,
    operation: &'static str,
) -> ! {
    let message = format!(
        "Underqualified device failure in {operation}: {f}",
        f = format_error(&*cause)
    );
    error!("{message}");

    let state = DETERMINISM_EXTENSION_GLOBAL_STATE.lock();
    if let Some(callback) = state.underqualified_device_failure_callback {
        let message_c = CString::new(message.clone()).unwrap();
        unsafe { callback(message_c.as_ptr()) };
    }

    // TODO: is it okay to panic here?
    panic!("{message}");
}
