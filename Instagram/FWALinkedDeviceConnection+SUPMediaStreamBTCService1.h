//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FWALinkedDeviceConnection_SUPMediaStreamBTCService1_h
#define FWALinkedDeviceConnection_SUPMediaStreamBTCService1_h
@import Foundation;

@interface FWALinkedDeviceConnection (SUPMediaStreamBTCService1) <SUPMediaStreamConnection>
/* instance methods */
- (id)openChannelWithServiceID:(unsigned short)id onReceived:(id /* block */)received onError:(id /* block */)error onClosed:(id /* block */)closed;
@end

#endif /* FWALinkedDeviceConnection_SUPMediaStreamBTCService1_h */
