//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialGridVideoViewController_h
#define IGSundialGridVideoViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGDiscoveryContentInformModuleSectionControllerDelegate-Protocol.h"
#include "IGFeedNetworkSourceDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"
#include "IGReelsItemConfigurationType-Protocol.h"
#include "IGRefreshControlContentInsetDataSource-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGScrollableViewControllerProtocol-Protocol.h"
#include "IGSundialFeedLoggingContext.h"
#include "IGSundialFeedSource-Protocol.h"
#include "IGSundialGridPerformanceComponents.h"
#include "IGSundialGridPerformanceLogger-Protocol.h"
#include "IGSundialGridVideoViewControllerDelegate-Protocol.h"
#include "IGSundialGridVideoViewControlling-Protocol.h"
#include "IGSundialPostCaptureEditingViewControllerDelegate-Protocol.h"
#include "IGSundialViewerCTADelegate-Protocol.h"
#include "IGSundialViewerProtocol-Protocol.h"
#include "IGTransitionZoomFromCapable-Protocol.h"
#include "IGUserUpdatedListener-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGGallerySelectionTray, IGListAdapter, IGRefreshControl, IGScrollViewAnnouncer, IGUser, IGUserSession, NSArray, NSDictionary, NSMutableArray, NSMutableOrderedSet, NSString, UICollectionView, UIColor, UIScrollView, UIView;

@interface IGSundialGridVideoViewController : UIViewController<IGFeedNetworkSourceDelegate, IGScrollViewListener, IGListAdapterDataSource, IGMediaThumbnailSectionControllerSelectionDelegate, IGRefreshControlContentInsetDataSource, IGUserUpdatedListener, IGSundialPostCaptureEditingViewControllerDelegate, IGDiscoveryContentInformModuleSectionControllerDelegate, IGSundialGridVideoViewControlling, UICollectionViewDelegate, IGScrollableViewControllerProtocol, IGTransitionZoomFromCapable> {
  /* instance variables */
  IGUserSession *_userSession;
  Class _collectionViewClass;
  double _gridTopInset;
  BOOL _pullToRefreshEnabled;
  IGRefreshControl *_refreshControl;
  NSObject<IGSundialGridPerformanceLogger> *_perfLogger;
  NSObject<IGReelsItemConfigurationType> *_reelsItemConfiguration;
  IGGallerySelectionTray *_selectionTray;
  BOOL _selectionTrayVisible;
  double _selectionTrayVisibilityPercentage;
  long long _numberOfSelectedMediaRequired;
  NSString *_gridType;
  BOOL _shouldFetchMoreItems;
  NSString *_feedSubtitle;
  BOOL _firstThumbnailLoaded;
  IGSundialFeedLoggingContext *_sundialFeedLoggingContext;
  int initialFetchRetryCount;
  BOOL isHeadLoadFetchFromCache;
  BOOL _shouldSkipAnimationForFetchUpdates;
  BOOL _disableShimmerLoading;
  BOOL _hideMediaOnLikeReverted;
  BOOL _viewerCameraButtonHidden;
  BOOL _disableContextualChaining;
  BOOL _isSelectionEnabledForRemixableMedia;
  BOOL _showFollowingThumbnail;
  BOOL _canShowChainingInfo;
  NSObject<IGSundialViewerProtocol> *_viewerDelegate;
  NSObject<IGSundialViewerCTADelegate> *_viewerCTADelegate;
  NSMutableOrderedSet *_selectedVideos;
  double _scrollViewLoadDistance;
  NSDictionary *_extraLoggingDict;
  IGSundialGridPerformanceComponents *_gridPerformanceComponents;
}

@property (copy, nonatomic) NSString *analyticsModule;
@property (copy, nonatomic) NSString *pivotPageSeededMediaId;
@property (copy, nonatomic) NSMutableArray *mediaList;
@property (nonatomic) long long loadingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } obstructingContentInsets;
@property (retain, nonatomic) UIView *emptyView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) IGListAdapter *adapter;
@property (readonly, nonatomic) IGScrollViewAnnouncer *feedScrollViewAnnouncer;
@property (retain, nonatomic) UIColor *refreshControlBackgroundColor;
@property (nonatomic) double refreshControlTopInset;
@property (nonatomic) BOOL forceShowOnboardingReelsUpsell;
@property (retain, nonatomic) IGUser *user;
@property (nonatomic) BOOL viewerTabBarHidden;
@property (nonatomic) unsigned long long feedPresentationContext;
@property (weak, nonatomic) NSObject<IGSundialGridVideoViewControllerDelegate> *delegate;
@property (nonatomic) long long entryPoint;
@property (nonatomic) BOOL animatedThumbnailEnabled;
@property (retain, nonatomic) NSString *sourceMediaPk;
@property (copy, nonatomic) NSArray *injectedListItems;
@property (retain, nonatomic) NSObject<IGSundialFeedSource> *videoFeed;
@property (copy, nonatomic) NSString *surface;
@property (copy, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSDictionary *magicMoveSubviews;

/* instance methods */
- (id)initWithVideoFeed:(id)feed userSession:(id)session perfLogger:(id)logger gridType:(id)type analyticsModule:(id)module sundialFeedLoggingContext:(id)context pullToRefreshEnabled:(BOOL)enabled;
- (id)initWithVideoFeed:(id)feed userSession:(id)session collectionViewClass:(Class)class gridTopInset:(double)inset perfLogger:(id)logger gridType:(id)type analyticsModule:(id)module;
- (id)initWithVideoFeed:(id)feed userSession:(id)session collectionViewClass:(Class)class gridTopInset:(double)inset perfLogger:(id)logger gridType:(id)type analyticsModule:(id)module sundialFeedLoggingContext:(id)context reelsItemConfiguration:(id)configuration;
- (id)initWithVideoFeed:(id)feed userSession:(id)session collectionViewClass:(Class)class gridTopInset:(double)inset pullToRefreshEnabled:(BOOL)enabled perfLogger:(id)logger gridType:(id)type analyticsModule:(id)module sundialFeedLoggingContext:(id)context reelsItemConfiguration:(id)configuration;
- (id)initWithVideoFeed:(id)feed userSession:(id)session collectionViewClass:(Class)class gridTopInset:(double)inset pullToRefreshEnabled:(BOOL)enabled perfLogger:(id)logger gridType:(id)type analyticsModule:(id)module sundialFeedLoggingContext:(id)context reelsItemConfiguration:(id)configuration disableShimmerLoading:(BOOL)loading;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)setInjectedListItems:(id)items animated:(BOOL)animated;
- (id)refreshControl;
- (void)feedNetworkSource:(id)source didReceiveFeedResponse:(id)response forRequestConfig:(id)config;
- (void)feedNetworkSource:(id)source didFinishLoadingWithConfig:(id)config success:(BOOL)success error:(id)error httpResponse:(id)response;
- (void)feedNetworkSource:(id)source didChangeToObjects:(id)objects;
- (void)feedNetworkSource:(id)source didStartLoadingWithConfig:(id)config;
- (void)feedNetworkSource:(id)source didCancelRequestForRequestConfig:(id)config;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (double)idleTopContentInsetForRefreshControl:(id)control;
- (void)_refreshControlValueChanged:(id)changed;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (void)scrollViewDidEndScrolling:(id)scrolling;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)sundialGridNoNetworkSectionControllerDidTapRefreshButton:(id)button;
- (void)sundialGridVideoSectionController:(id)controller didLoadThumbnailWithMediaId:(id)id;
- (void)sundialGridVideoSectionController:(id)controller didSelectVideo:(id)video;
- (void)sundialGridVideoSectionController:(id)controller didLikeRevertedMedia:(id)media;
- (void)sundialGridVideoSectionControllerDidChangeCoverPhoto:(id)photo;
- (void)sundialGridVideoSectionController:(id)controller didUpdatePinOnMedia:(id)media;
- (void)sundialGridVideoSectionController:(id)controller didTapUser:(id)user;
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (BOOL)shouldZoomFromTransition;
- (void)prepareBackwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
- (id)transitionZoomViewFromItem:(id)item withZoomContext:(id)context shouldMoveToVisiblePosition:(BOOL)position;
- (void)didCompleteBackwardZoomTransition;
- (void)didSelectFeedItem:(id)item usingForceTouch:(BOOL)touch;
- (void)didTapSelectionOverlayWithFeedItem:(id)item;
- (void)mediaThumbnailSectionController:(id)controller didRequestImageWithURL:(id)url;
- (void)mediaThumbnailSectionController:(id)controller didLoadImageForMedia:(id)media source:(unsigned long long)source;
- (void)mediaThumbnailSectionController:(id)controller didFailLoadImageForMedia:(id)media error:(id)error;
- (void)userWasUpdated:(id)updated;
- (id)scrollViewAnnouncer;
- (void)setSelectionTrayVisible:(BOOL)visible animated:(BOOL)animated;
- (void)_didTapMultiSelectTrayNextButton:(id)button;
- (void)sundialPostCaptureEditingViewController:(id)controller didCancelWithComposition:(id)composition isNavigationHandledByPresenter:(BOOL)presenter deselectAssets:(BOOL)assets;
- (BOOL)sundialPostCaptureEditingViewControllerMustExitTimelineEditorBeforeCancelling:(id)cancelling;
- (void)sundialPostCaptureEditingViewController:(id)controller didShareComposition:(id)composition toDestination:(long long)destination withPostId:(id)id shareOnFacebookPreferences:(id)preferences isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewController:(id)controller didSaveDraft:(id)draft fromPostCapture:(BOOL)capture isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewControllerDidResume:(id)resume;
- (void)sundialPostCaptureEditingViewControllerDidDismiss:(id)dismiss;
- (void)discoveryContentInformModuleSectionControllerShowSeeResults:(id)results hideInformModule:(BOOL)module;
@end

#endif /* IGSundialGridVideoViewController_h */
