//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxServiceNetworker_h
#define IGDirectInboxServiceNetworker_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGDirectInteropFeatureGating-Protocol.h"
#include "IGScheduler-Protocol.h"
#include "IGUser.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@protocol IGDirectInboxRequestProviding, IGDirectInboxServiceNetworkerResponseAdapter;

@interface IGDirectInboxServiceNetworker : NSObject {
  /* instance variables */
  IGUser *_user;
  NSObject<IGAPIClient> *_networker;
  NSObject<IGDirectInboxServiceNetworkerResponseAdapter> *_inboxServiceNetworkerResponseAdapter;
  NSObject<IGDirectInboxRequestProviding> *_inboxRequestProvider;
  NSObject<IGDirectInteropFeatureGating> *_interopFeatureGating;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
  NSObject<IGScheduler> *_backgroundScheduler;
}

/* instance methods */
- (id)initWithUser:(id)user networker:(id)networker inboxServiceNetworkerResponseAdapter:(id)adapter inboxRequestProvider:(id)provider interopFeatureGating:(id)gating launcherSetProvider:(id)provider backgroundScheduler:(id)scheduler;
@end

#endif /* IGDirectInboxServiceNetworker_h */
