//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStorySharedListMemberListIntentTarget_h
#define IGStorySharedListMemberListIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGStorySharedListMemberListViewControllerDelegate-Protocol.h"

@class IGStorySharedList, IGUserSession, NSString;

@interface IGStorySharedListMemberListIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) IGStorySharedList *sharedList;
@property (readonly, nonatomic) NSObject<IGStorySharedListMemberListViewControllerDelegate> *delegate;
@property (readonly, nonatomic) long long listViewState;
@property (readonly, nonatomic) BOOL fromConsumptionEntrypoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session sharedList:(id)list delegate:(id)delegate listViewState:(long long)state fromConsumptionEntrypoint:(BOOL)entrypoint;
@end

#endif /* IGStorySharedListMemberListIntentTarget_h */