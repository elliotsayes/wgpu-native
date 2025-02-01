use super::virtual_state::VirtualState;
use pollster::FutureExt as _;

#[derive(Clone, Copy)]
pub enum PollingStrategy {
    WaitAllAndCallbackAll,
    // TODO: More optimized polling strategies?
}

fn wait_all_and_callback_all(
    virtual_state: &mut VirtualState,
    _maintain_requested: wgt::Maintain<wgc::device::queue::WrappedSubmissionIndex>,
    run_poll_fn: impl FnOnce(wgt::Maintain<wgc::device::queue::WrappedSubmissionIndex>) -> bool,
) -> bool {
    // Ignore 'maintain_requested`, and complete all work regardless
    let maintain = wgt::Maintain::Wait;

    let queue_empty = run_poll_fn(maintain);

    // `queue_empty` should always be `true` here, or something went wrong.
    if !queue_empty {
        // TODO: Handle this correctly?
        panic!("wgpuQueuePoll_wait_all_and_callback_all: queue_empty should always be true");
    }

    // All callbacks should have had their work completed by now, so call them all
    // (in the same order they were enqueued)
    virtual_state.callbacks.complete_all().block_on();
    
    // indicate that `queue_empty` is true
    true
}

pub fn run_polling_strategy(
    virtual_state: &mut VirtualState,
    maintain_requested: wgt::Maintain<wgc::device::queue::WrappedSubmissionIndex>,
    run_poll_fn: impl FnOnce(wgt::Maintain<wgc::device::queue::WrappedSubmissionIndex>) -> bool,
) -> bool {
    match virtual_state.polling_strategy {
        PollingStrategy::WaitAllAndCallbackAll => {
            wait_all_and_callback_all(virtual_state, maintain_requested, run_poll_fn)
        },
    }
}
