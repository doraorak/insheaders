//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRepliesGroupSectionController_h
#define IGDirectRepliesGroupSectionController_h
@import Foundation;

#include "IGListBindingSectionController.h"
#include "IGBulkCommentDeleteManager.h"
#include "IGCommentGroup.h"
#include "IGCommentGroupsManager.h"
#include "IGCommentMerlinLoggingHelper.h"
#include "IGCommentUserFlowLogger.h"
#include "IGCommentVPVDController.h"
#include "IGDirectRepliesCellController.h"
#include "IGListBindingSectionControllerDataSource-Protocol.h"
#include "IGListBindingSectionControllerSelectionDelegate-Protocol.h"

@class FBMerlinManager, IGCommentThreadConfiguration, IGDirectThreadTheme, IGMedia, IGRestrictedUserController, IGUserSession, NSArray, NSMutableArray, NSString;
@protocol IGDirectRepliesSectionDelegate;

@interface IGDirectRepliesGroupSectionController : IGListBindingSectionController<IGListBindingSectionControllerDataSource, IGListBindingSectionControllerSelectionDelegate> {
  /* instance variables */
  IGDirectRepliesCellController *_repliesCellController;
  IGUserSession *_userSession;
  IGMedia *_media;
  IGBulkCommentDeleteManager *_bulkDeleteManager;
  IGCommentThreadConfiguration *_commentThreadConfiguration;
  NSString *_analyticsModule;
  IGRestrictedUserController *_restrictedUserController;
  IGCommentUserFlowLogger *_userFlowLogger;
  IGCommentGroupsManager *_commentGroupsManager;
  IGCommentGroup *_commentGroup;
  unsigned long long _loadMoreDirection;
  BOOL _childRepliesExpanded;
  NSMutableArray *_collapsedReplies;
  NSArray *_visibleReplies;
  IGDirectThreadTheme *_threadTheme;
  NSString *_sessionId;
  FBMerlinManager *_merlinManager;
  IGCommentMerlinLoggingHelper *_commentMerlinHelper;
  IGCommentVPVDController *_commentVPVDController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGDirectRepliesSectionDelegate> *delegate;

/* instance methods */
- (void)dealloc;
- (id)initWithUserSession:(id)session media:(id)media bulkDeleteManager:(id)manager commentThreadConfiguration:(id)configuration restrictedUserController:(id)controller userFlowLogger:(id)logger commentGroupsManager:(id)manager analyticsModule:(id)module threadTheme:(id)theme;
- (void)didUpdateToObject:(id)object;
- (id)sectionController:(id)controller viewModelsForObject:(id)object;
- (id)sectionController:(id)controller cellForViewModel:(id)model atIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sectionController:(id)controller sizeForViewModel:(id)model atIndex:(long long)index;
- (void)sectionController:(id)controller didSelectItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didDeselectItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didHighlightItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didUnhighlightItemAtIndex:(long long)index viewModel:(id)model;
- (id)replyForCell:(id)cell;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)commentModelDidUpdate:(id)update;
- (void)commentModelDidUpdateRestrictStatus:(id)status;
- (void)commentModelDidUpdateLimitedStatus:(id)status;
- (void)commentModelDidUpdateReplyStrokeState:(id)state;
@end

#endif /* IGDirectRepliesGroupSectionController_h */
