//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCopyRemoteAudioOperation_h
#define IGCopyRemoteAudioOperation_h
@import Foundation;

#include "NSOperation.h"
#include "IGAPIClient-Protocol.h"
#include "IGPostSessionLogger.h"
#include "IGRemoteAudioDownloader.h"
#include "IGUploadTaskDependency-Protocol.h"
#include "IGVideoComposition.h"

@class NSString;
@protocol IGCopyRemoteAudioOperationDelegate, OS_dispatch_queue;

@interface IGCopyRemoteAudioOperation : NSOperation<IGUploadTaskDependency> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<IGCopyRemoteAudioOperationDelegate> *_delegate;
  IGVideoComposition *_videoComposition;
  IGRemoteAudioDownloader *_downloader;
  NSString *_exportPath;
  BOOL _usePassthroughPreset;
  IGPostSessionLogger *_postSessionLogger;
  NSObject<IGAPIClient> *_networker;
}

@property (readonly, nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoComposition:(id)composition queue:(id)queue toPath:(id)path usePassthroughPreset:(BOOL)preset postSessionLogger:(id)logger networker:(id)networker delegate:(id)delegate;
- (void)start;
- (void)cancel;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (BOOL)isAsynchronous;
- (BOOL)isFinishedWithSuccess;
@end

#endif /* IGCopyRemoteAudioOperation_h */