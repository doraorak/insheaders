//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemPreviewController_h
#define IGFeedItemPreviewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAdItemPreviewView.h"
#include "IGFeedItemPreviewView.h"
#include "IGFeedMediaFocusHandler.h"
#include "IGFeedMediaPreviewContext.h"
#include "IGFeedMediaPreviewControllerRegistry.h"
#include "IGHashtagMediaModerationNetworkSource.h"
#include "IGMediaUpdatedListener-Protocol.h"
#include "IGPreviewPresentationDelegate-Protocol.h"
#include "IGPreviewingAction-Protocol.h"
#include "IGStoryItemType-Protocol.h"
#include "IGStoryViewerLoggingContext.h"
#include "IGSundialPostCaptureEditingViewControllerDelegate-Protocol.h"
#include "IGVPVDImpressionHelper.h"

@class IGAdItem, IGHashtagModel, IGMedia, IGStoryViewerViewModel, IGUserSession, IGViewController, NSArray, NSDictionary, NSString, UIImage, UINavigationController;
@protocol IGFeedItemPreviewControllerActionProvider, IGFeedMediaPreviewController, IGSundialAdsMultiAdsPreviewDelegate, UIViewControllerPreviewing;

@interface IGFeedItemPreviewController : IGViewController<IGMediaUpdatedListener, IGSundialPostCaptureEditingViewControllerDelegate, IGPreviewingAction> {
  /* instance variables */
  IGFeedMediaFocusHandler *_activeMediaFocusHandler;
  IGFeedMediaPreviewContext *_mediaContext;
  IGFeedMediaPreviewControllerRegistry *_mediaControllerRegistry;
  IGHashtagMediaModerationNetworkSource *_hashtagMediaModerationNetworkSource;
  IGHashtagModel *_hashtagModel;
  NSObject<UIViewControllerPreviewing> *_previewingContext;
  double _previewWidth;
  NSDictionary *_loggingExtras;
  NSObject<IGStoryItemType> *_storyItem;
  IGStoryViewerLoggingContext *_storyLoggingContext;
  IGStoryViewerViewModel *_storyViewModel;
  IGVPVDImpressionHelper *_impressionHelper;
  IGMedia *_adMedia;
  BOOL _omitProfilePinning;
  IGAdItem *_adItem;
  BOOL _isMultiAds;
  BOOL _showViewProfileAction;
  BOOL _allowReportPostDoesntMatchHashtag;
  NSObject<IGSundialAdsMultiAdsPreviewDelegate> *_multiAdsDelegate;
  NSObject<IGFeedItemPreviewControllerActionProvider> *_actionProvider;
  IGAdItemPreviewView *_adView;
  NSArray *_previewItems;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (retain, nonatomic) NSObject<IGFeedMediaPreviewController> *activeMediaController;
@property (readonly, nonatomic) IGMedia *media;
@property (retain, nonatomic) IGFeedItemPreviewView *thumbnailView;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, copy, nonatomic) NSString *analyticsSourceModule;
@property (readonly, nonatomic) NSString *promoteFlowEntryPoint;
@property (weak, nonatomic) UINavigationController *navigationControllerForPushing;
@property (weak, nonatomic) IGViewController *viewControllerForAnimatedPresentation;
@property (weak, nonatomic) NSObject<IGPreviewPresentationDelegate> *previewPresentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session media:(id)media placeholderImage:(id)image previewingContext:(id)context previewWidth:(double)width showViewProfileAction:(BOOL)action allowReportPostDoesntMatchHashtag:(BOOL)hashtag hashtagModel:(id)model analyticsSourceModule:(id)module loggingExtras:(id)extras storyItem:(id)item storyLoggingContext:(id)context storyViewModel:(id)model adMedia:(id)media omitProfilePinning:(BOOL)pinning adItem:(id)item;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredMinimizableInsets;
- (id)previewActionItems;
- (id)previewActionBarItems;
- (void)_viewProfile;
- (void)mediaWasUpdated:(id)updated withChange:(long long)change isFromPreview:(BOOL)preview;
- (id)analyticsModule;
- (id)analyticsExtras;
- (void)sundialPostCaptureEditingViewController:(id)controller didCancelWithComposition:(id)composition isNavigationHandledByPresenter:(BOOL)presenter deselectAssets:(BOOL)assets;
- (BOOL)sundialPostCaptureEditingViewControllerMustExitTimelineEditorBeforeCancelling:(id)cancelling;
- (void)sundialPostCaptureEditingViewController:(id)controller didShareComposition:(id)composition toDestination:(long long)destination withPostId:(id)id shareOnFacebookPreferences:(id)preferences isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewController:(id)controller didSaveDraft:(id)draft fromPostCapture:(BOOL)capture isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewControllerDidResume:(id)resume;
- (void)sundialPostCaptureEditingViewControllerDidDismiss:(id)dismiss;
@end

#endif /* IGFeedItemPreviewController_h */
