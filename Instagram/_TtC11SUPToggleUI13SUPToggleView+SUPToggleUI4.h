//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11SUPToggleUI13SUPToggleView_SUPToggleUI4_h
#define _TtC11SUPToggleUI13SUPToggleView_SUPToggleUI4_h
@import Foundation;

@interface _TtC11SUPToggleUI13SUPToggleView (SUPToggleUI4) <SUPMediaStreamSessionEventListener>
/* instance methods */
- (void)mediaStreamSessionDidEstablishInitialConnection:(id)connection;
- (void)mediaStreamSessionDidStart:(id)start;
- (void)mediaStreamSession:(id)session didPauseWithTimeout:(double)timeout;
- (void)mediaStreamSessionDidBeginStop:(id)stop;
- (void)mediaStreamSession:(id)session didStopWithStreamFeatureActive:(BOOL)active;
- (void)mediaStreamSession:(id)session didPrepareWithTimeout:(double)timeout;
- (void)mediaStreamSession:(id)session didFailToStartWithError:(unsigned long long)error;
- (void)mediaStreamSessionDidReceiveUserInitiatedStreamToggle:(id)toggle didToggleStreamWithValue:(BOOL)value;
- (void)mediaStreamSessionDidReceiveStreamPaused:(id)paused;
- (void)mediaStreamSessionDidReceiveUserEvent:(id)event didDonWithValue:(BOOL)value;
- (void)mediaStreamSessionDidReceiveTamperDetected:(id)detected;
- (void)mediaStreamSessionDidReceivePhotoCaptureRequest:(id)request;
- (void)mediaStreamSessionDidReceiveVideoCaptureToggleRequest:(id)request;
- (void)mediaStreamSession:(id)session didReceiveControlStreamStopped:(id)stopped;
- (void)mediaStreamSessionDidDisconnectAndWillRestartStreaming:(id)streaming;
- (void)mediaStreamSession:(id)session didFinishRestartingWithSuccess:(BOOL)success;
- (void)mediaStreamSession:(id)session didDisconnectFromCriticalClientError:(id)error;
- (void)mediaStreamSessionDidReceiveToggleCameraBackground:(id)background;
@end

#endif /* _TtC11SUPToggleUI13SUPToggleView_SUPToggleUI4_h */
