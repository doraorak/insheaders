//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC21SUPMediaStreamSession19StreamClientService_SUPMediaStreamSession4_h
#define _TtC21SUPMediaStreamSession19StreamClientService_SUPMediaStreamSession4_h
@import Foundation;

@interface _TtC21SUPMediaStreamSession19StreamClientService (SUPMediaStreamSession4) <_TtP35SUPMediaStreamControlChannelService43SUPMediaStreamControlChannelServiceListener_>
/* instance methods */
- (void)controlChannelService:(id)service didOpen:(id)open;
- (void)controlChannelService:(id)service didClose:(id)close error:(id)error shouldRestartStreaming:(BOOL)streaming;
@end

#endif /* _TtC21SUPMediaStreamSession19StreamClientService_SUPMediaStreamSession4_h */