use super::{callback::Callbacks, polling::PollingStrategy};


pub struct VirtualState {
    pub polling_strategy: PollingStrategy,
    pub callbacks: Callbacks,
}

impl VirtualState {
    pub fn new() -> Self {
        Self { 
            polling_strategy: PollingStrategy::WaitAllAndCallbackAll,
            callbacks: Callbacks::new(),
        }
    }
}
