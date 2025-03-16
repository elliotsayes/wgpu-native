use super::{callback::PendingCallbacks, scheduling::SchedulingStrategy};

#[derive(Clone, Copy)]
pub struct VirtualConfig {
    pub scheduling_strategy: SchedulingStrategy,
}

impl Default for VirtualConfig {
    fn default() -> Self {
        Self {
            scheduling_strategy: SchedulingStrategy::default(),
        }
    }
}

pub struct VirtualState {
    pub callbacks: PendingCallbacks,
}

impl VirtualState {
    pub fn new() -> Self {
        Self {
            callbacks: PendingCallbacks::new(),
        }
    }
}

pub struct VirtualDevice {
    pub config: VirtualConfig,
    pub state: VirtualState,
}

impl VirtualDevice {
    pub fn new() -> Self {
        Self {
            config: VirtualConfig::default(),
            state: VirtualState::new(),
        }
    }

    pub fn new_with_config(config: VirtualConfig) -> Self {
        Self {
            config,
            state: VirtualState::new(),
        }
    }
}
