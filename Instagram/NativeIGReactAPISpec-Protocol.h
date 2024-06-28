//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NativeIGReactAPISpec_Protocol_h
#define NativeIGReactAPISpec_Protocol_h
@import Foundation;

@protocol NativeIGReactAPISpec <RCTBridgeModule, RCTTurboModule>
/* instance methods */
- (void)get:(id)get params:(id)params resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)post:(id)post params:(id)params resolve:(id /* block */)resolve reject:(id /* block */)reject;
@end

#endif /* NativeIGReactAPISpec_Protocol_h */