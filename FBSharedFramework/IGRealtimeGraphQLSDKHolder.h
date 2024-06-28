//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRealtimeGraphQLSDKHolder_h
#define IGRealtimeGraphQLSDKHolder_h
@import Foundation;

@protocol OS_dispatch_queue, {shared_ptr<facebook::rtgql::sdk::RealtimeGraphQLSDK>="__ptr_"^{RealtimeGraphQLSDK}"__cntrl_"^{__shared_weak_count}};

@interface IGRealtimeGraphQLSDKHolder : NSObject {
  /* instance variables */
  struct shared_ptr<facebook::rtgql::sdk::RealtimeGraphQLSDK> { struct RealtimeGraphQLSDK *__ptr_; struct __shared_weak_count *__cntrl_; } _sdk;
  NSObject<OS_dispatch_queue> *_setupQueue;
}

/* instance methods */
- (id)init;
@end

#endif /* IGRealtimeGraphQLSDKHolder_h */