use parking_lot::Mutex;

use super::virtual_device::VirtualConfig;

type MessageCallback =
    ::std::option::Option<unsafe extern "C" fn(message: *const ::std::os::raw::c_char)>;

pub type OnSystemNonDeterminismErrorCallback = MessageCallback;
pub type OnUnderqualifiedDeviceFailureCallback = MessageCallback;

pub struct DeterminismExtensionGlobalState {
    pub non_determinism_error_callback: OnSystemNonDeterminismErrorCallback,
    pub underqualified_device_failure_callback: OnUnderqualifiedDeviceFailureCallback,
    pub virtual_config: Option<VirtualConfig>,
}

pub static DETERMINISM_EXTENSION_GLOBAL_STATE: Mutex<DeterminismExtensionGlobalState> =
    Mutex::new(DeterminismExtensionGlobalState {
        non_determinism_error_callback: None,
        underqualified_device_failure_callback: None,
        virtual_config: None,
    });
