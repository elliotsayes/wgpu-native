#[repr(C)]
#[derive(Clone, Copy)]
pub enum SchedulingStrategy {
    // Runs the task immediately, blocks on completion and immediately runs the callback without waiting for poll
    BeginImmediateCompleteImmediate,
    
    // Begins running the task immediately, but defers completion until the device is polled
    // When polled, the device completes ALL queued tasks, regardless of what was requested
    BeginImmediateCompleteOnPollAll,

    // TODO: More optimized scheduling strategies?
}

impl Default for SchedulingStrategy {
    fn default() -> Self {
        Self::BeginImmediateCompleteImmediate
    }
}
