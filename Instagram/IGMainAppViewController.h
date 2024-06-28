//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainAppViewController_h
#define IGMainAppViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAppNavigationHandler-Protocol.h"
#include "IGCreationViewControllerNavigationDelegate-Protocol.h"
#include "IGDirectShareExtensionViewControllerDelegate-Protocol.h"
#include "IGDirectShareSheetInteractor.h"
#include "IGFavoritesPresentationManager.h"
#include "IGFeedCreationFlowDelegate-Protocol.h"
#include "IGFeedCreationFlowHandler-Protocol.h"
#include "IGMainAppScrollingContainerViewController.h"
#include "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"
#include "IGSundialPostCaptureEditingViewControllerDelegate-Protocol.h"
#include "IGTabBarController.h"
#include "IGUserIntentHandlerDelegate-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"
#include "_TtC21IGWearableAutoCapture31IGWearableAutoCaptureController.h"

@class IGAREffectDownloader, IGUserSession, NSMutableArray, NSString, UIViewController;

@interface IGMainAppViewController : IGViewController<IGDirectShareExtensionViewControllerDelegate, IGCreationViewControllerNavigationDelegate, IGFeedCreationFlowDelegate, IGFeedCreationFlowHandler, IGStoryPostCaptureEditingViewControllerDelegate, IGSundialPostCaptureEditingViewControllerDelegate, IGUserIntentHandlerDelegate, IGAppNavigationHandler> {
  /* instance variables */
  IGFavoritesPresentationManager *_favoritesPresentationManager;
  IGDirectShareSheetInteractor *_shareSheetInteractor;
  UIViewController *_directShareExtensionViewController;
  _TtC21IGWearableAutoCapture31IGWearableAutoCaptureController *_autoCaptureController;
  NSMutableArray *_activeViewControllers;
  UIViewController *_cameraController;
  UIViewController *_timeSpentBlockingViewController;
  NSObject<UIViewControllerTransitioningDelegate> *_cameraTransitionDelegate;
  IGMainAppScrollingContainerViewController *_scrollingContainer;
  IGAREffectDownloader *_arEffectDownloader;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) IGTabBarController *tabBarController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session accountSwitcherPresenter:(id)presenter mainAppStartupConfig:(id)config;
- (void)loadView;
- (void)forceInitializeTabBarViewControllerIfNeeded;
- (void)initializeStoryCreationViewControllerIfNeeded;
- (id)mainAppViewControllerBackground;
- (void)showDestination:(id)destination;
- (void)showBrowserIfEligible;
- (void)updateSundialInfoWithMedia:(id)media;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (BOOL)disableNavigationEvent;
- (id)ig_keyViewControllers;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)traitCollectionDidChange:(id)change;
- (id)navigationControllerForAppSurfaceIntent:(id)intent;
- (void)handleAppSurfaceIntent:(id)intent animated:(BOOL)animated;
- (id)prepareURLHandlingWithSurfaceIntent:(id)intent animated:(BOOL)animated;
- (void)prepareURLHandlingWithNavigationController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (id)igTabBarController;
- (id)ig_baseTabBarController;
- (BOOL)isTabBarVisible;
- (void)focusTabBarControllerAnimated:(BOOL)animated;
- (id)profileViewController;
- (id)exploreViewController;
- (void)prefetchProfile;
- (void)prefetchActivityFeed;
- (void)openURLInNewsTab:(id)tab sourceURL:(id)url;
- (BOOL)isUserInFeed;
- (void)navigateToPublicTab;
- (id)currentViewControllerAnalyticsModule;
- (long long)currentScrollingViewControllerItem;
- (BOOL)deinitializeStoryCreationViewControllerIfNeeded;
- (BOOL)isStoryCreationViewControllerInitialized;
- (id)creationFlowHandler;
- (void)feedCreationFlowDidShareSundialComposition:(id)composition toDestination:(long long)destination;
- (void)feedCreationFlowDidSaveSundialDraft:(id)draft;
- (void)presentStoryCameraPreviewWithEntryPoint:(long long)point mediaMetadata:(id)metadata;
- (void)presentStoryCameraPreviewWithEntryPoint:(long long)point creationModel:(id)model assetSource:(unsigned long long)source sourceApplication:(id)application stickerViews:(id)views backgroundImage:(id)image backgroundVideoComposition:(id)composition backgroundColors:(id)colors backgroundGradients:(id)gradients currentBackgroundGradientIndex:(long long)index canSegmentLongVideo:(BOOL)video analyticsModule:(id)module;
- (void)presentStoryCameraPreviewWithMediaItems:(id)items entryPoint:(long long)point creationModel:(id)model assetSource:(unsigned long long)source sourceApplication:(id)application stickerViews:(id)views backgroundColors:(id)colors backgroundGradients:(id)gradients currentBackgroundGradientIndex:(long long)index canSegmentLongVideo:(BOOL)video analyticsModule:(id)module;
- (id)_addLoggingMetadataForCreationModel:(id)model assetSource:(unsigned long long)source;
- (void)presentReelsCameraPreviewWithMedia:(id)media appId:(id)id contentURL:(id)url metadata:(id)metadata presenter:(id)presenter shouldOpenTemplateBrowser:(BOOL)browser;
- (void)presentReelsCameraPreviewWithEntryPoint:(long long)point backgroundVideo:(id)video stickerImage:(id)image QPLlogger:(id)qpllogger appId:(id)id contentURL:(id)url metadata:(id)metadata shouldOpenSoundSync:(BOOL)sync presenter:(id)presenter;
- (void)favoritesPresentationManagerDidCancelSetup:(id)setup;
- (void)favoritesPresentationManagerDidFinishSetup:(id)setup withUsers:(id)users;
- (unsigned long long)notificationPresentationPermissionsForNotificationSource:(unsigned long long)source;
- (BOOL)isUserViewingInbox;
- (BOOL)isUserViewingReelsHomeTab;
- (BOOL)isUserViewingAnyThread;
- (BOOL)isUserViewingThreadWithThreadId:(id)id;
- (BOOL)isUserInMaximizedVideoCall;
- (BOOL)shouldSuppressDirectNotifications;
- (void)dismissPushedProfileViewControllerAnimated:(BOOL)animated;
- (void)presentARCommerceCameraWithLink:(id)link;
- (void)presentShoppingCameraWithEntryPoint:(long long)point productID:(id)id merchantID:(id)id containerEffectConfigId:(id)id testObjectId:(id)id cryptohash:(id)cryptohash;
- (BOOL)isUserViewingExplore;
- (void)presentCameraWithMetadata:(id)metadata captureFlowViewModel:(id)model mode:(long long)mode entryPoint:(long long)point;
- (void)presentCameraWithMetadata:(id)metadata captureFlowViewModel:(id)model mode:(long long)mode entryPoint:(long long)point existingWaterfallEventName:(id)name animated:(BOOL)animated;
- (void)presentShareMediaOptionsWithMediaMetadata:(id)metadata;
- (void)presentSidecarEditorWithComposition:(id)composition metadata:(id)metadata captureFlowViewModel:(id)model mode:(long long)mode entryPoint:(long long)point;
- (BOOL)isUserInFeedCreationFlow;
- (void)shareMediaOptionsViewControllerDidDismiss:(id)dismiss hasSentMessage:(BOOL)message;
- (void)storyPostCaptureEditingViewController:(id)controller didShareToStory:(long long)story andDirectRecipients:(id)recipients storyModelArray:(id)array metadataArray:(id)array highlightIds:(id)ids exitPoint:(long long)point completion:(id /* block */)completion;
- (void)storyPostCaptureEditingViewController:(id)controller didTapSendRollCallWithDirectRecipients:(id)recipients;
- (void)storyPostCaptureEditingViewController:(id)controller didTapSendPermanentMediaWithAsset:(id)asset entryPoint:(long long)point;
- (void)storyPostCaptureEditingViewController:(id)controller didTapConfirmNotesPogVideoWithComposition:(id)composition;
- (void)storyPostCaptureEditingViewControllerDidCancel:(id)cancel;
- (void)feedCreationFlowDidFinishWithType:(long long)type sharingInfo:(id)info postId:(id)id;
- (void)feedCreationFlowDidCancelWithSelectedAssetMetadatas:(id)metadatas;
- (id)feedCreationFlowWillNavigateToTarget;
- (void)creationViewController:(id)controller didEnterState:(long long)state;
- (void)creationViewController:(id)controller willShareToDirectRecipients:(id)recipients;
- (void)creationViewController:(id)controller didFinishWithExitPoint:(long long)point shouldAnimateTransition:(BOOL)transition isNavigationHandledByPresenter:(BOOL)presenter;
- (void)creationViewControllerWillDismiss:(id)dismiss;
- (void)creationViewController:(id)controller didDismissWithExitPoint:(long long)point destination:(long long)destination storySendTarget:(long long)target toDirectRecipients:(id)recipients image:(id)image storyModelArray:(id)array metadataArray:(id)array highlightIds:(id)ids completion:(id /* block */)completion;
- (id)presentedNavigationController;
- (BOOL)isDisplayingTimeSpentBlockingView;
- (void)presentTimeSpentBlockingView:(id)view;
- (void)dismissTimeSpentBlockingViewWithCompletion:(id /* block */)completion;
- (void)_applicationDidBecomeActive;
- (void)ig_dismissPresentedViewControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
- (id)analyticsModule;
- (void)directShareInteractorDidDismissReshareSheet:(id)sheet;
- (void)directShareExtensionViewControllerDidCompleteRequest:(id)request sourceApplication:(id)application;
- (void)directShareExtensionViewControllerDidCancelRequest:(id)request withError:(id)error sourceApplication:(id)application;
- (void)sundialPostCaptureEditingViewController:(id)controller didCancelWithComposition:(id)composition isNavigationHandledByPresenter:(BOOL)presenter deselectAssets:(BOOL)assets;
- (BOOL)sundialPostCaptureEditingViewControllerMustExitTimelineEditorBeforeCancelling:(id)cancelling;
- (void)sundialPostCaptureEditingViewController:(id)controller didShareComposition:(id)composition toDestination:(long long)destination withPostId:(id)id shareOnFacebookPreferences:(id)preferences isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewController:(id)controller didSaveDraft:(id)draft fromPostCapture:(BOOL)capture isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewControllerDidResume:(id)resume;
- (void)sundialPostCaptureEditingViewControllerDidDismiss:(id)dismiss;
@end

#endif /* IGMainAppViewController_h */
