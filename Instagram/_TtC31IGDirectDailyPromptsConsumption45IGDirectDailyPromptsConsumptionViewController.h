//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC31IGDirectDailyPromptsConsumption45IGDirectDailyPromptsConsumptionViewController_h
#define _TtC31IGDirectDailyPromptsConsumption45IGDirectDailyPromptsConsumptionViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC31IGDirectDailyPromptsConsumption45IGDirectDailyPromptsConsumptionViewController : IGViewController { // (Swift)
  /* instance variables */
   analyticsModule;
   userSession;
   threadKey;
   dailyPromptCellViewModel;
   canDeleteOthersDailyPromptSubmission;
   canAddOrDeleteDailyPrompt;
   canAddDailyPromptResponse;
   networkHelper;
   directMessageSender;
   $__lazy_storage_$_sendAttributionFactory;
   channelCreator;
   isChannelEnded;
   lastDailyPromptsMetadata;
   promptId;
   threadId;
   messageId;
   objectsForListAdapters;
   responseItemCount;
   nextCursor;
   isInitialLoad;
   isUnsendingPromptResponse;
   shouldShowReplySubtitle;
   $__lazy_storage_$_reshareController;
   resharedAttachment;
   $__lazy_storage_$_moreMenu;
   loadingMore;
   spinner;
   $__lazy_storage_$_scrollAnnouncer;
   imageForOptimisticUpload;
   didShowAddResponseButton;
   collectionTitle;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_blurredBackgroundView;
   collectionView;
   $__lazy_storage_$_mediaUploader;
   timerView;
   $__lazy_storage_$_addResponseButton;
}

/* instance methods */
- (id)initWithUserSession:(id)session channelCreator:(id)creator isChannelEnded:(BOOL)ended lastDailyPromptsMetadata:(id)metadata canDeleteOthersDailyPromptSubmission:(BOOL)submission canAddOrDeleteDailyPrompt:(BOOL)prompt canAddDailyPromptResponse:(BOOL)response promptId:(id)id threadKey:(id)key threadId:(id)id messageId:(id)id;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)didTapCloseButton;
- (void)didTapMoreButtonWithSender:(id)sender;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC31IGDirectDailyPromptsConsumption45IGDirectDailyPromptsConsumptionViewController_h */
