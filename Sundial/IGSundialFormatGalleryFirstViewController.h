//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialFormatGalleryFirstViewController_h
#define IGSundialFormatGalleryFirstViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGActionableConfirmationToastPresenting-Protocol.h"
#include "IGCameraViewController.h"
#include "IGCreationNavigationPresentable-Protocol.h"
#include "IGSundialComposing-Protocol.h"
#include "IGSundialDataRepositoryListener-Protocol.h"
#include "IGSundialFormatViewControllerProtocol-Protocol.h"
#include "IGSundialGalleryConfiguration.h"
#include "IGSundialGallerySelectionController.h"
#include "IGSundialGalleryViewController.h"
#include "IGSundialPostCaptureEditingViewController.h"
#include "IGSundialPostCaptureEditingViewControllerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGAPICreationToolInfoDict, IGDirectionalPanGestureRecognizer, IGSundialAudioTrackClip, IGSundialComposition, IGSundialCreationHighlightedTool, IGSundialGalleryPositionInfo, IGSundialReplaceSingleVideoClipInfo, IGUserSession, NSString, UIView, UIViewController;
@protocol IGSundialFormatViewControllerProtocolDelegate, UIViewController<IGStoryCameraOverlayViewControlling;

@interface IGSundialFormatGalleryFirstViewController : UIViewController<IGSundialPostCaptureEditingViewControllerDelegate, IGSundialDataRepositoryListener, IGActionableConfirmationToastPresenting, UIGestureRecognizerDelegate, IGSundialFormatViewControllerProtocol, IGSundialComposing> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSundialGalleryViewController *_galleryViewController;
  IGSundialGallerySelectionController *_gallerySelectionController;
  UIView *_viewTransitionSnapshot;
  BOOL _hideSettingsButton;
  IGSundialPostCaptureEditingViewController *_postCaptureEditingViewController;
  IGSundialGalleryConfiguration *_configuration;
  IGDirectionalPanGestureRecognizer *_galleryOpenGesture;
  BOOL _hasTurnedOnMultiSelectByDefault;
  IGSundialGalleryPositionInfo *_currentGalleryPositionInfo;
  BOOL _hasMultiSelectedAsset;
  BOOL _is3pMediaClipHubEnabled;
  BOOL _isMemeHubEnabled;
  BOOL _shouldDisplaySavedDraftToast;
  BOOL _isPostCaptureEditingVCPresenting;
  IGSundialCreationHighlightedTool *_postCaptureHighlightedTool;
}

@property (retain, nonatomic) IGAPICreationToolInfoDict *cameraCreationToolInfo;
@property (weak, nonatomic) NSObject<IGSundialPostCaptureEditingViewControllerDelegate> *postCaptureEditingViewControllerDelegate;
@property (retain, nonatomic) IGSundialReplaceSingleVideoClipInfo *replaceSingleVideoClipInfo;
@property (nonatomic) BOOL shouldPreselectOpalAsPostDestination;
@property (readonly, nonatomic) BOOL isAddClipFlow;
@property (readonly, nonatomic) BOOL shouldSkipSoundSync;
@property (readonly, nonatomic) BOOL shouldShowLoadingIndicatorForNextButton;
@property (readonly, nonatomic) BOOL shouldAutoTrimMultiClips;
@property (readonly, nonatomic) IGSundialComposition *composition;
@property (readonly, nonatomic) IGSundialAudioTrackClip *currentAudioClip;
@property (readonly, nonatomic) UIViewController *galleryPresentationController;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) BOOL skipVideoEditorOnInitialSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGSundialFormatViewControllerProtocolDelegate> *delegate;
@property (readonly, nonatomic) long long prefersBottomLeftButtonType;
@property (readonly, nonatomic) BOOL isManagingCameraView;
@property (readonly, nonatomic) BOOL requiresCameraAccess;
@property (retain, nonatomic) IGCameraViewController *cameraViewController;
@property (retain, nonatomic) UIViewController<IGStoryCameraOverlayViewControlling> *overlayViewController;
@property (copy, nonatomic) id /* block */ galleryViewControllerProvider;
@property (retain, nonatomic) NSObject<IGCreationNavigationPresentable> *creationPresenter;

/* instance methods */
- (id)initWithUserSession:(id)session configuration:(id)configuration;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)_closeButtonTapped;
- (void)_didPanVertically:(id)vertically;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)didMoveToParentViewController:(id)controller;
- (void)storyFormatViewControllerWillAppear:(BOOL)appear;
- (void)storyFormatViewControllerDidAppear:(BOOL)appear;
- (void)storyFormatViewControllerWillDisappear:(BOOL)disappear;
- (void)storyFormatViewControllerDidDisappear:(BOOL)disappear;
- (void)_userStoppedScrollingModeSwitcher;
- (void)didDismissPostCaptureWithoutSharing;
- (void)didDismissPostCaptureBySharing;
- (long long)preferredPostCaptureDismissButtonStyle;
- (void)showAREffectTextInstructions:(id)instructions;
- (void)showAREffectTextInstructions:(id)instructions forDuration:(double)duration;
- (void)hideAREffectInstructions;
- (void)sundialDataRepositoryDidUpdateComposition:(unsigned long long)composition;
- (double)maxAvailableDuration;
- (BOOL)shouldClearGallerySelectionOnNavigateToPostcapture;
- (void)sundialGallerySelectionController:(id)controller didSelectVideoClips:(id)clips fromSourceView:(id)view;
- (void)sundialGallerySelectionController:(id)controller didUpdateSoundSyncComposition:(id)composition soundSyncSkipped:(BOOL)skipped;
- (void)sundialGallerySelectionController:(id)controller didUpdateMemeHubComposition:(id)composition;
- (void)sundialGallerySelectionController:(id)controller didSelectGreenScreenAsset:(id)asset;
- (void)sundialGallerySelectionController:(id)controller didSelectGreenScreenVideoClip:(id)clip;
- (void)sundialGallerySelectionController:(id)controller didSelectAudioTrack:(id)track;
- (void)sundialGallerySelectionController:(id)controller didSelectAssets:(id)assets;
- (void)sundialGallerySelectionController:(id)controller didMultiSelectAsset:(id)asset;
- (void)sundialGallerySelectionController:(id)controller didMultiUnselectAsset:(id)asset selectedCount:(unsigned long long)count;
- (BOOL)sundialGallerySelectionControllerShouldShowLoadingIndicatorForNextButton:(id)button;
- (void)sundialGallerySelectionControllerMediaSelectionViewWillDisappear:(id)disappear onPosition:(id)position;
- (void)sundialGallerySelectionController:(id)controller editorViewController:(id)controller didSelectVideoClip:(id)clip;
- (void)sundialGalleryViewControllerAuthorizationStatusDidUpdate:(id)update;
- (void)sundialGallerySelectionController:(id)controller didShareComposition:(id)composition toDestination:(long long)destination;
- (void)sundialPostCaptureEditingViewController:(id)controller didCancelWithComposition:(id)composition isNavigationHandledByPresenter:(BOOL)presenter deselectAssets:(BOOL)assets;
- (BOOL)sundialPostCaptureEditingViewControllerMustExitTimelineEditorBeforeCancelling:(id)cancelling;
- (void)sundialPostCaptureEditingViewController:(id)controller didShareComposition:(id)composition toDestination:(long long)destination withPostId:(id)id shareOnFacebookPreferences:(id)preferences isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewController:(id)controller didSaveDraft:(id)draft fromPostCapture:(BOOL)capture isNavigationHandledByPresenter:(BOOL)presenter;
- (void)sundialPostCaptureEditingViewControllerDidResume:(id)resume;
- (void)sundialPostCaptureEditingViewControllerDidDismiss:(id)dismiss;
- (void)sundialDraftStore:(id)store didFinishDuplicatingDraft:(id)draft;
- (void)sundialDraftStore:(id)store didUpdateNumberOfSavedDrafts:(long long)drafts;
- (void)sundialDraftStoreDidFinishLoadingSavedDrafts:(id)drafts;
- (void)sundialDraftStore:(id)store didSaveDraft:(id)draft;
- (void)sundialDraftStoreClearPreviewImageCache:(id)cache;
- (long long)preferredTabBarBehavior;
- (double)actionableConfirmationToastBottomPadding;
- (double)actionableConfirmationToastTopPadding;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)navigationLatencyLogging:(id)logging didStartTracking:(id)tracking;
@end

#endif /* IGSundialFormatGalleryFirstViewController_h */
