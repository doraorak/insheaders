//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGExploreNetworkFetchState_h
#define IGExploreNetworkFetchState_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGExploreNetworkerRequestConfig.h"

@class NSError, NSString;

@interface IGExploreNetworkFetchState : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGExploreNetworkerRequestConfig *_reloading_config;
  IGExploreNetworkerRequestConfig *_loadingMore_config;
  NSError *_failed_error;
  NSString *_failed_errorMessage;
}

/* class methods */
+ (id)failedWithError:(id)error errorMessage:(id)message;
+ (id)idle;
+ (id)loadingMoreWithConfig:(id)config;
+ (id)reloadingWithConfig:(id)config;

/* instance methods */
@end

#endif /* IGExploreNetworkFetchState_h */
