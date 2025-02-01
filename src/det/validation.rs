use crate::native;

// Additional backends should be ANDed together
static ALLOWED_BACKENDS_MASK: native::WGPUInstanceBackend = native::WGPUInstanceBackend_Vulkan;

#[inline]
pub fn validate_instance_descriptor(
    _base: &native::WGPUInstanceDescriptor,
    extras: Option<&native::WGPUInstanceExtras>,
) -> bool {
    if let Some(extras) = extras {
        let flags = extras.backends as native::WGPUInstanceBackend;
        if flags != native::WGPUInstanceBackend_All && (flags & ALLOWED_BACKENDS_MASK) == 0 {
            return false;
        }
    }

    true
}
