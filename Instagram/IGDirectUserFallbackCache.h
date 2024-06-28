//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectUserFallbackCache_h
#define IGDirectUserFallbackCache_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGDirectInboxSubscriptionService, IGUserActions, IGUserStore, NSMutableDictionary, NSMutableSet, PNPandoGraphQLService;

@interface IGDirectUserFallbackCache : NSObject {
  /* instance variables */
  IGUserActions *_userActions;
  NSObject<IGAPIClient> *_networker;
  PNPandoGraphQLService *_pandoGraphQLService;
  IGDirectInboxSubscriptionService *_directInboxSubscriptionService;
  IGUserStore *_userStore;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  NSMutableDictionary *_users;
  NSMutableSet *_fetchedPks;
}

/* instance methods */
- (id)initWithUserActions:(id)actions networker:(id)networker pandoGraphQLService:(id)qlservice directInboxSubscriptionService:(id)service userStore:(id)store launcherSet:(id)set;
@end

#endif /* IGDirectUserFallbackCache_h */
