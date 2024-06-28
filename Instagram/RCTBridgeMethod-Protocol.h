//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTBridgeMethod_Protocol_h
#define RCTBridgeMethod_Protocol_h
@import Foundation;

@protocol RCTBridgeMethod <NSObject>

@property (readonly, nonatomic) const char * JSMethodName;
@property (readonly, nonatomic) long long functionType;

/* instance methods */
- (id)invokeWithBridge:(id)bridge module:(id)module arguments:(id)arguments;
@end

#endif /* RCTBridgeMethod_Protocol_h */
