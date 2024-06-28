//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC21SUPMediaStreamSession19StreamClientService_SUPMediaStreamSession_h
#define _TtC21SUPMediaStreamSession19StreamClientService_SUPMediaStreamSession_h
@import Foundation;

@interface _TtC21SUPMediaStreamSession19StreamClientService (SUPMediaStreamSession) <SUPMediaStreamClientMediaListener>
/* instance methods */
- (void)receivedStreamVideoData:(id)data presentationTimeUs:(long long)us;
- (void)receivedStreamAudioData:(id)data presentationTimeUs:(long long)us;
- (void)receivedSystemHealthEvent:(id)event shouldFailImmediately:(BOOL)immediately;
- (void)receivedUserEvent:(id)event;
- (void)receivedControlStreamStopped:(id)stopped;
- (void)receivedStreamTelemetryEvent:(id)event;
@end

#endif /* _TtC21SUPMediaStreamSession19StreamClientService_SUPMediaStreamSession_h */