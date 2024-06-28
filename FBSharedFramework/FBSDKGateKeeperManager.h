//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKGateKeeperManager_h
#define FBSDKGateKeeperManager_h
@import Foundation;

#include "FBSDKGateKeeperManaging-Protocol.h"

@interface FBSDKGateKeeperManager : NSObject<FBSDKGateKeeperManaging>
/* class methods */
+ (void)initialize;
+ (void)configureWithSettings:(id)settings store:(id)store;
+ (BOOL)boolForKey:(id)key defaultValue:(BOOL)value;
+ (void)loadGateKeepers:(id /* block */)keepers;
+ (id)requestToLoadGateKeepers;
+ (void)processLoadRequestResponse:(id)response error:(id)error;
+ (void)_didProcessGKFromNetwork:(id)network;
+ (BOOL)_gateKeeperTimestampIsValid:(id)valid;
+ (BOOL)_gateKeeperIsValid;
+ (id)settings;
+ (id)gateKeepers;
+ (id)store;
@end

#endif /* FBSDKGateKeeperManager_h */
