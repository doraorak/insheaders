//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentGroupSectionController_h
#define IGCommentGroupSectionController_h
@import Foundation;

#include "IGListBindingSectionController.h"
#include "IGBulkCommentDeleteManager.h"
#include "IGCommentCellRevealManager.h"
#include "IGCommentGroup.h"
#include "IGCommentGroupsManager.h"
#include "IGCommentMerlinLoggingHelper.h"
#include "IGCommentSectionViewModelCacheProtocol-Protocol.h"
#include "IGCommentThreadManager.h"
#include "IGCommentTruncateConfiguration.h"
#include "IGCommentVPVDController.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGFeedItemLoggingProviderDelegate-Protocol.h"
#include "IGListBindingSectionControllerDataSource-Protocol.h"
#include "IGListBindingSectionControllerSelectionDelegate-Protocol.h"
#include "IGStorySeenStateStoreListener-Protocol.h"

@class FBMerlinManager, IGCommentModel, IGCommentThreadConfiguration, IGMedia, IGUserSession, NSArray, NSMapTable, NSMutableArray, NSString, UINavigationController;
@protocol IGCommentCellInteractionDelegate><IGCommentCellUFIDelegate><IGCommentCellContextMenuDelegate, IGCommentGroupSectionDelegate, IGCommentSectionDelegate;

@interface IGCommentGroupSectionController : IGListBindingSectionController<IGCoreTextLinkHandler, IGStorySeenStateStoreListener, IGListBindingSectionControllerDataSource, IGListBindingSectionControllerSelectionDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMedia *_media;
  NSString *_analyticsModule;
  IGCommentGroupsManager *_commentGroupsManager;
  IGBulkCommentDeleteManager *_bulkDeleteManager;
  IGCommentCellRevealManager *_cellRevealManager;
  IGCommentThreadManager *_threadManager;
  IGCommentGroup *_initialCommentGroup;
  NSObject<IGCommentCellInteractionDelegate><IGCommentCellUFIDelegate><IGCommentCellContextMenuDelegate> *_commentCellController;
  long long _scheduledHighlightIndex;
  BOOL _commentRepliesExpanded;
  NSMutableArray *_collapsedFilteredPreviewComments;
  NSArray *_visibleFilteredPreviewComments;
  long long _likeButtonPosition;
  BOOL _showLikedByMediaOwnerFacepile;
  NSObject<IGCommentSectionViewModelCacheProtocol> *_viewModelCache;
  BOOL _hidePinnedAndReplyButton;
  BOOL _hideTimestamp;
  BOOL _showMessageButton;
  IGCommentThreadConfiguration *_commentThreadConfiguration;
  NSObject<IGFeedItemLoggingProviderDelegate> *_loggingDelegate;
  IGCommentTruncateConfiguration *_commentTruncateConfig;
  BOOL _isReadOnly;
  BOOL _isInEditMode;
  BOOL _isInCommentRepliesMode;
  NSString *_sessionId;
  unsigned long long _loadMoreDirection;
  BOOL _carouselMentionsEnabled;
  FBMerlinManager *_merlinManager;
  IGCommentMerlinLoggingHelper *_commentMerlinHelper;
  IGCommentVPVDController *_commentVPVDController;
  NSMapTable *_coreTextViewCommentModelMapping;
  BOOL _isFromLimitedComments;
  IGCommentGroup *_commentGroup;
  NSObject<IGCommentGroupSectionDelegate> *_groupDelegate;
  IGCommentModel *_commentForCommentManagementNux;
}

@property (weak, nonatomic) UINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGCommentSectionDelegate> *delegate;

/* instance methods */
- (void)dealloc;
- (id)initWithUserSession:(id)session media:(id)media analyticsModule:(id)module threadManager:(id)manager commentGroupsManager:(id)manager bulkDeleteManager:(id)manager cellRevealManager:(id)manager commentThreadConfiguration:(id)configuration sponsoredSupportConfiguration:(id)configuration viewModelCache:(id)cache restrictedUserController:(id)controller loggingDelegate:(id)delegate userFlowLogger:(id)logger isReadOnly:(BOOL)only isInEditMode:(BOOL)mode isInCommentRepliesMode:(BOOL)mode carouselMentionsEnabled:(BOOL)enabled;
- (void)didUpdateToObject:(id)object;
- (void)didSingleTapOnCommentCell:(id)cell;
- (id)commentForCommentCell:(id)cell;
- (id)commentCellForComment:(id)comment;
- (id)sectionController:(id)controller viewModelsForObject:(id)object;
- (id)sectionController:(id)controller cellForViewModel:(id)model atIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sectionController:(id)controller sizeForViewModel:(id)model atIndex:(long long)index;
- (void)sectionController:(id)controller didSelectItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didDeselectItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didHighlightItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didUnhighlightItemAtIndex:(long long)index viewModel:(id)model;
- (void)threadingNuxCell:(id)cell didTapCloseButton:(id)button;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)commentModelDidUpdate:(id)update;
- (void)commentModelDidUpdateRestrictStatus:(id)status;
- (void)commentModelDidUpdateLimitedStatus:(id)status;
- (void)commentModelDidUpdateReplyStrokeState:(id)state;
- (void)storySeenStateStoreDidUpdateReelPK:(id)pk;
@end

#endif /* IGCommentGroupSectionController_h */
