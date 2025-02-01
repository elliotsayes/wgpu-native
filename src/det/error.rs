use std::{error, ffi::CString};

use wgc::{
    binding_model::{
        CreateBindGroupError, CreateBindGroupLayoutError, CreatePipelineLayoutError,
        GetBindGroupLayoutError,
    },
    command::{
        ClearError, CommandEncoderError, ComputePassError, CopyError, QueryError, RenderPassError,
    },
    device::{queue::QueueWriteError, DeviceError},
    instance::RequestDeviceError,
    pipeline::{CreateComputePipelineError, CreateRenderPipelineError, CreateShaderModuleError},
    resource::{
        BufferAccessError, CreateBufferError, CreateQuerySetError, CreateSamplerError,
        CreateTextureError, CreateTextureViewError,
    },
};

use crate::{
    conv::ShaderParseError, det::global::DETERMINISM_EXTENSION_GLOBAL_STATE, format_error,
};

#[derive(Clone)]
pub enum RuntimeErrors {
    RequestDeviceError(RequestDeviceError),
    BufferAccessError(BufferAccessError),
    CommandEncoderError(CommandEncoderError),
    ClearError(ClearError),
    CopyError(CopyError),
    QueryError(QueryError),
    ComputePassError(ComputePassError),
    GetBindGroupLayoutError(GetBindGroupLayoutError),
    CreateBindGroupError(CreateBindGroupError),
    CreateBindGroupLayoutError(CreateBindGroupLayoutError),
    CreateBufferError(CreateBufferError),
    DeviceError(DeviceError),
    CreateComputePipelineError(CreateComputePipelineError),
    CreatePipelineLayoutError(CreatePipelineLayoutError),
    CreateQuerySetError(CreateQuerySetError),
    CreateRenderPipelineError(CreateRenderPipelineError),
    CreateSamplerError(CreateSamplerError),
    ShaderParseError(ShaderParseError),
    CreateShaderModuleError(CreateShaderModuleError),
    CreateTextureError(CreateTextureError),
    QueueWriteError(QueueWriteError),
    RenderPassError(RenderPassError),
    CreateTextureViewError(CreateTextureViewError),
}

impl Into<Box<dyn error::Error + Send + Sync + 'static>> for RuntimeErrors {
    fn into(self) -> Box<dyn error::Error + Send + Sync + 'static> {
        match self {
            RuntimeErrors::RequestDeviceError(request_device_error) => {
                Box::new(request_device_error)
            }
            RuntimeErrors::BufferAccessError(buffer_access_error) => Box::new(buffer_access_error),
            RuntimeErrors::CommandEncoderError(command_encoder_error) => {
                Box::new(command_encoder_error)
            }
            RuntimeErrors::ClearError(clear_error) => Box::new(clear_error),
            RuntimeErrors::CopyError(copy_error) => Box::new(copy_error),
            RuntimeErrors::QueryError(query_error) => Box::new(query_error),
            RuntimeErrors::ComputePassError(compute_pass_error) => Box::new(compute_pass_error),
            RuntimeErrors::GetBindGroupLayoutError(get_bind_group_layout_error) => {
                Box::new(get_bind_group_layout_error)
            }
            RuntimeErrors::CreateBindGroupError(create_bind_group_error) => {
                Box::new(create_bind_group_error)
            }
            RuntimeErrors::CreateBindGroupLayoutError(create_bind_group_layout_error) => {
                Box::new(create_bind_group_layout_error)
            }
            RuntimeErrors::CreateBufferError(create_buffer_error) => Box::new(create_buffer_error),
            RuntimeErrors::DeviceError(device_error) => Box::new(device_error),
            RuntimeErrors::CreateComputePipelineError(create_compute_pipeline_error) => {
                Box::new(create_compute_pipeline_error)
            }
            RuntimeErrors::CreatePipelineLayoutError(create_pipeline_layout_error) => {
                Box::new(create_pipeline_layout_error)
            }
            RuntimeErrors::CreateQuerySetError(create_query_set_error) => {
                Box::new(create_query_set_error)
            }
            RuntimeErrors::CreateRenderPipelineError(create_render_pipeline_error) => {
                Box::new(create_render_pipeline_error)
            }
            RuntimeErrors::CreateSamplerError(create_sampler_error) => {
                Box::new(create_sampler_error)
            }
            RuntimeErrors::ShaderParseError(shader_parse_error) => Box::new(shader_parse_error),
            RuntimeErrors::CreateShaderModuleError(create_shader_module_error) => {
                Box::new(create_shader_module_error)
            }
            RuntimeErrors::CreateTextureError(create_texture_error) => {
                Box::new(create_texture_error)
            }
            RuntimeErrors::QueueWriteError(queue_write_error) => Box::new(queue_write_error),
            RuntimeErrors::RenderPassError(render_pass_error) => Box::new(render_pass_error),
            RuntimeErrors::CreateTextureViewError(create_texture_view_error) => {
                Box::new(create_texture_view_error)
            }
        }
    }
}

// This indicates that the generated error happened due to non-deterministic behavior
// of the system, e.g. due to the physical GPU running out of resources
pub fn handle_error_non_determinism(
    cause: impl error::Error + Send + Sync + 'static,
    operation: &'static str,
) -> ! {
    let message = format!(
        "Non-determinism error in {operation}: {f}",
        f = format_error(&cause)
    );

    let state = DETERMINISM_EXTENSION_GLOBAL_STATE.lock();
    if let Some(state) = state.as_ref() {
        if let Some(callback) = state.non_determinism_error_callback {
            let message_c = CString::new(message.clone()).unwrap();
            unsafe { callback(message_c.as_ptr()) };
        }
    }

    // TODO: is ot okay to panic here?
    panic!("{}", message);
}

// This indicates that the generated error happened due to the requirements
// of the virtual device not being met by the system.
fn handle_error_underqualified_device_failure(
    cause: impl error::Error + Send + Sync + 'static,
    operation: &'static str,
) -> ! {
    let message = format!(
        "Underqualified device failure in {operation}: {f}",
        f = format_error(&cause)
    );

    let state = DETERMINISM_EXTENSION_GLOBAL_STATE.lock();
    if let Some(state) = state.as_ref() {
        if let Some(callback) = state.underqualified_device_failure_callback {
            let message_c = CString::new(message.clone()).unwrap();
            unsafe { callback(message_c.as_ptr()) };
        }
    }

    // TODO: is ot okay to panic here?
    panic!("{}", message);
}

fn check_device_error_helper(device_error: DeviceError, operation: &'static str) {
    match device_error {
        DeviceError::Invalid(resource_error_ident) => todo!(),
        DeviceError::Lost => todo!(),
        DeviceError::OutOfMemory => todo!(),
        DeviceError::ResourceCreationFailed => todo!(),
        DeviceError::InvalidDeviceId => todo!(),
        DeviceError::DeviceMismatch(device_mismatch) => todo!(),
        _ => todo!(),
    }
}

fn command_encoder_error_helper(
    command_encoder_error: CommandEncoderError,
    operation: &'static str,
) {
    todo!()
}

pub fn check_determinism_issue(error: RuntimeErrors, operation: &'static str) {
    match error {
        RuntimeErrors::RequestDeviceError(request_device_error) => match request_device_error {
            RequestDeviceError::InvalidAdapter => todo!(),
            RequestDeviceError::DeviceLost => todo!(),
            RequestDeviceError::Internal => todo!(),
            RequestDeviceError::LimitsExceeded(failed_limit) => todo!(),
            RequestDeviceError::NoGraphicsQueue => todo!(),
            RequestDeviceError::OutOfMemory => todo!(),
            RequestDeviceError::UnsupportedFeature(features) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::BufferAccessError(buffer_access_error) => match buffer_access_error {
            BufferAccessError::Device(device_error) => todo!(),
            BufferAccessError::Failed => todo!(),
            BufferAccessError::InvalidBufferId(id) => todo!(),
            BufferAccessError::DestroyedResource(destroyed_resource_error) => todo!(),
            BufferAccessError::AlreadyMapped => todo!(),
            BufferAccessError::MapAlreadyPending => todo!(),
            BufferAccessError::MissingBufferUsage(missing_buffer_usage_error) => todo!(),
            BufferAccessError::NotMapped => todo!(),
            BufferAccessError::UnalignedRange => todo!(),
            BufferAccessError::UnalignedOffset { offset } => todo!(),
            BufferAccessError::UnalignedRangeSize { range_size } => todo!(),
            BufferAccessError::OutOfBoundsUnderrun { index, min } => todo!(),
            BufferAccessError::OutOfBoundsOverrun { index, max } => todo!(),
            BufferAccessError::NegativeRange { start, end } => todo!(),
            BufferAccessError::MapAborted => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CommandEncoderError(command_encoder_error) => match command_encoder_error {
            CommandEncoderError::Invalid => todo!(),
            CommandEncoderError::NotRecording => todo!(),
            CommandEncoderError::Device(device_error) => todo!(),
            CommandEncoderError::Locked => todo!(),
            CommandEncoderError::InvalidTimestampWritesQuerySetId(id) => todo!(),
            CommandEncoderError::InvalidAttachmentId(id) => todo!(),
            CommandEncoderError::InvalidResolveTargetId(id) => todo!(),
            CommandEncoderError::InvalidDepthStencilAttachmentId(id) => todo!(),
            CommandEncoderError::InvalidOcclusionQuerySetId(id) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::ClearError(clear_error) => match clear_error {
            ClearError::MissingClearTextureFeature => todo!(),
            ClearError::InvalidBufferId(id) => todo!(),
            ClearError::InvalidTextureId(id) => todo!(),
            ClearError::DestroyedResource(destroyed_resource_error) => todo!(),
            ClearError::NoValidTextureClearMode(resource_error_ident) => todo!(),
            ClearError::UnalignedFillSize(_) => todo!(),
            ClearError::UnalignedBufferOffset(_) => todo!(),
            ClearError::OffsetPlusSizeExceeds64BitBounds {
                start_offset,
                requested_size,
            } => todo!(),
            ClearError::BufferOverrun {
                start_offset,
                end_offset,
                buffer_size,
            } => todo!(),
            ClearError::MissingBufferUsage(missing_buffer_usage_error) => todo!(),
            ClearError::MissingTextureAspect {
                texture_format,
                subresource_range_aspects,
            } => todo!(),
            ClearError::InvalidTextureLevelRange {
                texture_level_range,
                subresource_base_mip_level,
                subresource_mip_level_count,
            } => todo!(),
            ClearError::InvalidTextureLayerRange {
                texture_layer_range,
                subresource_base_array_layer,
                subresource_array_layer_count,
            } => todo!(),
            ClearError::Device(device_error) => todo!(),
            ClearError::CommandEncoderError(command_encoder_error) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CopyError(copy_error) => match copy_error {
            CopyError::Encoder(command_encoder_error) => todo!(),
            CopyError::Transfer(transfer_error) => todo!(),
            CopyError::DestroyedResource(destroyed_resource_error) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::QueryError(query_error) => match query_error {
            QueryError::Device(device_error) => todo!(),
            QueryError::Encoder(command_encoder_error) => todo!(),
            QueryError::MissingFeature(missing_features) => todo!(),
            QueryError::Use(query_use_error) => todo!(),
            QueryError::Resolve(resolve_error) => todo!(),
            QueryError::InvalidBufferId(id) => todo!(),
            QueryError::DestroyedResource(destroyed_resource_error) => todo!(),
            QueryError::InvalidQuerySetId(id) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::ComputePassError(compute_pass_error) => todo!(),
        RuntimeErrors::GetBindGroupLayoutError(get_bind_group_layout_error) => {
            match get_bind_group_layout_error {
                GetBindGroupLayoutError::InvalidPipeline => todo!(),
                GetBindGroupLayoutError::InvalidGroupIndex(_) => todo!(),
                _ => todo!(),
            }
        }
        RuntimeErrors::CreateBindGroupError(create_bind_group_error) => {
            match create_bind_group_error {
                CreateBindGroupError::Device(device_error) => todo!(),
                CreateBindGroupError::InvalidLayout => todo!(),
                CreateBindGroupError::InvalidBufferId(id) => todo!(),
                CreateBindGroupError::InvalidTextureViewId(id) => todo!(),
                CreateBindGroupError::InvalidSamplerId(id) => todo!(),
                CreateBindGroupError::DestroyedResource(destroyed_resource_error) => todo!(),
                CreateBindGroupError::BindingArrayPartialLengthMismatch { actual, expected } => {
                    todo!()
                }
                CreateBindGroupError::BindingArrayLengthMismatch { actual, expected } => todo!(),
                CreateBindGroupError::BindingArrayZeroLength => todo!(),
                CreateBindGroupError::BindingRangeTooLarge {
                    buffer,
                    range,
                    size,
                } => todo!(),
                CreateBindGroupError::BindingSizeTooSmall {
                    buffer,
                    actual,
                    min,
                } => todo!(),
                CreateBindGroupError::BindingZeroSize(resource_error_ident) => todo!(),
                CreateBindGroupError::BindingsNumMismatch { actual, expected } => todo!(),
                CreateBindGroupError::DuplicateBinding(_) => todo!(),
                CreateBindGroupError::MissingBindingDeclaration(_) => todo!(),
                CreateBindGroupError::MissingBufferUsage(missing_buffer_usage_error) => todo!(),
                CreateBindGroupError::MissingTextureUsage(missing_texture_usage_error) => todo!(),
                CreateBindGroupError::SingleBindingExpected => todo!(),
                CreateBindGroupError::UnalignedBufferOffset(_, _, _) => todo!(),
                CreateBindGroupError::BufferRangeTooLarge {
                    binding,
                    given,
                    limit,
                } => todo!(),
                CreateBindGroupError::WrongBindingType {
                    binding,
                    actual,
                    expected,
                } => todo!(),
                CreateBindGroupError::InvalidTextureMultisample {
                    binding,
                    layout_multisampled,
                    view_samples,
                } => todo!(),
                CreateBindGroupError::InvalidTextureSampleType {
                    binding,
                    layout_sample_type,
                    view_format,
                } => todo!(),
                CreateBindGroupError::InvalidTextureDimension {
                    binding,
                    layout_dimension,
                    view_dimension,
                } => todo!(),
                CreateBindGroupError::InvalidStorageTextureFormat {
                    binding,
                    layout_format,
                    view_format,
                } => todo!(),
                CreateBindGroupError::InvalidStorageTextureMipLevelCount {
                    binding,
                    mip_level_count,
                } => todo!(),
                CreateBindGroupError::WrongSamplerComparison {
                    binding,
                    layout_cmp,
                    sampler_cmp,
                } => todo!(),
                CreateBindGroupError::WrongSamplerFiltering {
                    binding,
                    layout_flt,
                    sampler_flt,
                } => todo!(),
                CreateBindGroupError::DepthStencilAspect => todo!(),
                CreateBindGroupError::StorageReadNotSupported(texture_format) => todo!(),
                CreateBindGroupError::ResourceUsageCompatibility(
                    resource_usage_compatibility_error,
                ) => todo!(),
                _ => todo!(),
            }
        }
        RuntimeErrors::CreateBindGroupLayoutError(create_bind_group_layout_error) => {
            match create_bind_group_layout_error {
                CreateBindGroupLayoutError::Device(device_error) => todo!(),
                CreateBindGroupLayoutError::ConflictBinding(_) => todo!(),
                CreateBindGroupLayoutError::Entry { binding, error } => todo!(),
                CreateBindGroupLayoutError::TooManyBindings(binding_type_max_count_error) => {
                    todo!()
                }
                CreateBindGroupLayoutError::InvalidBindingIndex { binding, maximum } => todo!(),
                CreateBindGroupLayoutError::InvalidVisibility(shader_stages) => todo!(),
                _ => todo!(),
            }
        }
        RuntimeErrors::CreateBufferError(create_buffer_error) => match create_buffer_error {
            CreateBufferError::Device(device_error) => todo!(),
            CreateBufferError::AccessError(buffer_access_error) => todo!(),
            CreateBufferError::UnalignedSize => todo!(),
            CreateBufferError::InvalidUsage(buffer_usages) => todo!(),
            CreateBufferError::UsageMismatch(buffer_usages) => todo!(),
            CreateBufferError::MaxBufferSize { requested, maximum } => todo!(),
            CreateBufferError::MissingDownlevelFlags(missing_downlevel_flags) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::DeviceError(device_error) => match device_error {
            DeviceError::Invalid(resource_error_ident) => todo!(),
            DeviceError::Lost => todo!(),
            DeviceError::OutOfMemory => todo!(),
            DeviceError::ResourceCreationFailed => todo!(),
            DeviceError::InvalidDeviceId => todo!(),
            DeviceError::DeviceMismatch(device_mismatch) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CreateComputePipelineError(create_compute_pipeline_error) => {
            match create_compute_pipeline_error {
                CreateComputePipelineError::Device(device_error) => todo!(),
                CreateComputePipelineError::InvalidLayout => todo!(),
                CreateComputePipelineError::InvalidCache => todo!(),
                CreateComputePipelineError::Implicit(implicit_layout_error) => todo!(),
                CreateComputePipelineError::Stage(stage_error) => todo!(),
                CreateComputePipelineError::Internal(_) => todo!(),
                CreateComputePipelineError::MissingDownlevelFlags(missing_downlevel_flags) => {
                    todo!()
                }
                _ => todo!(),
            }
        }
        RuntimeErrors::CreatePipelineLayoutError(create_pipeline_layout_error) => {
            match create_pipeline_layout_error {
                CreatePipelineLayoutError::Device(device_error) => todo!(),
                CreatePipelineLayoutError::InvalidBindGroupLayoutId(id) => todo!(),
                CreatePipelineLayoutError::MisalignedPushConstantRange { index, bound } => todo!(),
                CreatePipelineLayoutError::MissingFeatures(missing_features) => todo!(),
                CreatePipelineLayoutError::MoreThanOnePushConstantRangePerStage {
                    index,
                    provided,
                    intersected,
                } => todo!(),
                CreatePipelineLayoutError::PushConstantRangeTooLarge { index, range, max } => {
                    todo!()
                }
                CreatePipelineLayoutError::TooManyBindings(binding_type_max_count_error) => todo!(),
                CreatePipelineLayoutError::TooManyGroups { actual, max } => todo!(),
                _ => todo!(),
            }
        }
        RuntimeErrors::CreateQuerySetError(create_query_set_error) => {
            match create_query_set_error {
                CreateQuerySetError::Device(device_error) => todo!(),
                CreateQuerySetError::ZeroCount => todo!(),
                CreateQuerySetError::TooManyQueries { count, maximum } => todo!(),
                CreateQuerySetError::MissingFeatures(missing_features) => todo!(),
                _ => todo!(),
            }
        }
        RuntimeErrors::CreateRenderPipelineError(create_render_pipeline_error) => {
            match create_render_pipeline_error {
                CreateRenderPipelineError::ColorAttachment(color_attachment_error) => todo!(),
                CreateRenderPipelineError::Device(device_error) => todo!(),
                CreateRenderPipelineError::InvalidLayout => todo!(),
                CreateRenderPipelineError::InvalidCache => todo!(),
                CreateRenderPipelineError::Implicit(implicit_layout_error) => todo!(),
                CreateRenderPipelineError::ColorState(_, color_state_error) => todo!(),
                CreateRenderPipelineError::DepthStencilState(depth_stencil_state_error) => todo!(),
                CreateRenderPipelineError::InvalidSampleCount(_) => todo!(),
                CreateRenderPipelineError::TooManyVertexBuffers { given, limit } => todo!(),
                CreateRenderPipelineError::TooManyVertexAttributes { given, limit } => todo!(),
                CreateRenderPipelineError::VertexStrideTooLarge {
                    index,
                    given,
                    limit,
                } => todo!(),
                CreateRenderPipelineError::UnalignedVertexStride { index, stride } => todo!(),
                CreateRenderPipelineError::InvalidVertexAttributeOffset { location, offset } => {
                    todo!()
                }
                CreateRenderPipelineError::ShaderLocationClash(_) => todo!(),
                CreateRenderPipelineError::StripIndexFormatForNonStripTopology {
                    strip_index_format,
                    topology,
                } => todo!(),
                CreateRenderPipelineError::ConservativeRasterizationNonFillPolygonMode => todo!(),
                CreateRenderPipelineError::MissingFeatures(missing_features) => todo!(),
                CreateRenderPipelineError::MissingDownlevelFlags(missing_downlevel_flags) => {
                    todo!()
                }
                CreateRenderPipelineError::Stage { stage, error } => todo!(),
                CreateRenderPipelineError::Internal { stage, error } => todo!(),
                CreateRenderPipelineError::UnalignedShader {
                    group,
                    binding,
                    size,
                } => todo!(),
                CreateRenderPipelineError::BlendFactorOnUnsupportedTarget { factor, target } => {
                    todo!()
                }
                CreateRenderPipelineError::PipelineExpectsShaderToUseDualSourceBlending => todo!(),
                CreateRenderPipelineError::ShaderExpectsPipelineToUseDualSourceBlending => todo!(),
                CreateRenderPipelineError::NoTargetSpecified => todo!(),
                _ => todo!(),
            }
        }
        RuntimeErrors::CreateSamplerError(create_sampler_error) => match create_sampler_error {
            CreateSamplerError::Device(device_error) => todo!(),
            CreateSamplerError::InvalidLodMinClamp(_) => todo!(),
            CreateSamplerError::InvalidLodMaxClamp {
                lod_min_clamp,
                lod_max_clamp,
            } => todo!(),
            CreateSamplerError::InvalidAnisotropy(_) => todo!(),
            CreateSamplerError::InvalidFilterModeWithAnisotropy {
                filter_type,
                filter_mode,
                anisotropic_clamp,
            } => todo!(),
            CreateSamplerError::TooManyObjects => todo!(),
            CreateSamplerError::MissingFeatures(missing_features) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::ShaderParseError(shader_parse_error) => match shader_parse_error {
            ShaderParseError::Spirv(error) => todo!(),
            ShaderParseError::Glsl(parse_errors) => todo!(),
        },
        RuntimeErrors::CreateShaderModuleError(create_shader_module_error) => {
            match create_shader_module_error {
                CreateShaderModuleError::Parsing(shader_error) => todo!(),
                CreateShaderModuleError::ParsingGlsl(shader_error) => todo!(),
                CreateShaderModuleError::ParsingSpirV(shader_error) => todo!(),
                CreateShaderModuleError::Generation => todo!(),
                CreateShaderModuleError::Device(device_error) => todo!(),
                CreateShaderModuleError::Validation(shader_error) => todo!(),
                CreateShaderModuleError::MissingFeatures(missing_features) => todo!(),
                CreateShaderModuleError::InvalidGroupIndex { bind, group, limit } => todo!(),
                _ => todo!(),
            }
        }
        RuntimeErrors::CreateTextureError(create_texture_error) => match create_texture_error {
            CreateTextureError::Device(device_error) => todo!(),
            CreateTextureError::CreateTextureView(create_texture_view_error) => todo!(),
            CreateTextureError::InvalidUsage(texture_usages) => todo!(),
            CreateTextureError::InvalidDimension(texture_dimension_error) => todo!(),
            CreateTextureError::InvalidDepthDimension(texture_dimension, texture_format) => todo!(),
            CreateTextureError::InvalidCompressedDimension(texture_dimension, texture_format) => {
                todo!()
            }
            CreateTextureError::InvalidMipLevelCount { requested, maximum } => todo!(),
            CreateTextureError::InvalidFormatUsages(texture_usages, texture_format, _) => todo!(),
            CreateTextureError::InvalidViewFormat(texture_format, texture_format1) => todo!(),
            CreateTextureError::InvalidDimensionUsages(texture_usages, texture_dimension) => {
                todo!()
            }
            CreateTextureError::InvalidMultisampledStorageBinding => todo!(),
            CreateTextureError::InvalidMultisampledFormat(texture_format) => todo!(),
            CreateTextureError::InvalidSampleCount(_, texture_format, items, items1) => todo!(),
            CreateTextureError::MultisampledNotRenderAttachment => todo!(),
            CreateTextureError::MissingFeatures(texture_format, missing_features) => todo!(),
            CreateTextureError::MissingDownlevelFlags(missing_downlevel_flags) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::QueueWriteError(queue_write_error) => match queue_write_error {
            QueueWriteError::InvalidQueueId => todo!(),
            QueueWriteError::Queue(device_error) => todo!(),
            QueueWriteError::Transfer(transfer_error) => todo!(),
            QueueWriteError::MemoryInitFailure(clear_error) => todo!(),
            QueueWriteError::DestroyedResource(destroyed_resource_error) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::RenderPassError(render_pass_error) => todo!(),
        RuntimeErrors::CreateTextureViewError(create_texture_view_error) => {
            match create_texture_view_error {
                CreateTextureViewError::Device(device_error) => todo!(),
                CreateTextureViewError::InvalidTextureId(id) => todo!(),
                CreateTextureViewError::DestroyedResource(destroyed_resource_error) => todo!(),
                CreateTextureViewError::OutOfMemory => todo!(),
                CreateTextureViewError::InvalidTextureViewDimension { view, texture } => todo!(),
                CreateTextureViewError::InvalidMultisampledTextureViewDimension(
                    texture_view_dimension,
                ) => todo!(),
                CreateTextureViewError::InvalidCubemapTextureDepth { depth } => todo!(),
                CreateTextureViewError::InvalidCubemapArrayTextureDepth { depth } => todo!(),
                CreateTextureViewError::InvalidCubeTextureViewSize => todo!(),
                CreateTextureViewError::ZeroMipLevelCount => todo!(),
                CreateTextureViewError::ZeroArrayLayerCount => todo!(),
                CreateTextureViewError::TooManyMipLevels { requested, total } => todo!(),
                CreateTextureViewError::TooManyArrayLayers { requested, total } => todo!(),
                CreateTextureViewError::InvalidArrayLayerCount { requested, dim } => todo!(),
                CreateTextureViewError::InvalidAspect {
                    texture_format,
                    requested_aspect,
                } => todo!(),
                CreateTextureViewError::FormatReinterpretation { texture, view } => todo!(),
                _ => todo!(),
            }
        }
    };
}
