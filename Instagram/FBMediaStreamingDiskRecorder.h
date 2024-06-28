//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaStreamingDiskRecorder_h
#define FBMediaStreamingDiskRecorder_h
@import Foundation;

#include "FBDiskVideoRecorder-Protocol.h"

@class NSString;
@protocol {shared_ptr<mediastreaming::DvrManagerService>="__ptr_"^{DvrManagerService}"__cntrl_"^{__shared_weak_count}};

@interface FBMediaStreamingDiskRecorder : NSObject<FBDiskVideoRecorder> {
  /* instance variables */
  struct shared_ptr<mediastreaming::DvrManagerService> { struct DvrManagerService *__ptr_; struct __shared_weak_count *__cntrl_; } _dvrManager;
  id /* block */ _smartDVRUploadDecisionQuery;
  BOOL _smartDVRUpload;
}

@property (readonly, nonatomic) NSObject<FBDiskVideoRecorder> *baseRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDvrManager:(struct shared_ptr<mediastreaming::DvrManagerService> { struct DvrManagerService * x0; struct __shared_weak_count * x1; })manager;
- (id)initWithDvrManager:(struct shared_ptr<mediastreaming::DvrManagerService> { struct DvrManagerService * x0; struct __shared_weak_count * x1; })manager smartDVRUploadDecisionQuery:(id /* block */)query;
- (void)processVideo:(struct opaqueCMSampleBuffer *)video;
- (void)processAudio:(struct opaqueCMSampleBuffer *)audio;
- (void)pauseRecording;
- (void)stopStreaming;
- (void)forceStopDVRManager;
- (void)resumeRecording;
- (void)cleanup;
- (struct PromiseEither<NSError *, FBDiskVideoRecorderDiskResults *> { struct shared_ptr<FB::Promise<FB::Functional::Either<NSError *, FBDiskVideoRecorderDiskResults *>>> { void * x0; struct __shared_weak_count * x1; } x0; })finishRecording;
@end

#endif /* FBMediaStreamingDiskRecorder_h */
