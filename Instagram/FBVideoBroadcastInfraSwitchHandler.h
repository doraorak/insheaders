//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBVideoBroadcastInfraSwitchHandler_h
#define FBVideoBroadcastInfraSwitchHandler_h
@import Foundation;

#include "FBVideoBroadcastRTCSession-Protocol.h"
#include "FBVideoBroadcastRtmpSession-Protocol.h"
#include "FBVideoBroadcastSwitchableSessionDelegateShim-Protocol.h"
#include "FBVideoStreamingLiveSwapLoggerProtocol-Protocol.h"

@class FBTimer, NSDate;
@protocol FBVideoBroadcastSessionDelegate><FBVideoBroadcastSessionLiveWithDelegate;

@interface FBVideoBroadcastInfraSwitchHandler : NSObject {
  /* instance variables */
  unsigned long long _swapType;
  NSDate *_swapStartTimestamp;
  FBTimer *_swapBackTimeoutTimer;
  NSObject<FBVideoBroadcastRtmpSession> *_rtmpSession;
  NSObject<FBVideoBroadcastRTCSession> *_rtcSession;
  NSObject<FBVideoBroadcastSessionDelegate><FBVideoBroadcastSessionLiveWithDelegate> *_postSwapRTCSessionDelegate;
  BOOL _skipFlushDuringSwap;
  NSObject<FBVideoStreamingLiveSwapLoggerProtocol> *_logger;
  id /* block */ _completion;
  NSObject<FBVideoBroadcastSwitchableSessionDelegateShim> *_delegateShim;
}

/* instance methods */
- (id)initWithRTMPSession:(id)rtmpsession webRTCSession:(id)rtcsession postSwapRTCSessionDelegate:(id)delegate skipFlushDuringSwap:(BOOL)swap logger:(id)logger sessionDelegateShim:(id)shim;
- (void)broadcastSessionDidConnect;
- (void)broadcastSessionFailedToConnectWithResult:(struct FBVideoBroadcastSessionLoggingInfo { id x0; id x1; BOOL x2; })result;
- (void)broadcastSessionDidFail:(id)fail withLoggingInfo:(struct FBVideoBroadcastSessionLoggingInfo { id x0; id x1; BOOL x2; })info;
@end

#endif /* FBVideoBroadcastInfraSwitchHandler_h */
