//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHashtagMainFeedViewController_h
#define IGHashtagMainFeedViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGContextualFeedViewControllerTypeDelegate-Protocol.h"
#include "IGCreationViewControllerNavigationDelegate-Protocol.h"
#include "IGDirectShareSheetControllerDelegate-Protocol.h"
#include "IGFeedFocusCoordinator.h"
#include "IGFeedPreviewHandler.h"
#include "IGFeedPreviewHandlerDelegate-Protocol.h"
#include "IGHashtagFeedPerformanceLogger.h"
#include "IGHashtagFollowStatusUpdateListener-Protocol.h"
#include "IGHashtagListKitDataSource.h"
#include "IGHashtagMainFeedDataController.h"
#include "IGHashtagMainFeedDataControllerDelegate-Protocol.h"
#include "IGHashtagMainFeedLogger.h"
#include "IGHashtagMainFeedNavigationTitleView.h"
#include "IGHashtagMainFeedRouter.h"
#include "IGHashtagNavigationPerfComponents.h"
#include "IGLabelSectionControllerDelegate-Protocol.h"
#include "IGQPMegaphoneSectionControllerPresenterDelegate-Protocol.h"
#include "IGRefreshControlContentInsetDataSource-Protocol.h"
#include "IGScopedListener-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGSearchBarDelegate-Protocol.h"
#include "IGSearchTypeaheadViewController.h"
#include "IGSundialContextualNavigationProtocol-Protocol.h"
#include "IGTouchDownResult.h"
#include "IGTransitionZoomFromCapable-Protocol.h"
#include "MFMailComposeViewControllerDelegate-Protocol.h"
#include "MFMessageComposeViewControllerDelegate-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGAPITagPromoBanner, IGActionableConfirmationToastController, IGBottomPillController, IGCollectionViewVisibility, IGFollowAttributionModel, IGHashtagFreshTopicMetadata, IGListAdapter, IGNavigationBar, IGPillCTAButton, IGPlaybackCoordinator, IGQPSlotID, IGQuickPromotionCoordinator, IGRefreshControl, IGScrollViewAnnouncer, IGSearchBar, IGStickySectionsWaterfallCollectionViewLayout, IGUserSession, NSArray, NSDate, NSDictionary, NSString, UIButton, UICollectionView, UINavigationItem;

@interface IGHashtagMainFeedViewController : IGViewController<IGContextualFeedViewControllerTypeDelegate, IGDirectShareSheetControllerDelegate, IGFeedPreviewHandlerDelegate, IGScrollViewListener, IGHashtagFollowStatusUpdateListener, IGHashtagMainFeedDataControllerDelegate, IGQPMegaphoneSectionControllerPresenterDelegate, IGRefreshControlContentInsetDataSource, IGSearchBarDelegate, IGCreationViewControllerNavigationDelegate, IGSundialContextualNavigationProtocol, IGTransitionZoomFromCapable, MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate, UICollectionViewDelegate, IGLabelSectionControllerDelegate, IGScopedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGHashtagMainFeedDataController *_dataController;
  IGHashtagMainFeedRouter *_hashtagMainFeedRouter;
  IGHashtagListKitDataSource *_dataSource;
  IGPlaybackCoordinator *_playbackCoordinator;
  IGListAdapter *_listAdapter;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  IGHashtagMainFeedLogger *_mainFeedLogger;
  IGFeedPreviewHandler *_previewHandler;
  IGStickySectionsWaterfallCollectionViewLayout *_feedLayout;
  UICollectionView *_collectionView;
  IGCollectionViewVisibility *_collectionViewVisibility;
  IGRefreshControl *_refreshControl;
  IGFeedFocusCoordinator *_mediaFocusCoordinator;
  long long _tabIndex;
  IGFollowAttributionModel *_attribution;
  BOOL _viewHasAppeared;
  BOOL _isFirstPageLoad;
  BOOL _hasShownContentAdvisory;
  BOOL _isInitialRequestLoaded;
  BOOL _isChallenge;
  NSDate *_entryDate;
  NSString *_searchQueryText;
  IGActionableConfirmationToastController *_toastController;
  struct IGGridLayoutConfiguration { double interitemSpacing; struct UIEdgeInsets { double top; double left; double bottom; double right; } insets; double mediasPerRow; double aspectRatio; double cellCornerRadius; } _layoutConfig;
  IGQuickPromotionCoordinator *_qpCoordinator;
  IGQPSlotID *_qpSlot;
  IGHashtagFeedPerformanceLogger *_hashtagPerformanceLogger;
  IGHashtagNavigationPerfComponents *_perfComponents;
  UIButton *_promotionBanner;
  IGHashtagFreshTopicMetadata *_freshTopicMetadata;
  IGBottomPillController *_promotionPillController;
  BOOL _isJpHalloweenPromotion;
  IGAPITagPromoBanner *_promoBannerModel;
  struct { unsigned long long barStyle; unsigned long long searchMode; } _searchConfiguration;
  IGNavigationBar *_localNavigationBar;
  UINavigationItem *_localNavigationItem;
  IGHashtagMainFeedNavigationTitleView *_hashtagMainFeedNavigationTitleView;
  IGSearchTypeaheadViewController *_typeaheadViewController;
  IGSearchBar *_searchAnimationSourceSearchBar;
  NSString *_searchSessionId;
  NSString *_priorSerpSessionId;
  NSString *_pivotPageEntryPoint;
  BOOL _serpInTransition;
  IGTouchDownResult *_prefetchResult;
  IGPillCTAButton *_useHashtagButton;
  BOOL _hideUseHashtagButton;
  NSString *_sourceMediaPk;
  NSArray *_topMediaIds;
  unsigned long long _currentFilterRow;
  long long _hashtagFeedType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *contextualAssetID;
@property (readonly, nonatomic) unsigned long long contextualNavigationType;
@property (readonly, nonatomic) NSDictionary *magicMoveSubviews;

/* instance methods */
- (id)initWithFeedType:(long long)type sourceMediaPk:(id)pk userSession:(id)session hashtag:(id)hashtag attribution:(id)attribution searchQueryText:(id)text isChallenge:(BOOL)challenge;
- (id)initWithFeedType:(long long)type sourceMediaPk:(id)pk userSession:(id)session hashtag:(id)hashtag attribution:(id)attribution searchQueryText:(id)text isChallenge:(BOOL)challenge topMediaIds:(id)ids searchSessionId:(id)id priorSerpSessionId:(id)id pivotPageEntryPoint:(id)point;
- (id)hashtagModel;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (BOOL)prefersNavigationBarDividerHidden;
- (BOOL)prefersNavigationBarHidden;
- (long long)statusBarStyle;
- (void)_onAppBackgrounded:(id)backgrounded;
- (void)tabBarChangedTab:(id)tab launcherSetProvider:(id)provider;
- (void)hashtagFollowStatusStoreDidUpdateFollowStatus:(long long)status forHashtagWithName:(id)name;
- (void)searchViewControllerDidExitSearch:(id)search;
- (void)searchViewControllerDidCancelSearch:(id)search;
- (BOOL)searchViewControllerShouldTriggerSearchWithReturnKeyClick:(id)click;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)searchEntityRouterDidRouteToSerpPage:(id)page;
- (void)navigationTitleView:(id)view didSelectMoreButton:(id)button;
- (void)_dismissVC;
- (void)_didTapUseHashtag;
- (void)_navigateToFreshTopics;
- (void)_navigateToPromoBannerUrl;
- (void)_navigateToHalloweenArEffectGallery;
- (void)_presentHashtagMoreMenu;
- (void)hashtagMainFeedDataController:(id)controller didStartLoadingWithConfig:(id)config networkRequestType:(long long)type;
- (void)hashtagMainFeedDataController:(id)controller didCompleteInfoRequest:(id)request;
- (void)hashtagMainFeedDataController:(id)controller didCompleteMainFeedRequest:(id)request persistentDataStore:(id)store requestConfig:(id)config hashtagContentAdvisoryModel:(id)model hashtagNullStateModel:(id)model hashtagAvailableFilters:(id)filters;
- (void)hashtagMainFeedDataController:(id)controller didFailDataRequest:(id)request requestConfig:(id)config requestType:(long long)type hashtagFeedType:(long long)type;
- (void)hashtagListKitDataSource:(id)source didSelectFeedType:(long long)type index:(long long)index;
- (void)hashtagListKitDataSourceDidTapFilter:(id)filter;
- (void)hashtagListKitDataSourceDidUpdateObjects:(id)objects;
- (void)hashtagListKitDataSource:(id)source didTapOnLink:(id)link;
- (void)didUpdateFilterType:(unsigned long long)type;
- (void)didSelectLabelSectionController:(id)controller;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (void)didDismissQpMegaphoneSectionControllerPresenter:(id)presenter;
- (void)mediaSectionController:(id)controller didSelectItem:(id)item;
- (void)mediaSectionController:(id)controller updatedActiveFeedItem:(id)item oldGridItem:(id)item wantsImmediateUpdate:(BOOL)update;
- (void)discoveryChannelSectionController:(id)controller didSelectItem:(id)item;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (BOOL)didShowPillInCurrentSession:(id)session;
- (void)contextualFeedViewControllerWillShowPill:(id)pill;
- (void)contextualFeedViewControllerWillDismiss:(id)dismiss;
- (void)contextualFeedViewController:(id)controller didChangePaginatedFocusToMedia:(id)media;
- (void)discoveryTopReelsSectionController:(id)controller updatedActiveFeedItem:(id)item oldGridItem:(id)item wantsImmediateUpdate:(BOOL)update;
- (BOOL)discoveryTopReelsSectionController:(id)controller didSelectItem:(id)item;
- (void)discoveryTopReelsSectionController:(id)controller sundialFeedWillDismissWithTimeSpent:(double)spent;
- (void)discoveryTopReelsSectionControllerDidShareToDirect;
- (void)discoveryTopReelsSectionControllerDidShareToStory;
- (void)discoveryTopReelsSectionControllerDidSavePost;
- (void)_handleRefreshControlTriggered;
- (id)previewHandler:(id)handler loggingExtrasForMedia:(id)media atIndexPath:(id)path;
- (id)hashtagModelForPreviewHandler:(id)handler;
- (id)promptStickerModelForPreviewHandler:(id)handler;
- (id)previewHandler:(id)handler previewActionsForMedia:(id)media defaultActionProvider:(id /* block */)provider loggingExtra:(id)extra adProductItemPk:(id)pk;
- (void)previewHandlerDidTapSaveOrUnsave:(id)unsave shouldSave:(BOOL)save productItem:(id)item;
- (BOOL)previewHandlerShouldOmitProfilePinningAction:(id)action;
- (BOOL)previewHandlerPreviewEnabled:(id)enabled;
- (void)previewHandlerDidLoad:(id)load;
- (void)previewHandlerDidDismiss:(id)dismiss;
- (void)directShareSheetControllerDidSelect:(id)select sender:(id)sender directRecipients:(id)recipients externalServices:(id)services text:(id)text media:(id)media selectedPostPk:(id)pk sharedAttachments:(id)attachments;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)sheet willPresentConfirmationToast:(BOOL)toast hasShared:(BOOL)shared;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)toast;
- (void)directShareSheetController:(id)controller didTapRecipient:(id)recipient selected:(BOOL)selected;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)toast;
- (void)directShareSheetControllerDidTapSave:(id)save;
- (void)directShareSheetControllerDidShareToStory:(id)story;
- (void)minimizedViewerPresenter:(id)presenter didCoverWithViewController:(id)controller;
- (void)minimizedViewerPresenter:(id)presenter didEndCoverWithViewController:(id)controller;
- (void)messageComposeViewController:(id)controller didFinishWithResult:(long long)result;
- (void)mailComposeController:(id)controller didFinishWithResult:(long long)result error:(id)error;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)creationViewController:(id)controller didDismissWithExitPoint:(long long)point destination:(long long)destination storySendTarget:(long long)target toDirectRecipients:(id)recipients image:(id)image storyModelArray:(id)array metadataArray:(id)array highlightIds:(id)ids completion:(id /* block */)completion;
- (void)creationViewController:(id)controller didEnterState:(long long)state;
- (void)creationViewController:(id)controller willShareToDirectRecipients:(id)recipients;
- (void)creationViewController:(id)controller didFinishWithExitPoint:(long long)point shouldAnimateTransition:(BOOL)transition isNavigationHandledByPresenter:(BOOL)presenter;
- (void)creationViewControllerWillDismiss:(id)dismiss;
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (BOOL)shouldZoomFromTransition;
- (void)prepareBackwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
- (id)transitionZoomViewFromItem:(id)item withZoomContext:(id)context shouldMoveToVisiblePosition:(BOOL)position;
- (void)didCompleteBackwardZoomTransition;
- (double)idleTopContentInsetForRefreshControl:(id)control;
- (void)didTapPill:(id)pill;
@end

#endif /* IGHashtagMainFeedViewController_h */