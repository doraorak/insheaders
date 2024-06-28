//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBTigonLigerServiceProvider_h
#define FBTigonLigerServiceProvider_h
@import Foundation;

@interface FBTigonLigerServiceProvider : NSObject
/* class methods */
+ (void)runWhenTigonLigerServiceReady:(id /* block */)ready onQueue:(id)queue;
+ (struct shared_ptr<facebook::tigon::TigonService> { struct TigonService * x0; struct __shared_weak_count * x1; })sharedTigonLigerService;
+ (void)initWithLigerConfig:(id)config tigonLigerPolicy:(void *)policy;
@end

#endif /* FBTigonLigerServiceProvider_h */
