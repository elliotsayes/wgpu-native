use std::{
    collections::LinkedList, fmt::{Debug, Formatter}, future::Future, pin::Pin
};
use future_handles::HandleError;
use log::{debug, error};

pub mod native {
    #![allow(non_upper_case_globals)]
    #![allow(non_camel_case_types)]
    #![allow(non_snake_case)]
    #![allow(dead_code)]
    include!(concat!(env!("OUT_DIR"), "/bindings.rs"));
}

pub struct QueuedCallback<C, A> {
    pub callback: C,
    pub callback_args_future: Pin<Box<dyn Future<Output = Result<A, HandleError>>>>,
}

impl<C, A> QueuedCallback<C, A> {
    pub fn new(callback: C, callback_args_future: impl Future<Output = Result<A, HandleError>> + 'static) -> Self {
        Self {
            callback,
            callback_args_future: Box::pin(callback_args_future),
        }
    }
}

// pub struct AdapterRequestDeviceCallbackArgs {
//     pub status: native::WGPURequestDeviceStatus,
//     pub device: native::WGPUDevice,
//     pub message: *const ::std::os::raw::c_char,
//     pub userdata: *mut ::std::os::raw::c_void,
// }
// unsafe impl Send for AdapterRequestDeviceCallbackArgs {}
// unsafe impl Sync for AdapterRequestDeviceCallbackArgs {}
// pub type QueuedAdapterRequestDeviceCallback = QueuedCallback<
//     native::WGPUAdapterRequestDeviceCallback,
//     AdapterRequestDeviceCallbackArgs,
// >;

pub struct BufferMapAsyncCallbackArgs {
    pub status: native::WGPUBufferMapAsyncStatus,
    pub userdata: *mut ::std::os::raw::c_void,
}
unsafe impl Send for BufferMapAsyncCallbackArgs {}
unsafe impl Sync for BufferMapAsyncCallbackArgs {}
pub type QueuedBufferMapAsyncCallback = QueuedCallback<
    native::WGPUBufferMapAsyncCallback,
    BufferMapAsyncCallbackArgs,
>;

// pub struct ErrorCallbackArgs {
//     pub type_: native::WGPUErrorType,
//     pub message: *const ::std::os::raw::c_char,
//     pub userdata: *mut ::std::os::raw::c_void,
// }
// unsafe impl Send for ErrorCallbackArgs {}
// unsafe impl Sync for ErrorCallbackArgs {}
// pub type QueuedErrorCallback = QueuedCallback<
//     native::WGPUErrorCallback,
//     ErrorCallbackArgs,
// >;

// pub struct InstanceRequestAdapterCallbackArgs {
//     pub status: native::WGPURequestAdapterStatus,
//     pub adapter: native::WGPUAdapter,
//     pub message: *const ::std::os::raw::c_char,
//     pub userdata: *mut ::std::os::raw::c_void,
// }
// unsafe impl Send for InstanceRequestAdapterCallbackArgs {}
// unsafe impl Sync for InstanceRequestAdapterCallbackArgs {}
// pub type QueuedInstanceRequestAdapterCallback = QueuedCallback<
//     native::WGPUInstanceRequestAdapterCallback,
//     InstanceRequestAdapterCallbackArgs,
// >;

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

pub enum UserCallback {
    // WGPUAdapterRequestDeviceCallback(QueuedAdapterRequestDeviceCallback),
    WGPUBufferMapAsyncCallback(QueuedBufferMapAsyncCallback),
    // WGPUErrorCallback(QueuedErrorCallback),
    // WGPUInstanceRequestAdapterCallback(QueuedInstanceRequestAdapterCallback),
    WGPUQueueOnSubmittedWorkDoneCallback(QueuedQueueOnSubmittedWorkDoneCallback),
}

impl Debug for UserCallback {
    fn fmt(&self, f: &mut Formatter<'_>) -> std::fmt::Result {
        match self {
            // Self::WGPUAdapterRequestDeviceCallback(_) => write!(f, "WGPUAdapterRequestDeviceCallback"),
            Self::WGPUBufferMapAsyncCallback(_) => write!(f, "WGPUBufferMapAsyncCallback"),
            // Self::WGPUErrorCallback(_) => write!(f, "WGPUErrorCallback"),
            // Self::WGPUInstanceRequestAdapterCallback(_) => write!(f, "WGPUInstanceRequestAdapterCallback"),
            Self::WGPUQueueOnSubmittedWorkDoneCallback(_) => write!(f, "WGPUQueueOnSubmittedWorkDoneCallback"),
        }
    }
}

pub struct Callbacks {
    callback_queue: LinkedList<UserCallback>,
}

impl Callbacks {
    pub fn new() -> Self {
        Self { callback_queue: LinkedList::new() }
    }

    pub fn enqueue(&mut self, item: UserCallback) {
        debug!("Enqueueing callback: {:?}", item);
        self.callback_queue.push_back(item);
    }

    pub async fn complete_one(&mut self) -> bool {
        debug!("Running complete_one...");
        let item_option = self.callback_queue.pop_front();
        if item_option.is_none() {
            return false
        }

        let item = item_option.unwrap();

        match item {
            // UserCallback::WGPUAdapterRequestDeviceCallback(queued_callback) => {
            //     debug!("Waiting for WGPUAdapterRequestDeviceCallback...");
            //     let args_result = queued_callback.callback_args_future.await;
            //     match args_result {
            //         Ok(args) => {
            //             match queued_callback.callback {
            //                 Some(callback) => unsafe {
            //                     callback(args.status, args.device, args.message, args.userdata)
            //                 },
            //                 None => debug!("No callback")
            //             }
            //         }
            //         Err(err) => {
            //             error!("Handle error: {}", err);
            //             todo!("Who handles the `HandleError`?");
            //         }
            //     }
            // }
            UserCallback::WGPUBufferMapAsyncCallback(queued_callback) => {
                debug!("Waiting for WGPUBufferMapAsyncCallback...");
                let args_result = queued_callback.callback_args_future.await;
                match args_result {
                    Ok(args) => {
                        match queued_callback.callback {
                            Some(callback) => unsafe {
                                callback(args.status, args.userdata)
                            },
                            None => debug!("No callback")
                        }
                    }
                    Err(err) => {
                        error!("HandleError: {}", err);
                        todo!("Who handles the `HandleError`?");
                    }
                }
            },
            // UserCallback::WGPUErrorCallback(queued_callback) => {
            //     debug!("Waiting for Waiting for WGPUErrorCallback...");
            //     let args_result = queued_callback.callback_args_future.await;
            //     match args_result {
            //         Ok(args) => {
            //             match queued_callback.callback {
            //                 Some(callback) => unsafe {
            //                     callback(args.type_, args.message, args.userdata);
            //                 },
            //                 None => debug!("No callback")
            //             }
            //         }
            //         Err(err) => {
            //             error!("HandleError: {}", err);
            //             todo!("Who handles the `HandleError`?");
            //         }
            //     }
            // },
            // UserCallback::WGPUInstanceRequestAdapterCallback(queued_callback) => {
            //     debug!("Waiting for WGPUInstanceRequestAdapterCallback...");
            //     let args_result = queued_callback.callback_args_future.await;
            //     match args_result {
            //         Ok(args) => {
            //             match queued_callback.callback {
            //                 Some(callback) => unsafe {
            //                     callback(args.status, args.adapter, args.message, args.userdata)
            //                 },
            //                 None => debug!("No callback")
            //             }
            //         }
            //         Err(err) => {
            //             error!("HandleError: {}", err);
            //             todo!("Who handles the `HandleError`?");
            //         }
            //     }
            // },
            UserCallback::WGPUQueueOnSubmittedWorkDoneCallback(queued_callback) => {
                debug!("Waiting for WGPUQueueOnSubmittedWorkDoneCallback...");
                let args_result = queued_callback.callback_args_future.await;
                match args_result {
                    Ok(args) => {
                        match queued_callback.callback {
                            Some(callback) => unsafe {
                                callback(args.status, args.userdata);
                            },
                            None => debug!("No callback")
                        }
                    }
                    Err(err) => {
                        error!("HandleError: {}", err);
                        todo!("Who handles the `HandleError`?");
                    }
                }
            },
        }
        
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
