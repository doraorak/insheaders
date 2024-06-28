//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUploadTaskHolder_h
#define IGUploadTaskHolder_h
@import Foundation;

#include "IGUploadTaskListener-Protocol.h"
#include "IGUploadTaskType-Protocol.h"

@class NSString;
@protocol IGUploadTaskAnnouncer;

@interface IGUploadTaskHolder : NSObject<IGUploadTaskListener, IGUploadTaskType> {
  /* instance variables */
  NSObject<IGUploadTaskType> *_task;
  NSObject<IGUploadTaskAnnouncer> *_announcer;
  NSString *_taskId;
  NSString *_uploadId;
  double _progress;
  long long _status;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTask:(id)task;
- (id)taskId;
- (id)uploadId;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)cancel;
- (double)progress;
- (long long)status;
- (void)uploadTask:(id)task didUpdateToProgress:(double)progress;
- (void)uploadTask:(id)task didCompleteWithResponse:(id)response error:(id)error;
- (void)uploadTaskDidCancel:(id)cancel;
- (void)imageUploadTask:(id)task didUpdateWithRenderedImageSource:(id)source;
- (void)videoUploadTask:(id)task didUpdateWithVideoCoverImageSource:(id)source;
- (void)videoUploadTask:(id)task didUpdateWithRenderedVideoUrl:(id)url;
- (void)videoUploadTask:(id)task didCreateCacheableVideoAtURL:(id)url;
- (void)videoUploadTask:(id)task didStartAutoRetryWithCurrentProgress:(double)progress;
- (void)videoUploadTaskDidSuspendProcessing:(id)processing;
@end

#endif /* IGUploadTaskHolder_h */