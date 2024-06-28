//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveAcceptRequestSheetDataSource_h
#define IGLiveAcceptRequestSheetDataSource_h
@import Foundation;

#include "IGListAdapterDataSource-Protocol.h"
#include "IGLiveBroadcastLogger.h"
#include "IGLiveDefaultSheetEmptyView.h"

@class IGLabelItemViewModel, NSArray, NSString;
@protocol IGLiveAcceptRequestDataSourceDelegate, IGLiveInviteFlowGuestInviteElegibilityDelegate;

@interface IGLiveAcceptRequestSheetDataSource : NSObject<IGListAdapterDataSource> {
  /* instance variables */
  NSString *_module;
  NSArray *_requestedUsers;
  IGLiveDefaultSheetEmptyView *_emptyView;
  IGLabelItemViewModel *_subHeaderLabel;
  IGLiveBroadcastLogger *_logger;
}

@property (weak, nonatomic) NSObject<IGLiveAcceptRequestDataSourceDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGLiveInviteFlowGuestInviteElegibilityDelegate> *inviteEligibilityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session logger:(id)logger module:(id)module;
- (void)setRequestedUsers:(id)users;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)liveBroadcastUserSectionController:(id)controller didTapOnUserSource:(id)source;
- (void)liveBroadcastUserSectionController:(id)controller userSource:(id)source toggled:(BOOL)toggled;
- (void)liveBroadcastUserSectionController:(id)controller userSource:(id)source selected:(BOOL)selected;
- (void)liveBroadcastUserSectionController:(id)controller didTapButtonOfUserSource:(id)source;
- (void)liveBroadcastUserSectionController:(id)controller didTapInviteButtonOfUserSource:(id)source;
- (void)liveBroadcastUserSectionController:(id)controller didTapMoreButtonOfUserSource:(id)source;
- (void)liveBroadcastUserSectionController:(id)controller didTapWaveButtonOfUserSource:(id)source;
- (BOOL)liveBroadcastUserSectionControllerShouldDisplayWaveButton:(id)button;
@end

#endif /* IGLiveAcceptRequestSheetDataSource_h */
