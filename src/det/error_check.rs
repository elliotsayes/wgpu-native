use wgc::{
    binding_model::{
        CreateBindGroupError, CreateBindGroupLayoutError, CreatePipelineLayoutError,
        GetBindGroupLayoutError,
    },
    command::{ClearError, CommandEncoderError, CopyError, QueryError},
    device::{queue::QueueWriteError, DeviceError, MissingDownlevelFlags, MissingFeatures},
    instance::RequestDeviceError,
    pipeline::{CreateComputePipelineError, CreateRenderPipelineError, CreateShaderModuleError},
    resource::{
        BufferAccessError, CreateBufferError, CreateQuerySetError, CreateSamplerError,
        CreateTextureError, CreateTextureViewError, DestroyedResourceError,
    },
};

use crate::conv::ShaderParseError;

use super::error::{CategorizedError, CategoryAndError, CoreError};

// TODO: Complete this
#[allow(unused_variables)]
pub fn get_category_and_root_error_dyn(error: CoreError) -> CategoryAndError {
    match error {
        CoreError::InvalidAdapter(invalid_adapter) => todo!(),
        CoreError::RequestDeviceError(request_device_error) => match request_device_error {
            RequestDeviceError::InvalidAdapter => {
                (CategorizedError::Deterministic, request_device_error.into())
            }
            RequestDeviceError::DeviceLost => {
                // Device cannot be destroyed while requesting, so any errors must come from non-deterministic system behavior
                (
                    CategorizedError::SystemNonDeterministic,
                    request_device_error.into(),
                )
            }
            RequestDeviceError::Internal => (
                CategorizedError::SystemNonDeterministic,
                request_device_error.into(),
            ),
            RequestDeviceError::LimitsExceeded(_) => {
                // Limits should be checked earlier to make sure they are within bounds
                (
                    CategorizedError::UnderqualifiedDeviceFailure,
                    request_device_error.into(),
                )
            }
            RequestDeviceError::NoGraphicsQueue => (
                CategorizedError::UnderqualifiedDeviceFailure,
                request_device_error.into(),
            ),
            RequestDeviceError::OutOfMemory => {
                // Out Of Memory can occur due to load on the physical device
                (
                    CategorizedError::SystemNonDeterministic,
                    request_device_error.into(),
                )
            }
            RequestDeviceError::UnsupportedFeature(features) => todo!(),
            _ => todo!(),
        },
        CoreError::BufferAccessError(buffer_access_error) => match buffer_access_error {
            BufferAccessError::Device(device_error) => device_error_helper(device_error),
            BufferAccessError::Failed => todo!(),
            BufferAccessError::InvalidBufferId(id) => todo!(),
            BufferAccessError::DestroyedResource(destroyed_resource_error) => {
                destroyed_resource_error_helper(destroyed_resource_error)
            }
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
        CoreError::CommandEncoderError(command_encoder_error) => {
            command_encoder_error_helper(command_encoder_error)
        }
        CoreError::ClearError(clear_error) => match clear_error {
            ClearError::MissingClearTextureFeature => todo!(),
            ClearError::InvalidBufferId(id) => todo!(),
            ClearError::InvalidTextureId(id) => todo!(),
            ClearError::DestroyedResource(destroyed_resource_error) => {
                destroyed_resource_error_helper(destroyed_resource_error)
            }
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
            ClearError::Device(device_error) => device_error_helper(device_error),
            ClearError::CommandEncoderError(command_encoder_error) => {
                command_encoder_error_helper(command_encoder_error)
            }
            _ => todo!(),
        },
        CoreError::CopyError(copy_error) => match copy_error {
            CopyError::Encoder(command_encoder_error) => {
                command_encoder_error_helper(command_encoder_error)
            }
            CopyError::Transfer(transfer_error) => todo!(),
            CopyError::DestroyedResource(destroyed_resource_error) => {
                destroyed_resource_error_helper(destroyed_resource_error)
            }
            _ => todo!(),
        },
        CoreError::QueryError(query_error) => match query_error {
            QueryError::Device(device_error) => device_error_helper(device_error),
            QueryError::Encoder(command_encoder_error) => {
                command_encoder_error_helper(command_encoder_error)
            }
            QueryError::MissingFeature(missing_features) => {
                missing_features_helper(missing_features)
            }
            QueryError::Use(query_use_error) => todo!(),
            QueryError::Resolve(resolve_error) => todo!(),
            QueryError::InvalidBufferId(id) => todo!(),
            QueryError::DestroyedResource(destroyed_resource_error) => {
                destroyed_resource_error_helper(destroyed_resource_error)
            }
            QueryError::InvalidQuerySetId(id) => todo!(),
            _ => todo!(),
        },
        CoreError::ComputePassError(compute_pass_error) => todo!(),
        CoreError::GetBindGroupLayoutError(get_bind_group_layout_error) => {
            match get_bind_group_layout_error {
                GetBindGroupLayoutError::InvalidPipeline => todo!(),
                GetBindGroupLayoutError::InvalidGroupIndex(_) => todo!(),
                _ => todo!(),
            }
        }
        CoreError::CreateBindGroupError(create_bind_group_error) => match create_bind_group_error {
            CreateBindGroupError::Device(device_error) => device_error_helper(device_error),
            CreateBindGroupError::InvalidLayout => todo!(),
            CreateBindGroupError::InvalidBufferId(id) => todo!(),
            CreateBindGroupError::InvalidTextureViewId(id) => todo!(),
            CreateBindGroupError::InvalidSamplerId(id) => todo!(),
            CreateBindGroupError::DestroyedResource(destroyed_resource_error) => {
                destroyed_resource_error_helper(destroyed_resource_error)
            }
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
        },
        CoreError::CreateBindGroupLayoutError(create_bind_group_layout_error) => {
            match create_bind_group_layout_error {
                CreateBindGroupLayoutError::Device(device_error) => {
                    device_error_helper(device_error)
                }
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
        CoreError::CreateBufferError(create_buffer_error) => match create_buffer_error {
            CreateBufferError::Device(device_error) => device_error_helper(device_error),
            CreateBufferError::AccessError(buffer_access_error) => todo!(),
            CreateBufferError::UnalignedSize => todo!(),
            CreateBufferError::InvalidUsage(buffer_usages) => todo!(),
            CreateBufferError::UsageMismatch(buffer_usages) => todo!(),
            CreateBufferError::MaxBufferSize { requested, maximum } => todo!(),
            CreateBufferError::MissingDownlevelFlags(missing_downlevel_flags) => {
                missing_downlevel_flags_helper(missing_downlevel_flags)
            }
            _ => todo!(),
        },
        CoreError::DeviceError(device_error) => match device_error {
            DeviceError::Invalid(resource_error_ident) => todo!(),
            DeviceError::Lost => todo!(),
            DeviceError::OutOfMemory => todo!(),
            DeviceError::ResourceCreationFailed => todo!(),
            DeviceError::InvalidDeviceId => todo!(),
            DeviceError::DeviceMismatch(device_mismatch) => todo!(),
            _ => todo!(),
        },
        CoreError::CreateComputePipelineError(create_compute_pipeline_error) => {
            match create_compute_pipeline_error {
                CreateComputePipelineError::Device(device_error) => {
                    device_error_helper(device_error)
                }
                CreateComputePipelineError::InvalidLayout => todo!(),
                CreateComputePipelineError::InvalidCache => todo!(),
                CreateComputePipelineError::Implicit(implicit_layout_error) => todo!(),
                CreateComputePipelineError::Stage(stage_error) => todo!(),
                CreateComputePipelineError::Internal(_) => todo!(),
                CreateComputePipelineError::MissingDownlevelFlags(missing_downlevel_flags) => {
                    missing_downlevel_flags_helper(missing_downlevel_flags)
                }
                _ => todo!(),
            }
        }
        CoreError::CreatePipelineLayoutError(create_pipeline_layout_error) => {
            match create_pipeline_layout_error {
                CreatePipelineLayoutError::Device(device_error) => {
                    device_error_helper(device_error)
                }
                CreatePipelineLayoutError::InvalidBindGroupLayoutId(id) => todo!(),
                CreatePipelineLayoutError::MisalignedPushConstantRange { index, bound } => todo!(),
                CreatePipelineLayoutError::MissingFeatures(missing_features) => {
                    missing_features_helper(missing_features)
                }
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
        CoreError::CreateQuerySetError(create_query_set_error) => match create_query_set_error {
            CreateQuerySetError::Device(device_error) => device_error_helper(device_error),
            CreateQuerySetError::ZeroCount => todo!(),
            CreateQuerySetError::TooManyQueries { count, maximum } => todo!(),
            CreateQuerySetError::MissingFeatures(missing_features) => {
                missing_features_helper(missing_features)
            }
            _ => todo!(),
        },
        CoreError::CreateRenderPipelineError(create_render_pipeline_error) => {
            match create_render_pipeline_error {
                CreateRenderPipelineError::ColorAttachment(color_attachment_error) => todo!(),
                CreateRenderPipelineError::Device(device_error) => {
                    device_error_helper(device_error)
                }
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
                CreateRenderPipelineError::MissingFeatures(missing_features) => {
                    missing_features_helper(missing_features)
                }
                CreateRenderPipelineError::MissingDownlevelFlags(missing_downlevel_flags) => {
                    missing_downlevel_flags_helper(missing_downlevel_flags)
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
        CoreError::CreateSamplerError(create_sampler_error) => match create_sampler_error {
            CreateSamplerError::Device(device_error) => device_error_helper(device_error),
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
            CreateSamplerError::MissingFeatures(missing_features) => {
                missing_features_helper(missing_features)
            }
            _ => todo!(),
        },
        CoreError::ShaderParseError(shader_parse_error) => match shader_parse_error {
            ShaderParseError::Spirv(error) => todo!(),
            ShaderParseError::Glsl(parse_errors) => todo!(),
        },
        CoreError::CreateShaderModuleError(create_shader_module_error) => {
            match create_shader_module_error {
                CreateShaderModuleError::Parsing(shader_error) => todo!(),
                CreateShaderModuleError::ParsingGlsl(shader_error) => todo!(),
                CreateShaderModuleError::ParsingSpirV(shader_error) => todo!(),
                CreateShaderModuleError::Generation => todo!(),
                CreateShaderModuleError::Device(device_error) => device_error_helper(device_error),
                CreateShaderModuleError::Validation(shader_error) => todo!(),
                CreateShaderModuleError::MissingFeatures(missing_features) => {
                    missing_features_helper(missing_features)
                }
                CreateShaderModuleError::InvalidGroupIndex { bind, group, limit } => todo!(),
                _ => todo!(),
            }
        }
        CoreError::CreateTextureError(create_texture_error) => match create_texture_error {
            CreateTextureError::Device(device_error) => device_error_helper(device_error),
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
            CreateTextureError::MissingDownlevelFlags(missing_downlevel_flags) => {
                missing_downlevel_flags_helper(missing_downlevel_flags)
            }
            _ => todo!(),
        },
        CoreError::QueueWriteError(queue_write_error) => match queue_write_error {
            QueueWriteError::InvalidQueueId => todo!(),
            QueueWriteError::Queue(device_error) => device_error_helper(device_error),
            QueueWriteError::Transfer(transfer_error) => todo!(),
            QueueWriteError::MemoryInitFailure(clear_error) => todo!(),
            QueueWriteError::DestroyedResource(destroyed_resource_error) => {
                destroyed_resource_error_helper(destroyed_resource_error)
            }
            _ => todo!(),
        },
        CoreError::RenderPassError(render_pass_error) => todo!(),
        CoreError::CreateTextureViewError(create_texture_view_error) => {
            match create_texture_view_error {
                CreateTextureViewError::Device(device_error) => device_error_helper(device_error),
                CreateTextureViewError::InvalidTextureId(id) => todo!(),
                CreateTextureViewError::DestroyedResource(destroyed_resource_error) => {
                    destroyed_resource_error_helper(destroyed_resource_error)
                }
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
    }
}

// TODO: Complete this
#[allow(unused_variables)]
fn device_error_helper(device_error: DeviceError) -> CategoryAndError {
    match device_error {
        DeviceError::Invalid(resource_error_ident) => todo!(),
        DeviceError::Lost => {
            // Lost devices can happen due to it being `.destroy()`ed by the API
            // However, a lost device in `check_determinism_issue` implies it was a system issue
            (
                CategorizedError::SystemNonDeterministic,
                device_error.into(),
            )
        }
        DeviceError::OutOfMemory => {
            // Out Of Memory can occur due to load on the physical device
            (
                CategorizedError::SystemNonDeterministic,
                device_error.into(),
            )
        }
        DeviceError::ResourceCreationFailed => todo!(),
        DeviceError::InvalidDeviceId => todo!(),
        DeviceError::DeviceMismatch(device_mismatch) => todo!(),
        _ => todo!(),
    }
}

// TODO: Complete this
#[allow(unused_variables)]
fn command_encoder_error_helper(command_encoder_error: CommandEncoderError) -> CategoryAndError {
    match command_encoder_error {
        CommandEncoderError::Invalid => todo!(),
        CommandEncoderError::NotRecording => todo!(),
        CommandEncoderError::Device(device_error) => device_error_helper(device_error),
        CommandEncoderError::Locked => todo!(),
        CommandEncoderError::InvalidTimestampWritesQuerySetId(id) => todo!(),
        CommandEncoderError::InvalidAttachmentId(id) => todo!(),
        CommandEncoderError::InvalidResolveTargetId(id) => todo!(),
        CommandEncoderError::InvalidDepthStencilAttachmentId(id) => todo!(),
        CommandEncoderError::InvalidOcclusionQuerySetId(id) => todo!(),
        _ => todo!(),
    }
}

// TODO: Complete this
#[allow(unused_variables)]
fn destroyed_resource_error_helper(
    destroyed_resource_error: DestroyedResourceError,
) -> CategoryAndError {
    (
        CategorizedError::Deterministic,
        destroyed_resource_error.into(),
    )
}

// TODO: Complete this
#[allow(unused_variables)]
fn missing_features_helper(missing_features: MissingFeatures) -> CategoryAndError {
    todo!()
}

// TODO: Complete this
#[allow(unused_variables)]
fn missing_downlevel_flags_helper(
    missing_downlevel_flags: MissingDownlevelFlags,
) -> CategoryAndError {
    todo!()
}
