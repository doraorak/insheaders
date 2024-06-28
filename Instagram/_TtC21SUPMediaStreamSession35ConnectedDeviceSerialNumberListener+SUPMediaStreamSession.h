//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC21SUPMediaStreamSession35ConnectedDeviceSerialNumberListener_SUPMediaStreamSession_h
#define _TtC21SUPMediaStreamSession35ConnectedDeviceSerialNumberListener_SUPMediaStreamSession_h
@import Foundation;

@interface _TtC21SUPMediaStreamSession35ConnectedDeviceSerialNumberListener (SUPMediaStreamSession) <SUPMediaStreamConnectionProvidingListening>
/* instance methods */
- (void)connectionProvider:(id)provider didOpenConnection:(id)connection;
- (void)connectionProviderDidEstablishInitialConnection:(id)connection deviceSerialNumber:(id)number deviceType:(id)type;
- (void)connectionProvider:(id)provider didCloseConnection:(id)connection error:(id)error shouldRestartStreaming:(BOOL)streaming;
- (void)connectionProviderDidStart:(id)start;
@end

#endif /* _TtC21SUPMediaStreamSession35ConnectedDeviceSerialNumberListener_SUPMediaStreamSession_h */
