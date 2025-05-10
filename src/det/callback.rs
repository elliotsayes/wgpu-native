use future_handles::HandleError;
use log::{debug, error};
use std::{
    collections::LinkedList,
    fmt::{Debug, Formatter},
    future::Future,
    pin::Pin,
};

use crate::native;

pub struct QueuedCallback<C, A> {
    pub callback: C,
    pub callback_args_future: Pin<Box<dyn Future<Output = Result<A, HandleError>>>>,
}

impl<C, A> QueuedCallback<C, A> {
    pub fn new(
        callback: C,
        callback_args_future: impl Future<Output = Result<A, HandleError>> + 'static,
    ) -> Self {
        Self {
            callback,
            callback_args_future: Box::pin(callback_args_future),
        }
    }
}

pub struct BufferMapAsyncCallbackArgs {
    pub status: native::WGPUBufferMapAsyncStatus,
    pub userdata: *mut ::std::os::raw::c_void,
}
unsafe impl Send for BufferMapAsyncCallbackArgs {}
unsafe impl Sync for BufferMapAsyncCallbackArgs {}
pub type QueuedBufferMapAsyncCallback =
    QueuedCallback<native::WGPUBufferMapAsyncCallback, BufferMapAsyncCallbackArgs>;

pub struct QueueOnSubmittedWorkDoneCallbackArgs {
    pub status: native::WGPUQueueWorkDoneStatus,
    pub userdata: *mut ::std::os::raw::c_void,
}
unsafe impl Send for QueueOnSubmittedWorkDoneCallbackArgs {}
unsafe impl Sync for QueueOnSubmittedWorkDoneCallbackArgs {}
pub type QueuedQueueOnSubmittedWorkDoneCallback = QueuedCallback<
    native::WGPUQueueOnSubmittedWorkDoneCallback,
    QueueOnSubmittedWorkDoneCallbackArgs,
>;

pub enum UserCallbackQueueable {
    WGPUBufferMapAsyncCallback(QueuedBufferMapAsyncCallback),
    WGPUQueueOnSubmittedWorkDoneCallback(QueuedQueueOnSubmittedWorkDoneCallback),
}

impl Debug for UserCallbackQueueable {
    fn fmt(&self, f: &mut Formatter<'_>) -> std::fmt::Result {
        write!(f, "{}", match self {
            Self::WGPUBufferMapAsyncCallback(_) => "WGPUBufferMapAsyncCallback",
            Self::WGPUQueueOnSubmittedWorkDoneCallback(_) => "WGPUQueueOnSubmittedWorkDoneCallback",
        })
    }
}

impl UserCallbackQueueable {
    pub async fn complete(&mut self) {
        match self {
            UserCallbackQueueable::WGPUBufferMapAsyncCallback(queued_callback) => {
                debug!("Waiting for WGPUBufferMapAsyncCallback...");
                let args_result = queued_callback.callback_args_future.as_mut().await;
                match args_result {
                    Ok(args) => match queued_callback.callback {
                        Some(callback) => unsafe { callback(args.status, args.userdata) },
                        None => debug!("No callback"),
                    },
                    Err(err) => {
                        error!("HandleError: {}", err);
                        todo!("Who handles the `HandleError`?");
                    }
                }
            }
            UserCallbackQueueable::WGPUQueueOnSubmittedWorkDoneCallback(queued_callback) => {
                debug!("Waiting for WGPUQueueOnSubmittedWorkDoneCallback...");
                let args_result = queued_callback.callback_args_future.as_mut().await;
                match args_result {
                    Ok(args) => match queued_callback.callback {
                        Some(callback) => unsafe {
                            callback(args.status, args.userdata);
                        },
                        None => debug!("No callback"),
                    },
                    Err(err) => {
                        error!("HandleError: {}", err);
                        todo!("Who handles the `HandleError`?");
                    }
                }
            }
        }
    }
}

pub struct PendingCallbacks {
    callback_queue: LinkedList<UserCallbackQueueable>,
}

impl PendingCallbacks {
    pub fn new() -> Self {
        Self {
            callback_queue: LinkedList::new(),
        }
    }

    pub fn enqueue(&mut self, item: UserCallbackQueueable) {
        debug!("Enqueueing callback: {:?}", item);
        self.callback_queue.push_back(item);
    }

    pub async fn complete_one(&mut self) -> bool {
        debug!("Running complete_one...");
        let item_option = self.callback_queue.pop_front();
        if item_option.is_none() {
            debug!("No item to complete");
            return false;
        }

        let mut item = item_option.unwrap();
        item.complete().await;

        true
    }

    pub async fn complete_all(&mut self) -> usize {
        debug!("Running complete_all...");
        let mut completed_count = 0;
        while self.complete_one().await {
            completed_count += 1;
        }

        debug!("Completed {} callbacks", completed_count);
        completed_count
    }

    pub fn has_items(&self) -> bool {
        !self.callback_queue.is_empty()
    }

    pub fn len(&self) -> usize {
        self.callback_queue.len()
    }
}
