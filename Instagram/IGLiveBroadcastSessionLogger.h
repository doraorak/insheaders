//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveBroadcastSessionLogger_h
#define IGLiveBroadcastSessionLogger_h
@import Foundation;

#include "FBFacecastE2ELogger.h"
#include "FBFacecastLiveTraceLogger.h"
#include "FBVideoStreamingLogger-Protocol.h"
#include "IGLiveBroadcastLogger.h"
#include "IGLiveRoomLiveSwapQPLUserFlowLogger.h"

@class NSString;

@interface IGLiveBroadcastSessionLogger : NSObject<FBVideoStreamingLogger> {
  /* instance variables */
  FBFacecastE2ELogger *_e2eLogger;
  IGLiveBroadcastLogger *_logger;
  FBFacecastLiveTraceLogger *_liveTraceLogger;
  IGLiveRoomLiveSwapQPLUserFlowLogger *_liveSwapQPLLogger;
  unsigned long long _lastSeenCapturedFrameWidth;
  unsigned long long _lastSeenCapturedFrameHeight;
  unsigned long long _lastSeenAbrWidth;
  unsigned long long _lastSeenAbrHeight;
  NSString *_broadcastId;
  BOOL _isRsysInfra;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLogger:(id)logger;
- (void)setBaseTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp;
- (void)onFrameEncodedWithFrameID:(struct { long long x0; int x1; unsigned int x2; long long x3; })id;
- (void)onFrameSentWithFrameID:(struct { long long x0; int x1; unsigned int x2; long long x3; })id;
- (void)onBeginSwapToRTC;
- (void)onConnectToMWSWithSwapStats:(struct FBVideoBroadcastRtmpSwapStats { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })stats;
- (void)onFailToConnectToMWSWithDetails:(id)details;
- (void)onRTMPBroadcastEvent:(unsigned int)event;
- (void)onBeginSwapToRTMP;
- (void)onConnectForSwapToRTMP:(double)rtmp;
- (void)onFailToConnectForSwapToRTMP:(id)rtmp;
- (void)onFirstSwappedFrameWithLatency:(double)latency;
- (void)onFirstSwappedDVRAudioWithLatency:(double)latency;
- (void)logInvalidTransitionDuringSwap:(id)swap;
- (void)logRTCCallChangedFromCurrentOrInvitedGuestID:(id)id toCurrentOrInvitedGuestID:(id)id allGuestIDs:(id)ids;
- (void)logRTCCallStarted;
- (void)onRTCAudioSessionStartupWithLatency:(double)latency;
- (void)logRTCCallEventString:(id)string participantID:(id)id transitioningFromState:(id)state toState:(id)state;
- (void)logRTCCallEventString:(id)string participantID:(id)id error:(id)error;
- (void)logRTCCallEndedWithReason:(id)reason subreason:(id)subreason remoteEnded:(BOOL)ended;
- (void)logSessionStarted:(unsigned long long)started;
- (void)logSessionEnded:(unsigned long long)ended;
- (void)logSessionFailed:(unsigned long long)failed error:(id)error;
- (void)logLiveSwapFailedForUser:(id)user error:(id)error;
- (void)logLiveSwap;
- (void)logLiveSwapBack;
- (void)logBroadcastInterruption:(unsigned long long)interruption;
- (void)logBroadcastInterruptionEnded;
- (void)logEmbedLiveTraceID:(unsigned int)id bitrate:(int)bitrate framerate:(int)framerate pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })pts dts:(struct { long long x0; int x1; unsigned int x2; long long x3; })dts;
- (void)logEncodingError:(id)error;
- (void)logLiveWithGuestJoinFailed;
- (void)logLiveWithGuestDropped;
- (void)logLiveWithGuestInvitationFailed;
- (void)logEvent:(id)event extras:(id)extras;
@end

#endif /* IGLiveBroadcastSessionLogger_h */
