//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC46IGFBCrossPostingDataMutatorAndProviderPlatform53IGFBFXServiceCacheCrossPostingDestinationDataProvider_h
#define _TtC46IGFBCrossPostingDataMutatorAndProviderPlatform53IGFBFXServiceCacheCrossPostingDestinationDataProvider_h
@import Foundation;

#include "FXCALAccount.h"
#include "FXCALIdentity.h"
#include "FXCustomCrossPostingServiceData.h"
#include "_TtP46IGFBCrossPostingDataMutatorAndProviderPlatform47IGFBCrossPostingDestinationDataProviderProtocol_-Protocol.h"

@class NSString;

@interface _TtC46IGFBCrossPostingDataMutatorAndProviderPlatform53IGFBFXServiceCacheCrossPostingDestinationDataProvider : NSObject<_TtP46IGFBCrossPostingDataMutatorAndProviderPlatform47IGFBCrossPostingDestinationDataProviderProtocol_> { // (Swift)
  /* instance variables */
   kIGFXCallerNameForFXAccount;
   kCrossPostingSettingServiceName;
   user;
   igFXCALManager;
   pandoGraphQLService;
   launcherSet;
   fbStoriesDestinationPrivacyInfoService;
   fbDefaultPrivacyMigrationStatusCache;
   latestFeedAudience;
   latestStoryAudience;
   latestError;
}

@property (nonatomic, readonly) NSString *dataProviderIdentifier;
@property (nonatomic, readonly) _TtC22IGFBCrossPostingModels27IGFBCrossPostingDestination *crossPostingDestination;
@property (nonatomic, readonly) FXCALAccount *linkedFbAccount;
@property (nonatomic, readonly) FXCALIdentity *linkedDestination;
@property (nonatomic, readonly) FXCustomCrossPostingServiceData *customCrossPostingServiceMetadata;

/* instance methods */
- (id)initWithUser:(id)user igFXCALManager:(id)fxcalmanager pandoGraphQLService:(id)qlservice launcherSet:(id)set fbStoriesDestinationPrivacyInfoService:(id)service fbDefaultPrivacyMigrationStatusCache:(id)cache;
- (void)refreshCrossPostingDestinationWithSuccess:(id /* block */)success failure:(id /* block */)failure;
- (id)init;
@end

#endif /* _TtC46IGFBCrossPostingDataMutatorAndProviderPlatform53IGFBFXServiceCacheCrossPostingDestinationDataProvider_h */
