use std::{error, ffi::CString};

use crate::{det::global::DETERMINISM_EXTENSION_GLOBAL_STATE, format_error};

#[derive(Clone)]
pub enum RuntimeErrors {
    RequestDeviceError(wgc::instance::RequestDeviceError),
    BufferAccessError(wgc::resource::BufferAccessError),
    CommandEncoderError(wgc::command::CommandEncoderError),
    ClearError(wgc::command::ClearError),
    CopyError(wgc::command::CopyError),
    QueryError(wgc::command::QueryError),
    ComputePassError(wgc::command::ComputePassError),
    GetBindGroupLayoutError(wgc::binding_model::GetBindGroupLayoutError),
    CreateBindGroupError(wgc::binding_model::CreateBindGroupError),
    CreateBindGroupLayoutError(wgc::binding_model::CreateBindGroupLayoutError),
    CreateBufferError(wgc::resource::CreateBufferError),
    DeviceError(wgc::device::DeviceError),
    CreateComputePipelineError(wgc::pipeline::CreateComputePipelineError),
    CreatePipelineLayoutError(wgc::binding_model::CreatePipelineLayoutError),
    CreateQuerySetError(wgc::resource::CreateQuerySetError),
    CreateRenderPipelineError(wgc::pipeline::CreateRenderPipelineError),
    CreateSamplerError(wgc::resource::CreateSamplerError),
    ShaderParseError(crate::conv::ShaderParseError),
    CreateShaderModuleError(wgc::pipeline::CreateShaderModuleError),
    CreateTextureError(wgc::resource::CreateTextureError),
    QueueWriteError(wgc::device::queue::QueueWriteError),
    RenderPassError(wgc::command::RenderPassError),
    CreateTextureViewError(wgc::resource::CreateTextureViewError),
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

fn check_device_error_helper(device_error: wgc::device::DeviceError, operation: &'static str) {
    todo!()
    // if matches!(device_error, wgc::device::DeviceError::OutOfMemory) {
    //     handle_error_non_determinism(device_error, operation);
    // }
}

fn command_encoder_error_helper(
    command_encoder_error: wgc::command::CommandEncoderError,
    operation: &'static str,
) {
    todo!()
}

pub fn check_determinism_issue(error: RuntimeErrors, operation: &'static str) {
    match error {
        RuntimeErrors::RequestDeviceError(request_device_error) => match request_device_error {
            wgc::instance::RequestDeviceError::InvalidAdapter => todo!(),
            wgc::instance::RequestDeviceError::DeviceLost => todo!(),
            wgc::instance::RequestDeviceError::Internal => todo!(),
            wgc::instance::RequestDeviceError::LimitsExceeded(failed_limit) => todo!(),
            wgc::instance::RequestDeviceError::NoGraphicsQueue => todo!(),
            wgc::instance::RequestDeviceError::OutOfMemory => todo!(),
            wgc::instance::RequestDeviceError::UnsupportedFeature(features) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::BufferAccessError(buffer_access_error) => match buffer_access_error {
            wgc::resource::BufferAccessError::Device(device_error) => todo!(),
            wgc::resource::BufferAccessError::Failed => todo!(),
            wgc::resource::BufferAccessError::InvalidBufferId(id) => todo!(),
            wgc::resource::BufferAccessError::DestroyedResource(destroyed_resource_error) => todo!(),
            wgc::resource::BufferAccessError::AlreadyMapped => todo!(),
            wgc::resource::BufferAccessError::MapAlreadyPending => todo!(),
            wgc::resource::BufferAccessError::MissingBufferUsage(missing_buffer_usage_error) => todo!(),
            wgc::resource::BufferAccessError::NotMapped => todo!(),
            wgc::resource::BufferAccessError::UnalignedRange => todo!(),
            wgc::resource::BufferAccessError::UnalignedOffset { offset } => todo!(),
            wgc::resource::BufferAccessError::UnalignedRangeSize { range_size } => todo!(),
            wgc::resource::BufferAccessError::OutOfBoundsUnderrun { index, min } => todo!(),
            wgc::resource::BufferAccessError::OutOfBoundsOverrun { index, max } => todo!(),
            wgc::resource::BufferAccessError::NegativeRange { start, end } => todo!(),
            wgc::resource::BufferAccessError::MapAborted => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CommandEncoderError(command_encoder_error) => match command_encoder_error {
            wgc::command::CommandEncoderError::Invalid => todo!(),
            wgc::command::CommandEncoderError::NotRecording => todo!(),
            wgc::command::CommandEncoderError::Device(device_error) => todo!(),
            wgc::command::CommandEncoderError::Locked => todo!(),
            wgc::command::CommandEncoderError::InvalidTimestampWritesQuerySetId(id) => todo!(),
            wgc::command::CommandEncoderError::InvalidAttachmentId(id) => todo!(),
            wgc::command::CommandEncoderError::InvalidResolveTargetId(id) => todo!(),
            wgc::command::CommandEncoderError::InvalidDepthStencilAttachmentId(id) => todo!(),
            wgc::command::CommandEncoderError::InvalidOcclusionQuerySetId(id) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::ClearError(clear_error) => match clear_error {
            wgc::command::ClearError::MissingClearTextureFeature => todo!(),
            wgc::command::ClearError::InvalidBufferId(id) => todo!(),
            wgc::command::ClearError::InvalidTextureId(id) => todo!(),
            wgc::command::ClearError::DestroyedResource(destroyed_resource_error) => todo!(),
            wgc::command::ClearError::NoValidTextureClearMode(resource_error_ident) => todo!(),
            wgc::command::ClearError::UnalignedFillSize(_) => todo!(),
            wgc::command::ClearError::UnalignedBufferOffset(_) => todo!(),
            wgc::command::ClearError::OffsetPlusSizeExceeds64BitBounds { start_offset, requested_size } => todo!(),
            wgc::command::ClearError::BufferOverrun { start_offset, end_offset, buffer_size } => todo!(),
            wgc::command::ClearError::MissingBufferUsage(missing_buffer_usage_error) => todo!(),
            wgc::command::ClearError::MissingTextureAspect { texture_format, subresource_range_aspects } => todo!(),
            wgc::command::ClearError::InvalidTextureLevelRange { texture_level_range, subresource_base_mip_level, subresource_mip_level_count } => todo!(),
            wgc::command::ClearError::InvalidTextureLayerRange { texture_layer_range, subresource_base_array_layer, subresource_array_layer_count } => todo!(),
            wgc::command::ClearError::Device(device_error) => todo!(),
            wgc::command::ClearError::CommandEncoderError(command_encoder_error) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CopyError(copy_error) => match copy_error {
            wgc::command::CopyError::Encoder(command_encoder_error) => todo!(),
            wgc::command::CopyError::Transfer(transfer_error) => todo!(),
            wgc::command::CopyError::DestroyedResource(destroyed_resource_error) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::QueryError(query_error) => match query_error {
            wgc::command::QueryError::Device(device_error) => todo!(),
            wgc::command::QueryError::Encoder(command_encoder_error) => todo!(),
            wgc::command::QueryError::MissingFeature(missing_features) => todo!(),
            wgc::command::QueryError::Use(query_use_error) => todo!(),
            wgc::command::QueryError::Resolve(resolve_error) => todo!(),
            wgc::command::QueryError::InvalidBufferId(id) => todo!(),
            wgc::command::QueryError::DestroyedResource(destroyed_resource_error) => todo!(),
            wgc::command::QueryError::InvalidQuerySetId(id) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::ComputePassError(compute_pass_error) => todo!(),
        RuntimeErrors::GetBindGroupLayoutError(get_bind_group_layout_error) => match get_bind_group_layout_error {
            wgc::binding_model::GetBindGroupLayoutError::InvalidPipeline => todo!(),
            wgc::binding_model::GetBindGroupLayoutError::InvalidGroupIndex(_) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CreateBindGroupError(create_bind_group_error) => match create_bind_group_error {
            wgc::binding_model::CreateBindGroupError::Device(device_error) => todo!(),
            wgc::binding_model::CreateBindGroupError::InvalidLayout => todo!(),
            wgc::binding_model::CreateBindGroupError::InvalidBufferId(id) => todo!(),
            wgc::binding_model::CreateBindGroupError::InvalidTextureViewId(id) => todo!(),
            wgc::binding_model::CreateBindGroupError::InvalidSamplerId(id) => todo!(),
            wgc::binding_model::CreateBindGroupError::DestroyedResource(destroyed_resource_error) => todo!(),
            wgc::binding_model::CreateBindGroupError::BindingArrayPartialLengthMismatch { actual, expected } => todo!(),
            wgc::binding_model::CreateBindGroupError::BindingArrayLengthMismatch { actual, expected } => todo!(),
            wgc::binding_model::CreateBindGroupError::BindingArrayZeroLength => todo!(),
            wgc::binding_model::CreateBindGroupError::BindingRangeTooLarge { buffer, range, size } => todo!(),
            wgc::binding_model::CreateBindGroupError::BindingSizeTooSmall { buffer, actual, min } => todo!(),
            wgc::binding_model::CreateBindGroupError::BindingZeroSize(resource_error_ident) => todo!(),
            wgc::binding_model::CreateBindGroupError::BindingsNumMismatch { actual, expected } => todo!(),
            wgc::binding_model::CreateBindGroupError::DuplicateBinding(_) => todo!(),
            wgc::binding_model::CreateBindGroupError::MissingBindingDeclaration(_) => todo!(),
            wgc::binding_model::CreateBindGroupError::MissingBufferUsage(missing_buffer_usage_error) => todo!(),
            wgc::binding_model::CreateBindGroupError::MissingTextureUsage(missing_texture_usage_error) => todo!(),
            wgc::binding_model::CreateBindGroupError::SingleBindingExpected => todo!(),
            wgc::binding_model::CreateBindGroupError::UnalignedBufferOffset(_, _, _) => todo!(),
            wgc::binding_model::CreateBindGroupError::BufferRangeTooLarge { binding, given, limit } => todo!(),
            wgc::binding_model::CreateBindGroupError::WrongBindingType { binding, actual, expected } => todo!(),
            wgc::binding_model::CreateBindGroupError::InvalidTextureMultisample { binding, layout_multisampled, view_samples } => todo!(),
            wgc::binding_model::CreateBindGroupError::InvalidTextureSampleType { binding, layout_sample_type, view_format } => todo!(),
            wgc::binding_model::CreateBindGroupError::InvalidTextureDimension { binding, layout_dimension, view_dimension } => todo!(),
            wgc::binding_model::CreateBindGroupError::InvalidStorageTextureFormat { binding, layout_format, view_format } => todo!(),
            wgc::binding_model::CreateBindGroupError::InvalidStorageTextureMipLevelCount { binding, mip_level_count } => todo!(),
            wgc::binding_model::CreateBindGroupError::WrongSamplerComparison { binding, layout_cmp, sampler_cmp } => todo!(),
            wgc::binding_model::CreateBindGroupError::WrongSamplerFiltering { binding, layout_flt, sampler_flt } => todo!(),
            wgc::binding_model::CreateBindGroupError::DepthStencilAspect => todo!(),
            wgc::binding_model::CreateBindGroupError::StorageReadNotSupported(texture_format) => todo!(),
            wgc::binding_model::CreateBindGroupError::ResourceUsageCompatibility(resource_usage_compatibility_error) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CreateBindGroupLayoutError(create_bind_group_layout_error) => match create_bind_group_layout_error {
            wgc::binding_model::CreateBindGroupLayoutError::Device(device_error) => todo!(),
            wgc::binding_model::CreateBindGroupLayoutError::ConflictBinding(_) => todo!(),
            wgc::binding_model::CreateBindGroupLayoutError::Entry { binding, error } => todo!(),
            wgc::binding_model::CreateBindGroupLayoutError::TooManyBindings(binding_type_max_count_error) => todo!(),
            wgc::binding_model::CreateBindGroupLayoutError::InvalidBindingIndex { binding, maximum } => todo!(),
            wgc::binding_model::CreateBindGroupLayoutError::InvalidVisibility(shader_stages) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CreateBufferError(create_buffer_error) => match create_buffer_error {
            wgc::resource::CreateBufferError::Device(device_error) => todo!(),
            wgc::resource::CreateBufferError::AccessError(buffer_access_error) => todo!(),
            wgc::resource::CreateBufferError::UnalignedSize => todo!(),
            wgc::resource::CreateBufferError::InvalidUsage(buffer_usages) => todo!(),
            wgc::resource::CreateBufferError::UsageMismatch(buffer_usages) => todo!(),
            wgc::resource::CreateBufferError::MaxBufferSize { requested, maximum } => todo!(),
            wgc::resource::CreateBufferError::MissingDownlevelFlags(missing_downlevel_flags) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::DeviceError(device_error) => match device_error {
            wgc::device::DeviceError::Invalid(resource_error_ident) => todo!(),
            wgc::device::DeviceError::Lost => todo!(),
            wgc::device::DeviceError::OutOfMemory => todo!(),
            wgc::device::DeviceError::ResourceCreationFailed => todo!(),
            wgc::device::DeviceError::InvalidDeviceId => todo!(),
            wgc::device::DeviceError::DeviceMismatch(device_mismatch) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CreateComputePipelineError(create_compute_pipeline_error) => match create_compute_pipeline_error {
            wgc::pipeline::CreateComputePipelineError::Device(device_error) => todo!(),
            wgc::pipeline::CreateComputePipelineError::InvalidLayout => todo!(),
            wgc::pipeline::CreateComputePipelineError::InvalidCache => todo!(),
            wgc::pipeline::CreateComputePipelineError::Implicit(implicit_layout_error) => todo!(),
            wgc::pipeline::CreateComputePipelineError::Stage(stage_error) => todo!(),
            wgc::pipeline::CreateComputePipelineError::Internal(_) => todo!(),
            wgc::pipeline::CreateComputePipelineError::MissingDownlevelFlags(missing_downlevel_flags) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CreatePipelineLayoutError(create_pipeline_layout_error) => match create_pipeline_layout_error {
            wgc::binding_model::CreatePipelineLayoutError::Device(device_error) => todo!(),
            wgc::binding_model::CreatePipelineLayoutError::InvalidBindGroupLayoutId(id) => todo!(),
            wgc::binding_model::CreatePipelineLayoutError::MisalignedPushConstantRange { index, bound } => todo!(),
            wgc::binding_model::CreatePipelineLayoutError::MissingFeatures(missing_features) => todo!(),
            wgc::binding_model::CreatePipelineLayoutError::MoreThanOnePushConstantRangePerStage { index, provided, intersected } => todo!(),
            wgc::binding_model::CreatePipelineLayoutError::PushConstantRangeTooLarge { index, range, max } => todo!(),
            wgc::binding_model::CreatePipelineLayoutError::TooManyBindings(binding_type_max_count_error) => todo!(),
            wgc::binding_model::CreatePipelineLayoutError::TooManyGroups { actual, max } => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CreateQuerySetError(create_query_set_error) => match create_query_set_error {
            wgc::resource::CreateQuerySetError::Device(device_error) => todo!(),
            wgc::resource::CreateQuerySetError::ZeroCount => todo!(),
            wgc::resource::CreateQuerySetError::TooManyQueries { count, maximum } => todo!(),
            wgc::resource::CreateQuerySetError::MissingFeatures(missing_features) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CreateRenderPipelineError(create_render_pipeline_error) => match create_render_pipeline_error {
            wgc::pipeline::CreateRenderPipelineError::ColorAttachment(color_attachment_error) => todo!(),
            wgc::pipeline::CreateRenderPipelineError::Device(device_error) => todo!(),
            wgc::pipeline::CreateRenderPipelineError::InvalidLayout => todo!(),
            wgc::pipeline::CreateRenderPipelineError::InvalidCache => todo!(),
            wgc::pipeline::CreateRenderPipelineError::Implicit(implicit_layout_error) => todo!(),
            wgc::pipeline::CreateRenderPipelineError::ColorState(_, color_state_error) => todo!(),
            wgc::pipeline::CreateRenderPipelineError::DepthStencilState(depth_stencil_state_error) => todo!(),
            wgc::pipeline::CreateRenderPipelineError::InvalidSampleCount(_) => todo!(),
            wgc::pipeline::CreateRenderPipelineError::TooManyVertexBuffers { given, limit } => todo!(),
            wgc::pipeline::CreateRenderPipelineError::TooManyVertexAttributes { given, limit } => todo!(),
            wgc::pipeline::CreateRenderPipelineError::VertexStrideTooLarge { index, given, limit } => todo!(),
            wgc::pipeline::CreateRenderPipelineError::UnalignedVertexStride { index, stride } => todo!(),
            wgc::pipeline::CreateRenderPipelineError::InvalidVertexAttributeOffset { location, offset } => todo!(),
            wgc::pipeline::CreateRenderPipelineError::ShaderLocationClash(_) => todo!(),
            wgc::pipeline::CreateRenderPipelineError::StripIndexFormatForNonStripTopology { strip_index_format, topology } => todo!(),
            wgc::pipeline::CreateRenderPipelineError::ConservativeRasterizationNonFillPolygonMode => todo!(),
            wgc::pipeline::CreateRenderPipelineError::MissingFeatures(missing_features) => todo!(),
            wgc::pipeline::CreateRenderPipelineError::MissingDownlevelFlags(missing_downlevel_flags) => todo!(),
            wgc::pipeline::CreateRenderPipelineError::Stage { stage, error } => todo!(),
            wgc::pipeline::CreateRenderPipelineError::Internal { stage, error } => todo!(),
            wgc::pipeline::CreateRenderPipelineError::UnalignedShader { group, binding, size } => todo!(),
            wgc::pipeline::CreateRenderPipelineError::BlendFactorOnUnsupportedTarget { factor, target } => todo!(),
            wgc::pipeline::CreateRenderPipelineError::PipelineExpectsShaderToUseDualSourceBlending => todo!(),
            wgc::pipeline::CreateRenderPipelineError::ShaderExpectsPipelineToUseDualSourceBlending => todo!(),
            wgc::pipeline::CreateRenderPipelineError::NoTargetSpecified => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CreateSamplerError(create_sampler_error) => match create_sampler_error {
            wgc::resource::CreateSamplerError::Device(device_error) => todo!(),
            wgc::resource::CreateSamplerError::InvalidLodMinClamp(_) => todo!(),
            wgc::resource::CreateSamplerError::InvalidLodMaxClamp { lod_min_clamp, lod_max_clamp } => todo!(),
            wgc::resource::CreateSamplerError::InvalidAnisotropy(_) => todo!(),
            wgc::resource::CreateSamplerError::InvalidFilterModeWithAnisotropy { filter_type, filter_mode, anisotropic_clamp } => todo!(),
            wgc::resource::CreateSamplerError::TooManyObjects => todo!(),
            wgc::resource::CreateSamplerError::MissingFeatures(missing_features) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::ShaderParseError(shader_parse_error) => match shader_parse_error {
            crate::conv::ShaderParseError::Spirv(error) => todo!(),
            crate::conv::ShaderParseError::Glsl(parse_errors) => todo!(),
        },
        RuntimeErrors::CreateShaderModuleError(create_shader_module_error) => match create_shader_module_error {
            wgc::pipeline::CreateShaderModuleError::Parsing(shader_error) => todo!(),
            wgc::pipeline::CreateShaderModuleError::ParsingGlsl(shader_error) => todo!(),
            wgc::pipeline::CreateShaderModuleError::ParsingSpirV(shader_error) => todo!(),
            wgc::pipeline::CreateShaderModuleError::Generation => todo!(),
            wgc::pipeline::CreateShaderModuleError::Device(device_error) => todo!(),
            wgc::pipeline::CreateShaderModuleError::Validation(shader_error) => todo!(),
            wgc::pipeline::CreateShaderModuleError::MissingFeatures(missing_features) => todo!(),
            wgc::pipeline::CreateShaderModuleError::InvalidGroupIndex { bind, group, limit } => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::CreateTextureError(create_texture_error) => match create_texture_error {
            wgc::resource::CreateTextureError::Device(device_error) => todo!(),
            wgc::resource::CreateTextureError::CreateTextureView(create_texture_view_error) => todo!(),
            wgc::resource::CreateTextureError::InvalidUsage(texture_usages) => todo!(),
            wgc::resource::CreateTextureError::InvalidDimension(texture_dimension_error) => todo!(),
            wgc::resource::CreateTextureError::InvalidDepthDimension(texture_dimension, texture_format) => todo!(),
            wgc::resource::CreateTextureError::InvalidCompressedDimension(texture_dimension, texture_format) => todo!(),
            wgc::resource::CreateTextureError::InvalidMipLevelCount { requested, maximum } => todo!(),
            wgc::resource::CreateTextureError::InvalidFormatUsages(texture_usages, texture_format, _) => todo!(),
            wgc::resource::CreateTextureError::InvalidViewFormat(texture_format, texture_format1) => todo!(),
            wgc::resource::CreateTextureError::InvalidDimensionUsages(texture_usages, texture_dimension) => todo!(),
            wgc::resource::CreateTextureError::InvalidMultisampledStorageBinding => todo!(),
            wgc::resource::CreateTextureError::InvalidMultisampledFormat(texture_format) => todo!(),
            wgc::resource::CreateTextureError::InvalidSampleCount(_, texture_format, items, items1) => todo!(),
            wgc::resource::CreateTextureError::MultisampledNotRenderAttachment => todo!(),
            wgc::resource::CreateTextureError::MissingFeatures(texture_format, missing_features) => todo!(),
            wgc::resource::CreateTextureError::MissingDownlevelFlags(missing_downlevel_flags) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::QueueWriteError(queue_write_error) => match queue_write_error {
            wgc::device::queue::QueueWriteError::InvalidQueueId => todo!(),
            wgc::device::queue::QueueWriteError::Queue(device_error) => todo!(),
            wgc::device::queue::QueueWriteError::Transfer(transfer_error) => todo!(),
            wgc::device::queue::QueueWriteError::MemoryInitFailure(clear_error) => todo!(),
            wgc::device::queue::QueueWriteError::DestroyedResource(destroyed_resource_error) => todo!(),
            _ => todo!(),
        },
        RuntimeErrors::RenderPassError(render_pass_error) => todo!(),
        RuntimeErrors::CreateTextureViewError(create_texture_view_error) => match create_texture_view_error {
            wgc::resource::CreateTextureViewError::Device(device_error) => todo!(),
            wgc::resource::CreateTextureViewError::InvalidTextureId(id) => todo!(),
            wgc::resource::CreateTextureViewError::DestroyedResource(destroyed_resource_error) => todo!(),
            wgc::resource::CreateTextureViewError::OutOfMemory => todo!(),
            wgc::resource::CreateTextureViewError::InvalidTextureViewDimension { view, texture } => todo!(),
            wgc::resource::CreateTextureViewError::InvalidMultisampledTextureViewDimension(texture_view_dimension) => todo!(),
            wgc::resource::CreateTextureViewError::InvalidCubemapTextureDepth { depth } => todo!(),
            wgc::resource::CreateTextureViewError::InvalidCubemapArrayTextureDepth { depth } => todo!(),
            wgc::resource::CreateTextureViewError::InvalidCubeTextureViewSize => todo!(),
            wgc::resource::CreateTextureViewError::ZeroMipLevelCount => todo!(),
            wgc::resource::CreateTextureViewError::ZeroArrayLayerCount => todo!(),
            wgc::resource::CreateTextureViewError::TooManyMipLevels { requested, total } => todo!(),
            wgc::resource::CreateTextureViewError::TooManyArrayLayers { requested, total } => todo!(),
            wgc::resource::CreateTextureViewError::InvalidArrayLayerCount { requested, dim } => todo!(),
            wgc::resource::CreateTextureViewError::InvalidAspect { texture_format, requested_aspect } => todo!(),
            wgc::resource::CreateTextureViewError::FormatReinterpretation { texture, view } => todo!(),
            _ => todo!(),
        },
    };
}
