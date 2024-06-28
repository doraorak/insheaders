//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivityFeedNetworkRequestConfig_h
#define IGActivityFeedNetworkRequestConfig_h
@import Foundation;

#include "IGActivityFeedFetchContainerConfig.h"

@class IGRequestPolicyBuilder;

@interface IGActivityFeedNetworkRequestConfig : NSObject {
  /* instance variables */
  IGActivityFeedFetchContainerConfig *_containerFetchConfig;
  IGRequestPolicyBuilder *_requestPolicyBuilder;
}

@property (readonly, nonatomic) long long fetchAction;

/* instance methods */
- (id)initWithFetchAction:(long long)action containerFetchConfig:(id)config;
@end

#endif /* IGActivityFeedNetworkRequestConfig_h */
