//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksViewControllerNetworkEventListener_Protocol_h
#define IGBloksViewControllerNetworkEventListener_Protocol_h
@import Foundation;

@protocol IGBloksViewControllerNetworkEventListener <NSObject>
/* instance methods */
- (void)bloksNetworkRequestStarted;
- (void)bloksNetworkRequestEndedWithError:(id)error;
@end

#endif /* IGBloksViewControllerNetworkEventListener_Protocol_h */