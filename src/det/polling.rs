use super::{scheduling::SchedulingStrategy, virtual_device::VirtualDevice};
use pollster::FutureExt as _;

fn complete_all(
    virtual_device: &mut VirtualDevice,
    run_poll_fn: impl FnOnce(wgt::Maintain<wgc::device::queue::WrappedSubmissionIndex>) -> bool,
) -> bool {
    // Ignore 'maintain_requested`, and complete all work regardless
    let maintain = wgt::Maintain::Wait;

    let queue_empty = run_poll_fn(maintain);

    // `queue_empty` should always be `true` here, or something went wrong.
    if !queue_empty {
        // TODO: Handle this correctly?
        panic!("polling_complete_all: queue_empty should always be true");
    }

    // All callbacks should have had their work completed by now, so call them all
    // (in the same order they were enqueued)
    virtual_device.state.callbacks.complete_all().block_on();

    // indicate that `queue_empty` is true
    true
}

fn already_complete(
    virtual_device: &mut VirtualDevice,
    run_poll_fn: impl FnOnce(wgt::Maintain<wgc::device::queue::WrappedSubmissionIndex>) -> bool,
) -> bool {
    // `has_items` should always be `false` here, or something went wrong.
    if virtual_device.state.callbacks.has_items() {
        // TODO: Handle this correctly?
        panic!("polling_already_complete: has_items should always be false");
    }

    // Run `run_poll_fn` anyway...
    let queue_empty = run_poll_fn(wgt::Maintain::Wait);

    // `queue_empty` should always be `true` here, or something went wrong.
    if !queue_empty {
        // TODO: Handle this correctly?
        panic!("polling_already_complete: queue_empty should always be true");
    }

    // indicate that `queue_empty` is true
    true
}

pub fn run_enqueue_strategy(
    virtual_device: &mut VirtualDevice,
    run_poll_fn: impl FnOnce(wgt::Maintain<wgc::device::queue::WrappedSubmissionIndex>) -> bool,
) -> bool {
    match virtual_device.config.scheduling_strategy {
        SchedulingStrategy::BeginImmediateCompleteImmediate => {
            // Complete all work immediately, implicitly calling run_poll_fn
            complete_all(virtual_device, run_poll_fn)
        }
        SchedulingStrategy::BeginImmediateCompleteOnPollAll => {
            // We don't need to do anything extra when enqueuing since we wait until polling
            true
        }
    }
}

pub fn run_poll_strategy(
    virtual_device: &mut VirtualDevice,
    run_poll_fn: impl FnOnce(wgt::Maintain<wgc::device::queue::WrappedSubmissionIndex>) -> bool,
    _maintain_requested: wgt::Maintain<wgc::device::queue::WrappedSubmissionIndex>,
) -> bool {
    match virtual_device.config.scheduling_strategy {
        SchedulingStrategy::BeginImmediateCompleteImmediate => {
            already_complete(virtual_device, run_poll_fn)
        }
        SchedulingStrategy::BeginImmediateCompleteOnPollAll => {
            complete_all(virtual_device, run_poll_fn)
        }
    }
}
