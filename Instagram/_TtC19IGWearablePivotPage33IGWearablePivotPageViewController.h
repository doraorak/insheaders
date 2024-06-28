//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC19IGWearablePivotPage33IGWearablePivotPageViewController_h
#define _TtC19IGWearablePivotPage33IGWearablePivotPageViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGFeedNetworkSourceDelegate-Protocol.h"
#include "IGFeedPreviewHandlerDelegate-Protocol.h"
#include "IGSundialGridVideoViewControllerDelegate-Protocol.h"

@interface _TtC19IGWearablePivotPage33IGWearablePivotPageViewController : IGViewController<IGSundialGridVideoViewControllerDelegate, IGFeedNetworkSourceDelegate, IGFeedPreviewHandlerDelegate> { // (Swift)
  /* instance variables */
   userSession;
   gridViewController;
   metadataView;
   discoverButton;
   media;
   entryPoint;
   analyticsModule;
   perfLogger;
   floatingButtonURLString;
   previewHandler;
   $__lazy_storage_$_backButton;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (void)didTapDiscoverWithSender:(id)sender;
- (id)sundialGridVideoViewController:(id)controller sortedListItemsForLoadedItems:(id)items;
- (id)sundialGridVideoViewController:(id)controller sectionControllerForMedia:(id)media;
- (void)sundialGridVideoViewControllerDidInitiatePullToRefresh:(id)refresh;
- (id)sundialGridVideoViewController:(id)controller sectionControllerForInjectedListItem:(id)item;
- (void)sundialGridVideoViewControllerDidScroll:(id)scroll contentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)sundialGridVideoViewControllerWillBeginScrolling:(id)scrolling;
- (void)sundialGridVideoViewControllerWillBeginScrolling:(id)scrolling scrollingUp:(BOOL)up;
- (void)sundialGridVideoViewControllerDidEndScrolling:(id)scrolling;
- (void)sundialGridVideoViewControllerSwitchToGridsTab;
- (void)sundialGridVideoViewControllerDidFinishLoading;
- (BOOL)sundialGridVideoViewController:(id)controller didSelectMedia:(id)media;
- (BOOL)sundialGridVideoViewControllerShouldShowCTAButton:(id)ctabutton didSelectMedia:(id)media;
- (void)sundialGridVideoViewControllerDidLoadFirstThumbnail:(id)thumbnail;
- (void)feedNetworkSource:(id)source didReceiveFeedResponse:(id)response forRequestConfig:(id)config;
- (void)feedNetworkSource:(id)source didFinishLoadingWithConfig:(id)config success:(BOOL)success error:(id)error httpResponse:(id)response;
- (void)feedNetworkSource:(id)source didChangeToObjects:(id)objects;
- (void)feedNetworkSource:(id)source didStartLoadingWithConfig:(id)config;
- (void)feedNetworkSource:(id)source didCancelRequestForRequestConfig:(id)config;
- (id)previewHandler:(id)handler loggingExtrasForMedia:(id)media atIndexPath:(id)path;
- (id)hashtagModelForPreviewHandler:(id)handler;
- (id)promptStickerModelForPreviewHandler:(id)handler;
- (id)previewHandler:(id)handler previewActionsForMedia:(id)media defaultActionProvider:(id /* block */)provider loggingExtra:(id)extra adProductItemPk:(id)pk;
- (void)previewHandlerDidTapSaveOrUnsave:(id)unsave shouldSave:(BOOL)save productItem:(id)item;
- (BOOL)previewHandlerShouldOmitProfilePinningAction:(id)action;
- (BOOL)previewHandlerPreviewEnabled:(id)enabled;
- (void)previewHandlerDidLoad:(id)load;
- (void)previewHandlerDidDismiss:(id)dismiss;
- (void)didTapBackButtonWithSender:(id)sender;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC19IGWearablePivotPage33IGWearablePivotPageViewController_h */