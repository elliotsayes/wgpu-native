use wgc::id::Marker;
use wgt::{Backend, Backends, PowerPreference};

const REQUIRED_BACKENDS_MASK: Backends = Backends::VULKAN.union(Backends::BROWSER_WEBGPU);
const REQUIRED_BACKEND_VEC: [Backend; 2] = [Backend::Vulkan, Backend::BrowserWebGpu];

const ALLOWED_FLAGS_MASK: wgt::InstanceFlags = wgt::InstanceFlags::empty();

pub fn validate_instance_descriptor(instance_desc: &wgt::InstanceDescriptor) -> Result<(), String> {
    // Make sure that the backends includes at least one of the required backends
    if instance_desc.backends & REQUIRED_BACKENDS_MASK == Backends::empty() {
        return Err("None of the required backends are present".to_string());
    }

    // Make sure that no flags outside of the allowed flags are set
    if instance_desc.flags & !ALLOWED_FLAGS_MASK != wgt::InstanceFlags::empty() {
        return Err("Some disallowed flags are set".to_string());
    }

    // ignore dx12_shader_compiler
    // ignore gles_minor_version

    Ok(())
}

const ALLOWED_POWER_PREFERENCE: [PowerPreference; 2] = [
    wgt::PowerPreference::None,
    wgt::PowerPreference::HighPerformance,
];

pub fn validate_request_adapter_options<S, M: Marker>(
    options: &wgt::RequestAdapterOptions<S>,
    inputs: &wgc::instance::AdapterInputs<M>,
) -> Result<(), String> {
    if !ALLOWED_POWER_PREFERENCE.contains(&options.power_preference) {
        return Err("Some disallowed power preferences are set".to_string());
    }

    if options.force_fallback_adapter {
        return Err("force_fallback_adapter is set".to_string());
    }

    if options.compatible_surface.is_some() {
        return Err("compatible_surface is set".to_string());
    }

    if !match inputs {
        wgc::instance::AdapterInputs::IdSet(ids) => {
            let mut found = false;
            for id in ids.into_iter() {
                if REQUIRED_BACKEND_VEC.contains(&id.backend()) {
                    found = true;
                    break;
                }
            }
            found
        }
        wgc::instance::AdapterInputs::Mask(backends, _) => {
            *backends & REQUIRED_BACKENDS_MASK != Backends::empty()
        }
    } {
        return Err("None of the required backends are present".to_string());
    }

    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_instance_descriptor_valid() {
        let instance_desc = wgt::InstanceDescriptor {
            backends: Backends::VULKAN,
            flags: wgt::InstanceFlags::empty(),
            dx12_shader_compiler: wgt::Dx12Compiler::Fxc,
            gles_minor_version: wgt::Gles3MinorVersion::Automatic,
        };
        assert!(validate_instance_descriptor(&instance_desc).is_ok());
    }

    #[test]
    fn test_instance_descriptor_wrong_backend() {
        let instance_desc = wgt::InstanceDescriptor {
            backends: Backends::DX12,
            flags: wgt::InstanceFlags::empty(),
            dx12_shader_compiler: wgt::Dx12Compiler::Fxc,
            gles_minor_version: wgt::Gles3MinorVersion::Automatic,
        };
        assert!(matches!(
            validate_instance_descriptor(&instance_desc),
            Err(e) if e.starts_with("None of the required backends are present")
        ));
    }

    #[test]
    fn test_instance_descriptor_wrong_flag() {
        let instance_desc = wgt::InstanceDescriptor {
            backends: Backends::VULKAN,
            flags: wgt::InstanceFlags::debugging(),
            dx12_shader_compiler: wgt::Dx12Compiler::Fxc,
            gles_minor_version: wgt::Gles3MinorVersion::Automatic,
        };
        assert!(matches!(
            validate_instance_descriptor(&instance_desc),
            Err(e) if e.starts_with("Some disallowed flags are set")
        ));
    }

    #[test]
    fn test_request_adapter_options_valid() {
        let options = wgt::RequestAdapterOptions::<()> {
            power_preference: wgt::PowerPreference::None,
            force_fallback_adapter: false,
            compatible_surface: None,
        };
        let inputs = wgc::instance::AdapterInputs::<wgc::id::markers::Surface>::Mask(
            wgt::Backends::VULKAN,
            |_| None,
        );
        assert!(validate_request_adapter_options(&options, &inputs).is_ok());
    }

    #[test]
    fn test_request_adapter_options_wrong_power_preference() {
        let options = wgt::RequestAdapterOptions::<()> {
            power_preference: wgt::PowerPreference::LowPower,
            force_fallback_adapter: false,
            compatible_surface: None,
        };
        let inputs = wgc::instance::AdapterInputs::<wgc::id::markers::Surface>::Mask(
            wgt::Backends::VULKAN,
            |_| None,
        );
        assert!(matches!(
            validate_request_adapter_options(&options, &inputs),
            Err(e) if e.starts_with("Some disallowed power preferences are set")
        ));
    }

    #[test]
    fn test_request_adapter_options_wrong_force_fallback_adapter() {
        let options = wgt::RequestAdapterOptions::<()> {
            power_preference: wgt::PowerPreference::None,
            force_fallback_adapter: true,
            compatible_surface: None,
        };
        let inputs = wgc::instance::AdapterInputs::<wgc::id::markers::Surface>::Mask(
            wgt::Backends::VULKAN,
            |_| None,
        );
        assert!(matches!(
            validate_request_adapter_options(&options, &inputs),
            Err(e) if e.starts_with("force_fallback_adapter is set")
        ));
    }

    #[test]
    fn test_request_adapter_options_wrong_backends() {
        let options = wgt::RequestAdapterOptions::<()> {
            power_preference: wgt::PowerPreference::None,
            force_fallback_adapter: false,
            compatible_surface: None,
        };
        let inputs = wgc::instance::AdapterInputs::<wgc::id::markers::Surface>::Mask(
            wgt::Backends::DX12,
            |_| None,
        );
        assert!(matches!(
            validate_request_adapter_options(&options, &inputs),
            Err(e) if e.starts_with("None of the required backends are present")
        ));
    }
}
