//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SGProviderBusManagerProtocol_Protocol_h
#define SGProviderBusManagerProtocol_Protocol_h
@import Foundation;

@protocol SGProviderBusManagerProtocol <NSObject>
/* instance methods */
- (void)providerBusManager:(id)manager didReceiveMessage:(id)message busType:(unsigned long long)type;
- (void)providerBusManager:(id)manager didReceiveTestMessage:(id)message busType:(unsigned long long)type;
- (void)providerBusManagerDidReceiveUnsupportMessage:(id)message busType:(unsigned long long)type;
- (void)providerBusManager:(id)manager didReceiveError:(id)error busType:(unsigned long long)type;
- (void)providerBusManagerDidAttach:(id)attach busType:(unsigned long long)type;
- (void)providerBusManagerDidDetach:(id)detach busType:(unsigned long long)type;
- (void)providerBusManagerDidObserveBluetoothAuthorizationException:(id)exception busType:(unsigned long long)type;
@optional
/* instance methods */
- (void)providerBusManagerDidReceiveResponseToSendRequest:(id)request;
- (void)providerBusManagerDidReceiveResponseToSendRequest:(id)request;
@end

#endif /* SGProviderBusManagerProtocol_Protocol_h */