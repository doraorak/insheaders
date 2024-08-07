//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGDirectDetailMembersKit49IGDirectThreadDetailsMembersListAdapterDataSource_h
#define _TtC24IGDirectDetailMembersKit49IGDirectThreadDetailsMembersListAdapterDataSource_h
@import Foundation;

#include "IGListDiffable-Protocol.h"
#include "_TtP24IGDirectDetailMembersKit41IGDirectThreadDetailsMembersActionHandler_-Protocol.h"
#include "_TtP24IGDirectDetailMembersKit46IGDirectThreadDetailsMembersDataSourceDelegate_-Protocol.h"
#include "_TtP24IGDirectDetailMembersKit46IGDirectThreadDetailsMembersDataSourceProtocol_-Protocol.h"

@interface _TtC24IGDirectDetailMembersKit49IGDirectThreadDetailsMembersListAdapterDataSource : NSObject<_TtP24IGDirectDetailMembersKit46IGDirectThreadDetailsMembersDataSourceProtocol_> { // (Swift)
  /* instance variables */
   userSession;
   threadId;
   threadSubscriptionService;
   viewModelGenerator;
   membersListType;
   subscriptionToken;
   readOnlyFeatureLimitTimestamp;
   thread;
}

@property (nonatomic, weak) NSObject<_TtP24IGDirectDetailMembersKit46IGDirectThreadDetailsMembersDataSourceDelegate_> *delegate;
@property (nonatomic, weak) NSObject<_TtP24IGDirectDetailMembersKit41IGDirectThreadDetailsMembersActionHandler_> *actionHandler;
@property (nonatomic, retain) NSObject<IGListDiffable> *userSectionTitleViewModel;

/* instance methods */
- (void)startListeningForDataChanges;
- (void)stopListeningForDataChanges;
- (void)updateWithDirectInvitesPendingMembersWithUsers:(id)users fetchCompleted:(BOOL)completed;
- (void)updateWithBroadcastChannelMemberListWithSectionUsersMap:(id)map isFetching:(BOOL)fetching;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)init;
@end

#endif /* _TtC24IGDirectDetailMembersKit49IGDirectThreadDetailsMembersListAdapterDataSource_h */
