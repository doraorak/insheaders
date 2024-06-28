//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKFeatureManager_h
#define FBSDKFeatureManager_h
@import Foundation;

#include "FBSDKFeatureChecking-Protocol.h"
#include "FBSDKFeatureDisabling-Protocol.h"
#include "FBSDKSettings-Protocol.h"

@protocol FBSDKDataPersisting;

@interface FBSDKFeatureManager : NSObject<FBSDKFeatureChecking, FBSDKFeatureDisabling>

@property (retain, nonatomic) Class gateKeeperManager;
@property (retain, nonatomic) NSObject<FBSDKSettings> *settings;
@property (retain, nonatomic) NSObject<FBSDKDataPersisting> *store;

/* class methods */
+ (id)shared;
+ (void)checkFeature:(unsigned long long)feature completionBlock:(id /* block */)block;
+ (unsigned long long)getParentFeature:(unsigned long long)feature;
+ (id)featureName:(unsigned long long)name;
+ (BOOL)defaultStatus:(unsigned long long)status;

/* instance methods */
- (void)configureWithGateKeeperManager:(Class)manager settings:(id)settings store:(id)store;
- (void)checkFeature:(unsigned long long)feature completionBlock:(id /* block */)block;
- (BOOL)isEnabled:(unsigned long long)enabled;
- (void)disableFeature:(unsigned long long)feature;
- (id)storageKeyForFeature:(unsigned long long)feature;
- (BOOL)checkGK:(unsigned long long)gk;
@end

#endif /* FBSDKFeatureManager_h */
