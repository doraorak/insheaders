//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGChainingFeedSectionControllerContext_h
#define IGChainingFeedSectionControllerContext_h
@import Foundation;

#include "IGScope.h"
#include "IGListAdapter.h"
#include "IGScopedObjectMap.h"
#include "IGSessionTracker.h"
#include "IGUserSession.h"

@class NSString;
@protocol IGChainingLoggingProvider, IGFeedConfigurationType, IGFeedItemChaining;

@interface IGChainingFeedSectionControllerContext : IGScope {
  /* instance variables */
  IGScopedObjectMap *_scopedObjectMap;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) NSObject<IGFeedConfigurationType> *feedConfiguration;
@property (readonly, nonatomic) IGSessionTracker *exploreSessionTracker;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) NSString *chainingSessionID;
@property (readonly, nonatomic) NSObject<IGFeedItemChaining> *feedItemChain;
@property (readonly, nonatomic) IGListAdapter *listAdapter;
@property (readonly, nonatomic) NSObject<IGChainingLoggingProvider> *loggingProvider;
@property (readonly, nonatomic) NSString *nudgeName;
@property (readonly, nonatomic) long long nudgePosition;

/* instance methods */
- (id)initWithUserSession:(id)session feedConfiguration:(id)configuration exploreSessionTracker:(id)tracker analyticsModule:(id)module chainingSessionID:(id)id feedItemChain:(id)chain listAdapter:(id)adapter loggingProvider:(id)provider nudgeName:(id)name nudgePosition:(long long)position;
- (id)valueWithInitializer:(undefined *)initializer;
@end

#endif /* IGChainingFeedSectionControllerContext_h */
