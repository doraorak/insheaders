//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryTopReelsSectionController_h
#define IGDiscoveryTopReelsSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGDiscoveryGridHiddenStateHelper.h"
#include "IGFeedPreviewableSectionController-Protocol.h"
#include "IGHeartAnimator.h"
#include "IGMediaUpdatedListener-Protocol.h"
#include "IGSundialFeedSource-Protocol.h"
#include "IGSundialVideoUploadListener-Protocol.h"
#include "IGSundialViewerProtocol-Protocol.h"
#include "IGTransitionZoomListAware-Protocol.h"
#include "IGTransitionZoomListCapable-Protocol.h"

@class IGDiscoveryGridItem, IGPlaybackCoordinator, IGUserSession, NSNumber, NSString, NSUUID;
@protocol IGDiscoveryGridLoggingProvider, IGDiscoverySectionLoggingProvider, IGDiscoveryTopReelsSectionControllerDelegate, IGGridItemPositionProvider;

@interface IGDiscoveryTopReelsSectionController : IGListSectionController<IGMediaUpdatedListener, IGSundialViewerProtocol, IGSundialVideoUploadListener, IGTransitionZoomListAware, IGTransitionZoomListCapable, IGFeedPreviewableSectionController> {
  /* instance variables */
  IGUserSession *_userSession;
  struct IGGridLayoutConfiguration { double interitemSpacing; struct UIEdgeInsets { double top; double left; double bottom; double right; } insets; double mediasPerRow; double aspectRatio; double cellCornerRadius; } _layoutConfig;
  NSObject<IGDiscoverySectionLoggingProvider> *_loggingProvider;
  NSObject<IGDiscoveryGridLoggingProvider> *_gridLoggingProvider;
  NSObject<IGGridItemPositionProvider> *_gridPositionProvider;
  IGPlaybackCoordinator *_playbackCoordinator;
  NSUUID *_currentPlaybackSessionKey;
  IGDiscoveryGridItem *_gridItem;
  NSObject<IGSundialFeedSource> *_videoFeed;
  NSObject<IGDiscoveryTopReelsSectionControllerDelegate> *_delegate;
  IGDiscoveryGridHiddenStateHelper *_hiddenStateHelper;
  NSString *_clipsViewerModuleSuffix;
  NSString *_serpKeyword;
  BOOL _shouldAnimateReel;
  BOOL _shouldHideIcon;
  BOOL _shouldShowCaption;
  IGHeartAnimator *_heartAnimator;
}

@property (retain, nonatomic) NSString *locationId;
@property (retain, nonatomic) NSNumber *searchReelsPageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showMultipleSelection;

/* instance methods */
- (id)initWithUserSession:(id)session playbackCoordinator:(id)coordinator layoutConfig:(struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; })config delegate:(id)delegate gridPositionProvider:(id)provider loggingProvider:(id)provider gridLoggingProvider:(id)provider clipsViewerModuleSuffix:(id)suffix serpKeyword:(id)keyword shouldAnimateReel:(BOOL)reel shouldHideIcon:(BOOL)icon shouldShowCaption:(BOOL)caption;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)presentFeedPreviewableItem;
- (void)sundialViewerViewController:(id)controller didUpdateActiveVideo:(id)video;
- (void)sundialViewerViewControllerDidEndShowingActiveVideo:(id)video;
- (void)sundialViewerViewControllerWillDismiss:(id)dismiss lastActiveOrganicVideo:(id)video;
- (void)sundialViewerViewControllerWillZoomToDismiss:(id)dismiss lastActiveOrganicVideo:(id)video;
- (void)sundialViewerViewControllerDidDismiss:(id)dismiss;
- (void)sundialViewerViewController:(id)controller willDismissWithTimeSpent:(double)spent;
- (void)sundialViewerViewControllerDidShareToDirect;
- (void)sundialViewerViewControllerDidShareToStory;
- (void)sundialViewerViewControllerDidSavePost;
- (void)sundialViewerViewControllerDidUpdateLongPressStatus;
- (void)sundialViewerViewControllerWillSetFooterAlpha:(double)alpha;
- (void)sundialViewerViewController:(id)controller didUpdateCarouselPostItemTo:(id)to;
- (void)sundialVideoDidSuccessfullyUpload:(id)upload media:(id)media sharedToFeed:(BOOL)feed sharedToReels:(BOOL)reels sharedToProfileGrid:(BOOL)grid fanClubVideoType:(long long)type;
- (void)sundialVideoDidFailToUpload:(id)upload;
- (void)sundialVideoDidBeginUpload:(id)upload sharedToFeed:(BOOL)feed sharedToReels:(BOOL)reels fanClubVideoType:(long long)type;
- (void)sundialVideo:(id)video didUpdateUploadProgress:(double)progress;
- (void)sundialVideoDidCancelUpload:(id)upload;
- (void)hiddenStateHelperWillPerformHide:(id)hide;
- (void)hiddenStateHelperDidPerformHide:(id)hide;
- (void)hiddenStateHelperWillPerformUnhide:(id)unhide;
- (void)hiddenStateHelperDidPerformUnhide:(id)unhide;
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (id)transitionZoomViewWithContext:(id)context;
- (long long)transitionZoomViewIndex;
- (void)mediaWasUpdated:(id)updated withChange:(long long)change isFromPreview:(BOOL)preview;
- (BOOL)_shouldHideIcon;
@end

#endif /* IGDiscoveryTopReelsSectionController_h */
