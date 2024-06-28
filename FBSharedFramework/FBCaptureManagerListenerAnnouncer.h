//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCaptureManagerListenerAnnouncer_h
#define FBCaptureManagerListenerAnnouncer_h
@import Foundation;

#include "FBAnnouncerBase.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface FBCaptureManagerListenerAnnouncer : FBAnnouncerBase<NSObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)captureManagerPreviewDidLoad;
- (void)captureManagerHasFinishedLoadingAudioSession;
- (void)captureManagerDidFailToLoadAudioSessionWithError:(id)error;
- (void)captureManagerHasFinishedLoadingCaptureSession;
- (void)captureManagerDidReceiveFirstVideoFrameFromCaptureSessionAtTime:(double)time;
- (void)captureManagerHasEndedCaptureSession;
- (void)captureManagerUpdatedPreviousCaptureDevice:(id)device toCurrentCaptureDevice:(id)device;
- (void)captureManagerDidBecomeInterruptedWithReason:(unsigned char)reason sessionType:(unsigned long long)type;
- (void)captureManagerDidResignInterruptedSessionType:(unsigned long long)type;
- (void)captureManagerDidEncounterRuntimeError:(id)error willRetry:(BOOL)retry sessionType:(unsigned long long)type;
- (void)captureManagerWillStartRunningSessionType:(unsigned long long)type;
- (void)captureManagerDidStartRunningSessionType:(unsigned long long)type;
- (void)captureManagerWillStopCaptureSessionType:(unsigned long long)type;
- (void)captureManagerDidStopRunningSessionType:(unsigned long long)type;
- (void)captureManagerSystemPressureLevelDidChange:(id)change;
- (void)captureManagerReactionEffectTriggered:(id)triggered;
@end

#endif /* FBCaptureManagerListenerAnnouncer_h */