//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialRemixPivotPageViewController_h
#define IGSundialRemixPivotPageViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGFeedNetworkSourceDelegate-Protocol.h"
#include "IGSundialGridVideoViewController.h"
#include "IGSundialGridVideoViewControllerDelegate-Protocol.h"
#include "IGSundialPostCaptureEditingViewControllerDelegate-Protocol.h"
#include "IGSundialRemixLogger.h"
#include "IGSundialRemixPivotPageMetadataView.h"
#include "IGSundialRemixPivotPagePerformanceLogger.h"

@class IGMedia, IGSundialGridRemixFeedNetworkSource, IGUser, IGUserSession, NSString;
@protocol IGSundialRemixPivotPageViewControllerDelegate;

@interface IGSundialRemixPivotPageViewController : IGViewController<IGFeedNetworkSourceDelegate, IGSundialGridVideoViewControllerDelegate, IGSundialPostCaptureEditingViewControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_originalMediaId;
  IGUser *_artist;
  IGMedia *_originalVideo;
  BOOL _hasRemixes;
  NSString *_parentMPk;
  NSString *_viewerSessionId;
  IGSundialRemixPivotPageMetadataView *_metadataView;
  IGSundialGridVideoViewController *_gridViewController;
  IGSundialGridRemixFeedNetworkSource *_sundialFeedNetworkSource;
  IGSundialRemixPivotPagePerformanceLogger *_perfLogger;
  IGSundialRemixLogger *_logger;
}

@property (weak, nonatomic) NSObject<IGSundialRemixPivotPageViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session originalMediaId:(id)id user:(id)user parentMPk:(id)mpk viewerSessionId:(id)id logger:(id)logger shouldPinFriendsAtTop:(BOOL)top;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (id)title;
- (BOOL)prefersNavigationBarDividerHidden;
- (long long)preferredTabBarBehavior;
- (void)feedNetworkSource:(id)source didReceiveFeedResponse:(id)response forRequestConfig:(id)config;
- (void)feedNetworkSource:(id)source didFinishLoadingWithConfig:(id)config success:(BOOL)success error:(id)error httpResponse:(id)response;
- (void)feedNetworkSource:(id)source didChangeToObjects:(id)objects;
- (void)feedNetworkSource:(id)source didStartLoadingWithConfig:(id)config;
- (void)feedNetworkSource:(id)source didCancelRequestForRequestConfig:(id)config;
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
- (void)_didTapArtist:(id)artist;
- (void)_didTapRemixButton:(id)button;
- (void)sundialPostCaptureEditingViewController:(id)controller didCancelWithComposition:(id)composition isNavigationHandledByPresenter:(BOOL)presenter deselectAssets:(BOOL)assets;
- (BOOL)sundialPostCaptureEditingViewControllerMustExitTimelineEditorBeforeCancelling:(id)cancelling;
- (void)sundialPostCaptureEditingViewController:(id)controller didShareComposition:(id)composition toDestination:(long long)destination withPostId:(id)id shareOnFacebookPreferences:(id)preferences isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewController:(id)controller didSaveDraft:(id)draft fromPostCapture:(BOOL)capture isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewControllerDidResume:(id)resume;
- (void)sundialPostCaptureEditingViewControllerDidDismiss:(id)dismiss;
@end

#endif /* IGSundialRemixPivotPageViewController_h */