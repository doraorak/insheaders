//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGExploreGridViewController_h
#define IGExploreGridViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAlertBarPresenter-Protocol.h"
#include "IGChainingFeedStore.h"
#include "IGChainingFocusedMediaDelegate-Protocol.h"
#include "IGDiscoveryContainerHeaderView.h"
#include "IGDiscoveryGridAdValidator.h"
#include "IGDiscoveryGridRelatedItemsStore.h"
#include "IGExploreDataController.h"
#include "IGExploreGridLoggingContext.h"
#include "IGExploreGridViewControllerTailLoadOnDragGesturesHandler.h"
#include "IGExploreListKitDataSource.h"
#include "IGExploreRefreshLoggerDelegate.h"
#include "IGExploreSurfaceNotLoadingLogger.h"
#include "IGExploreTailLoadLoggerDelegate.h"
#include "IGFeedFocusCoordinator.h"
#include "IGFeedItemLogger.h"
#include "IGFeedPreviewHandler.h"
#include "IGFeedPreviewHandlerDelegate-Protocol.h"
#include "IGGridPerfomanceComponents.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "IGQPMegaphoneSectionControllerPresenterDelegate-Protocol.h"
#include "IGScreenshotObserverDelegate-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGScrollableViewControllerProtocol-Protocol.h"
#include "IGTransitionZoomFromCapable-Protocol.h"
#include "IGUserBlockingActionListener-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class DspCorrelationManager, IGDiscoveryTopicModel, IGInfoView, IGListAdapter, IGPerformanceTailFetchLogger, IGPerformanceTailLoadLogger, IGPlaybackCoordinator, IGRefreshControl, IGScrollViewAnnouncer, IGSessionTracker, IGUserSession, IGWaterfallCollectionViewLayout, NSDate, NSDictionary, NSString, UICollectionView;
@protocol IGExploreGridViewControllerDelegate, IGExploreLayoutContext;

@interface IGExploreGridViewController : IGViewController<IGAlertBarPresenter, IGChainingFocusedMediaDelegate, IGFeedPreviewHandlerDelegate, IGListAdapterDelegate, IGQPMegaphoneSectionControllerPresenterDelegate, IGScreenshotObserverDelegate, IGScrollViewListener, IGTransitionZoomFromCapable, IGUserBlockingActionListener, UICollectionViewDelegate, IGScrollableViewControllerProtocol> {
  /* instance variables */
  IGDiscoveryTopicModel *_topic;
  IGUserSession *_userSession;
  IGExploreDataController *_dataController;
  IGSessionTracker *_sessionTracker;
  IGChainingFeedStore *_feedStore;
  NSObject<IGExploreLayoutContext> *_layoutContext;
  id /* block */ _firstAppearanceCallback;
  NSObject<IGExploreGridViewControllerDelegate> *_delegate;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  struct IGGridLayoutConfiguration { double interitemSpacing; struct UIEdgeInsets { double top; double left; double bottom; double right; } insets; double mediasPerRow; double aspectRatio; double cellCornerRadius; } _gridLayoutConfig;
  IGWaterfallCollectionViewLayout *_collectionViewLayout;
  long long _layoutStyle;
  IGPlaybackCoordinator *_playbackCoordinator;
  IGExploreListKitDataSource *_listDataSource;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  IGFeedFocusCoordinator *_focusCoordinator;
  IGFeedPreviewHandler *_previewHandler;
  IGRefreshControl *_refreshControl;
  IGInfoView *_infoView;
  BOOL _viewHasAppeared;
  BOOL _hasExhaustedContent;
  BOOL _isViewSweepEnabled;
  BOOL _useTransparentBackground;
  IGExploreGridLoggingContext *_loggingContext;
  IGPerformanceTailFetchLogger *_tailFetchLogger;
  IGPerformanceTailLoadLogger *_tailLoadLogger;
  BOOL _tailLoadLoggerEnabled;
  IGExploreTailLoadLoggerDelegate *_tailLoadLoggerDelegate;
  IGExploreRefreshLoggerDelegate *_exploreRefreshLoggerDelegate;
  IGExploreSurfaceNotLoadingLogger *_exploreSurfaceNotLoadingLogger;
  IGFeedItemLogger *_feedItemLogger;
  IGDiscoveryGridRelatedItemsStore *_relatedItemsStore;
  IGListAdapter *_containerListAdapter;
  IGDiscoveryContainerHeaderView *_containerHeaderViewForSelectedItem;
  NSDate *_lastPullToRefreshTime;
  DspCorrelationManager *_dspCorrelationManager;
  int _currentNumberOfItemsInGrid;
  BOOL _isNewUIGraphEnabled;
  NSString *_adDeliverySessionId;
  IGDiscoveryGridAdValidator *_adValidator;
  NSDate *_timeEnteredExploreGrid;
  BOOL _isPendingPTRCacheFetch;
  IGExploreGridViewControllerTailLoadOnDragGesturesHandler *_tailLoadOnDragGestureHandler;
  IGGridPerfomanceComponents *_gridPerformanceComponents;
}

@property (nonatomic) BOOL allowsMultipleSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *magicMoveSubviews;

/* instance methods */
- (id)initWithTopic:(id)topic userSession:(id)session dataController:(id)controller sessionTracker:(id)tracker layoutConfig:(struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; })config layoutStyle:(long long)style loggingContext:(id)context feedStore:(id)store firstAppearanceCallback:(id /* block */)callback layoutContext:(id)context delegate:(id)delegate useTransparentBackground:(BOOL)background;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (BOOL)disableNavigationEvent;
- (void)scrollToTopAnimated:(BOOL)animated;
- (void)didDismissQpMegaphoneSectionControllerPresenter:(id)presenter;
- (void)_handleRefreshControlTriggered:(id)triggered;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
- (void)exploreDataController:(id)controller didUpdateDataStore:(id)store forTopic:(id)topic loggingContext:(id)context;
- (void)exploreDataController:(id)controller didUpdateFetchState:(id)state forTopic:(id)topic;
- (void)exploreLayoutContext:(id)context didUpdateContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)exploreLayoutContext:(id)context didUpdateMaxTopContentInsetAdjustment:(double)adjustment;
- (void)exploreLayoutContext:(id)context didUpdateTopContentInsetAdjustment:(double)adjustment;
- (id)scrollView;
- (id)scrollViewAnnouncer;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (void)screenshotObserverDidSeeScreenshotTaken:(id)taken;
- (void)screenshotObserverDidSeeActiveScreenCapture:(id)capture event:(long long)event;
- (void)mediaSectionController:(id)controller didSelectItem:(id)item;
- (void)mediaSectionController:(id)controller updatedActiveFeedItem:(id)item oldGridItem:(id)item wantsImmediateUpdate:(BOOL)update;
- (void)mediaThumbnailSectionController:(id)controller didRequestImageWithURL:(id)url;
- (void)mediaThumbnailSectionController:(id)controller didLoadImageForMedia:(id)media source:(unsigned long long)source;
- (void)mediaThumbnailSectionController:(id)controller didFailLoadImageForMedia:(id)media error:(id)error;
- (void)discoveryChannelSectionController:(id)controller didSelectItem:(id)item;
- (void)discoveryTopReelsSectionController:(id)controller updatedActiveFeedItem:(id)item oldGridItem:(id)item wantsImmediateUpdate:(BOOL)update;
- (void)discoveryTopReelsSectionController:(id)controller sundialFeedWillDismissWithTimeSpent:(double)spent;
- (void)discoveryTopReelsSectionControllerDidShareToDirect;
- (void)discoveryTopReelsSectionControllerDidShareToStory;
- (void)discoveryTopReelsSectionControllerDidSavePost;
- (BOOL)discoveryTopReelsSectionController:(id)controller didSelectItem:(id)item;
- (double)chainingContainerAdditionalBottomInsetForPill:(id)pill;
- (void)chainingContainerDidShowPill:(id)pill;
- (void)chainingContainerDidTapPill:(id)pill;
- (BOOL)shouldShowPillForChainingController:(id)controller;
- (void)chainingContainer:(id)container didRetrieveChainingPaginationToken:(id)token;
- (void)chainingContainer:(id)container didTapSendButtonForMedia:(id)media;
- (void)chainingContainer:(id)container willDismissWithTimeSpent:(double)spent;
- (void)chainingContainerDidSavePost;
- (void)chainingContainerDidShareToStory;
- (void)chainingContainerDidShareToDirect;
- (void)entryPoint:(id)point didUpdateFocusedMedia:(id)media forFeedItemChain:(id)chain;
- (id)previewHandler:(id)handler loggingExtrasForMedia:(id)media atIndexPath:(id)path;
- (id)hashtagModelForPreviewHandler:(id)handler;
- (id)promptStickerModelForPreviewHandler:(id)handler;
- (id)previewHandler:(id)handler previewActionsForMedia:(id)media defaultActionProvider:(id /* block */)provider loggingExtra:(id)extra adProductItemPk:(id)pk;
- (void)previewHandlerDidTapSaveOrUnsave:(id)unsave shouldSave:(BOOL)save productItem:(id)item;
- (BOOL)previewHandlerShouldOmitProfilePinningAction:(id)action;
- (BOOL)previewHandlerPreviewEnabled:(id)enabled;
- (void)previewHandlerDidLoad:(id)load;
- (void)previewHandlerDidDismiss:(id)dismiss;
- (BOOL)accessibilityScroll:(long long)scroll;
- (void)minimizedViewerPresenter:(id)presenter didCoverWithViewController:(id)controller;
- (void)minimizedViewerPresenter:(id)presenter didEndCoverWithViewController:(id)controller;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForAlertBar;
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (BOOL)shouldZoomFromTransition;
- (void)prepareBackwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
- (id)transitionZoomViewFromItem:(id)item withZoomContext:(id)context shouldMoveToVisiblePosition:(BOOL)position;
- (void)didCompleteBackwardZoomTransition;
- (void)discoveryGridAdSectionController:(id)controller didTapImageAdItem:(id)item;
- (void)discoveryGridAdSectionController:(id)controller didTapVideoAdItem:(id)item videoCell:(id)cell;
- (void)infoViewWasTapped:(id)tapped;
- (void)infoViewTextButtonTapped:(id)tapped;
- (void)discoveryContainerSectionController:(id)controller didShowContainerItems:(id)items containerInfo:(id)info listAdapter:(id)adapter;
- (void)discoveryContainerSectionController:(id)controller didSelectContainerItem:(id)item listAdapter:(id)adapter;
- (void)discoveryContainerSectionController:(id)controller withHeaderView:(id)view shouldFadeHeaderView:(BOOL)view shouldFadeOnlyBackground:(BOOL)background;
- (void)user:(id)user blocked:(BOOL)blocked messagingOnlyBlocked:(BOOL)blocked;
- (void)collapsibleNavigationCoordinator:(id)coordinator didUpdateNavigationBarPercentCollapsed:(double)collapsed;
- (void)collapsibleNavigationCoordinator:(id)coordinator didUpdateTabBarPercentCollapsed:(double)collapsed;
- (id)_reelsViewerContainerModuleFor:(id)for;
- (void)performanceLoadingIndicatorDidAppearWithLoggingExtras:(id)extras;
- (void)performanceLoadingIndicatorDidDisappear;
@end

#endif /* IGExploreGridViewController_h */
