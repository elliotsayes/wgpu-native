use parking_lot::Mutex;

type MessageCallback =
    ::std::option::Option<unsafe extern "C" fn(message: *const ::std::os::raw::c_char)>;

pub type OnSystemNonDeterminismErrorCallback = MessageCallback;
pub type OnUnderqualifiedDeviceFailureCallback = MessageCallback;

pub struct DeterminismExtensionGlobalState {
    pub non_determinism_error_callback: OnSystemNonDeterminismErrorCallback,
    pub underqualified_device_failure_callback: OnUnderqualifiedDeviceFailureCallback,
}

impl DeterminismExtensionGlobalState {
    pub fn default() -> Self {
        Self {
            non_determinism_error_callback: None,
            underqualified_device_failure_callback: None,
        }
    }
}

pub static DETERMINISM_EXTENSION_GLOBAL_STATE: Mutex<Option<DeterminismExtensionGlobalState>> =
    Mutex::new(None);
