//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialFormatViewController_h
#define IGSundialFormatViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGARAudioEffectAvailabilityListener-Protocol.h"
#include "IGActionableConfirmationToastPresenting-Protocol.h"
#include "IGAudioModelProtocol-Protocol.h"
#include "IGBugReportingRageShakeInterceptionProtocol-Protocol.h"
#include "IGCameraViewController.h"
#include "IGCameraZoomControllerDelegate-Protocol.h"
#include "IGCreationNavigationPresentable-Protocol.h"
#include "IGEDRViewType-Protocol.h"
#include "IGStoryAudioPlayerDelegate-Protocol.h"
#include "IGStoryDrawerDismissDelegate-Protocol.h"
#include "IGStoryMediaCompositionStickerCreationControllerDelegate-Protocol.h"
#include "IGSundialAudioExtractorManager.h"
#include "IGSundialAudioPillPresenterProtocol-Protocol.h"
#include "IGSundialCameraShutterButtonBlockingGesture.h"
#include "IGSundialCaptureControlsOverlayView.h"
#include "IGSundialDataRepositoryListener-Protocol.h"
#include "IGSundialFormatPerformanceLogger.h"
#include "IGSundialFormatViewControlling-Protocol.h"
#include "IGSundialGallerySelectionController.h"
#include "IGSundialGalleryViewController.h"
#include "IGSundialNUXViewController.h"
#include "IGSundialPictureInPictureLayout.h"
#include "IGSundialRecordingProgressIndicator.h"
#include "IGSundialRemixSelectorUserDropOffLogger.h"
#include "IGSundialShutterButton.h"
#include "IGSundialSingleVideoClipEditorViewController.h"
#include "IGSundialSingleVideoClipEditorViewControllerDelegate-Protocol.h"
#include "IGSundialSoundSyncNavigator-Protocol.h"
#include "IGSundialVideoLayoutViewController.h"
#include "IGVideoRecorderDualOptions.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtC15IGMLModelLoader19IGMLModelPrefetcher.h"
#include "_TtP38IGSundialAutoCreatedReelViewController46IGSundialAutoCreatedReelViewControllerDelegate_-Protocol.h"

@class IGARAudioEffectData, IGAREffectTargetModel, IGAsyncTask, IGAudioBrowserCameraLogger, IGAudioSessionClient, IGAudioTrackClip, IGCameraDynamicPreviewView, IGCameraInstructionView, IGCameraZoomController, IGDirectionalPanGestureRecognizer, IGGradientView, IGInstantGestureRecognizer, IGPartialModalSheetViewController, IGPassthroughView, IGPlaybackTimeline, IGStoryAudioPlayer, IGStoryDrawerViewController, IGStoryMediaCompositionStickerCreationController, IGStoryMediaLoadingIndicatorView, IGStoryStyledFrameBundleView, IGSundialAudioTrackClip, IGSundialComposition, IGSundialCreationConfiguration, IGSundialCreationPromptPageViewController, IGSundialGalleryPositionInfo, IGSundialRemixVideoPlayerView, IGSundialReplaceSingleVideoClipInfo, IGUserSession, NSArray, NSMutableArray, NSString, NSUUID, UIImageView, UILabel, UITapGestureRecognizer, UIView, UIViewController;
@protocol IGARAudioEffectTimeUpdateListener><IGARAudioEffectDataConsumer, IGPerformanceLoggable, IGSundialFormatViewControllerProtocolDelegate, OS_dispatch_queue, UIViewController<IGStoryCameraOverlayViewControlling;

@interface IGSundialFormatViewController : UIViewController<IGCameraZoomControllerDelegate, IGStoryAudioPlayerDelegate, IGSundialSoundSyncNavigator, IGSundialSingleVideoClipEditorViewControllerDelegate, UIGestureRecognizerDelegate, _TtP38IGSundialAutoCreatedReelViewController46IGSundialAutoCreatedReelViewControllerDelegate_, IGActionableConfirmationToastPresenting, IGStoryMediaCompositionStickerCreationControllerDelegate, IGSundialDataRepositoryListener, IGBugReportingRageShakeInterceptionProtocol, IGStoryDrawerDismissDelegate, IGSundialFormatViewControlling, IGARAudioEffectAvailabilityListener, IGSundialAudioPillPresenterProtocol, IGEDRViewType> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSundialCreationConfiguration *_creationConfiguration;
  IGStoryAudioPlayer *_musicAudioPlayer;
  IGAudioSessionClient *_audioSessionClient;
  IGGradientView *_gradientBackgroundView;
  IGCameraInstructionView *_cameraInstructionsView;
  IGPassthroughView *_cameraControlsOverlayView;
  IGSundialCaptureControlsOverlayView *_clipsControlsOverlayView;
  IGSundialRecordingProgressIndicator *_recordingProgressIndicator;
  double _recordingSpeed;
  BOOL _ghostModeSelectedDuringLastVideoCapture;
  BOOL _visible;
  BOOL _wasPresentedOnce;
  UIImageView *_ghostModeImageView;
  NSString *_lastSelectedCameraEffectID;
  IGPlaybackTimeline *_recordingTimeline;
  IGDirectionalPanGestureRecognizer *_galleryOpenGesture;
  IGSundialGalleryViewController *_galleryViewController;
  IGSundialShutterButton *_shutterProgressButton;
  struct CGPoint { double x; double y; } _shutterButtonTouchDownLocation;
  double _shutterButtonTouchDownTimestamp;
  IGInstantGestureRecognizer *_shutterButtonGesture;
  IGSundialCameraShutterButtonBlockingGesture *_shutterButtonBlockingGesture;
  UITapGestureRecognizer *_remixCollectionSwitchVideoGestureRecognizer;
  long long _remixCollectionVideoIndex;
  UITapGestureRecognizer *_doubleTapGestureRecognizer;
  IGSundialNUXViewController *_clipsNUXViewController;
  BOOL _countdownIsActive;
  double _countdownDuration;
  IGSundialRemixVideoPlayerView *_remixedVideoPlayer;
  IGSundialPictureInPictureLayout *_remixedVideoLayout;
  NSUUID *_autoSavedDraftID;
  IGSundialFormatPerformanceLogger *_perfLogger;
  IGCameraZoomController *_zoomController;
  BOOL _hasSeenOrBypassedNuxInCurrentCameraSession;
  NSMutableArray *_allTooltipsShown;
  NSMutableArray *_pendingSelectedAssets;
  NSObject<IGAudioModelProtocol> *_preloadedTrack;
  IGAudioTrackClip *_preloadedAudioTrackClip;
  BOOL _arAudioEffectRequiresData;
  BOOL _isCurrentAudioTrackARMusicEffectCompatible;
  IGARAudioEffectData *_arAudioEffectData;
  IGAREffectTargetModel *_effectToPrompt;
  IGAudioTrackClip *_trackToPrompt;
  IGSundialVideoLayoutViewController *_sundialVideoLayoutViewController;
  NSArray *_sundialVideoLayoutFormatVariants;
  NSString *_initialCaptureDeviceIDWhenRecordingStarted;
  BOOL _isDualEnabled;
  NSArray *_originalCaptureDevices;
  IGStoryStyledFrameBundleView *_pipFrameView;
  IGCameraDynamicPreviewView *_pipCameraPreviewView;
  BOOL _isSmartCaptureEnabled;
  BOOL _didStopRecordUsingSmartCapture;
  BOOL _isShowingAudioBrowser;
  IGVideoRecorderDualOptions *_videoRecorderDualOptions;
  IGStoryMediaLoadingIndicatorView *_loadingIndicatorView;
  IGAsyncTask *_loadingAudioAsset;
  BOOL _shouldShowMusicEffectTooltip;
  IGAudioTrackClip *_originalMediaAudio;
  UIView *_animationTransitionView;
  IGAREffectTargetModel *_recommendedEffect;
  IGStoryDrawerViewController *_galleryDrawVC;
  NSArray *_initialStickers;
  IGSundialGallerySelectionController *_gallerySelectionController;
  UILabel *_remixGreenscreenEffectDebugInstanceIdLabel;
  IGAsyncTask *_cameraCaptureSessionStarted;
  IGAsyncTask *_cameraCaptureBecameAvailable;
  BOOL _isSkippingCameraNux;
  IGSundialSingleVideoClipEditorViewController *_sequentialRemixTrimController;
  IGSundialRemixSelectorUserDropOffLogger *_userDropOffLogger;
  BOOL _compositionAddedClipsAfterInitialLoad;
  IGSundialCreationPromptPageViewController *_promptPage;
  IGPartialModalSheetViewController *_promptPageHalfSheet;
  NSObject<OS_dispatch_queue> *_serialQueue;
  IGAudioBrowserCameraLogger *_audioBrowserLogger;
  NSObject<IGPerformanceLoggable> *_preloadingPerfLogger;
  double _contentCornerRadius;
  BOOL _navigateToPostcaptureAfterProcessingHasFinished;
  IGStoryMediaCompositionStickerCreationController *_stickerController;
  BOOL _edr;
  BOOL _userDiscardedClips;
  BOOL _audioAndVideoPermissionsWereGranted;
  IGSundialGalleryPositionInfo *_currentGalleryPositionInfo;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRegion;
  IGSundialAudioExtractorManager *_audioExtractorManager;
  _TtC15IGMLModelLoader19IGMLModelPrefetcher *_modelPrefetcher;
  BOOL _isGestureControlSupported;
  double _recordingTimerDuration;
}

@property (copy, nonatomic) NSArray *videoClips;
@property (retain, nonatomic) IGSundialAudioTrackClip *currentAudioClip;
@property (readonly, nonatomic) BOOL isRecording;
@property (nonatomic) BOOL loadingIndicatorViewVisible;
@property (nonatomic) BOOL remixGreenscreenEnabled;
@property (weak, nonatomic) NSObject<IGSundialFormatViewControllerProtocolDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGARAudioEffectTimeUpdateListener><IGARAudioEffectDataConsumer> *arAudioEffectService;
@property (retain, nonatomic) IGSundialComposition *composition;
@property (nonatomic) BOOL isControlsOverlayHidden;
@property (readonly, nonatomic) long long videoClipCount;
@property (retain, nonatomic) NSString *appliedEffectModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL shouldSkipSoundSync;
@property (readonly, nonatomic) BOOL shouldShowLoadingIndicatorForNextButton;
@property (readonly, nonatomic) BOOL shouldAutoTrimMultiClips;
@property (readonly, nonatomic) UIViewController *galleryPresentationController;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) BOOL isAddClipFlow;
@property (readonly, nonatomic) BOOL skipVideoEditorOnInitialSelection;
@property (readonly, nonatomic) IGSundialReplaceSingleVideoClipInfo *replaceSingleVideoClipInfo;
@property (readonly, nonatomic) long long prefersBottomLeftButtonType;
@property (readonly, nonatomic) BOOL isManagingCameraView;
@property (readonly, nonatomic) BOOL requiresCameraAccess;
@property (retain, nonatomic) IGCameraViewController *cameraViewController;
@property (retain, nonatomic) UIViewController<IGStoryCameraOverlayViewControlling> *overlayViewController;
@property (copy, nonatomic) id /* block */ galleryViewControllerProvider;
@property (retain, nonatomic) NSObject<IGCreationNavigationPresentable> *creationPresenter;

/* instance methods */
- (id)initWithUserSession:(id)session sundialCreationConfiguration:(id)configuration audioTrackClip:(id)clip stickers:(id)stickers caption:(id)caption;
- (void)loadView;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)controller;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)cameraWillStartRecording;
- (void)cameraDidStartRecording:(struct { long long x0; int x1; unsigned int x2; long long x3; })recording;
- (struct CGSize { double x0; double x1; })captureManagerPreviewOutputSize;
- (void)cameraDidStopRecordingAndCaptureVideos:(id)videos timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration mediaResolution:(struct CGSize { double x0; double x1; })resolution effectModel:(id)model error:(id)error;
- (void)_handleShutterButtonGesture:(id)gesture;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)cameraViewController:(id)controller viewforDevice:(id)device;
- (id)cameraViewController:(id)controller viewforPosition:(long long)position;
- (void)cameraViewController:(id)controller modelOutputDidUpdate:(id)update;
- (void)sundialDataRepositoryDidUpdateComposition:(unsigned long long)composition;
- (void)setClipsCameraControlsHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)audioAndVideoPermissionsWereGranted:(BOOL)granted;
- (void)cameraDidPauseRecordingVideo:(struct { long long x0; int x1; unsigned int x2; long long x3; })video;
- (void)cameraDidResumeRecordingVideo:(struct { long long x0; int x1; unsigned int x2; long long x3; })video;
- (void)_didTapTimerButton:(id)button;
- (void)_didTapMuteButton:(long long)button;
- (void)clipsDurationPickerDidTapSetTimerButton:(id)button;
- (void)clipsDurationPickerDidTapCancelTimerButton:(id)button;
- (void)clipsCountdownTimerDidStart:(id)start;
- (void)clipsCountdownTimerFinished:(id)finished;
- (void)pickerButtonDidExpandPicker:(id)picker;
- (void)pickerButton:(id)button didSelectItemAtIndex:(unsigned long long)index;
- (void)pickerButtonDidCollapsePicker:(id)picker;
- (void)_didTapGhostButton:(id)button;
- (void)_didTapCameraEffectsButton:(id)button;
- (void)setEffectsButtonHighlighted:(BOOL)highlighted;
- (void)_didTapMusicButton:(id)button;
- (void)presentAudioEditorForAudioTrackClip:(id)clip;
- (void)storyAudioPlayer:(id)player didDetermineAssetPlayabilityStatus:(BOOL)status;
- (void)storyAudioPlayer:(id)player didUpdateToPlaybackTime:(double)time;
- (void)storyAudioPlayerDidPlayToEnd:(id)end;
- (void)storyAudioPlayer:(id)player didDetermineDuration:(double)duration ofAsset:(id)asset;
- (void)storyAudioPlayer:(id)player effectivePlaybackRateDidChange:(double)change;
- (void)storyAudioPlayer:(id)player didUpdateStallState:(BOOL)state;
- (void)audioBrowserViewController:(id)controller didTapAudioTrack:(id)track context:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)audioBrowserViewController:(id)controller didSelectAudioTrack:(id)track;
- (void)setIsShowingAudioBrowser:(BOOL)browser;
- (void)sundialAudioPreCaptureEditor:(id)editor didTapDoneButtonWithAudioTrackClip:(id)clip;
- (void)sundialAudioPreCaptureEditorDidTapDismissButton:(id)button;
- (void)sundialSoundSyncNavigatorShouldGoBackForViewController:(id)controller;
- (void)sundialSoundSyncNavigatorShouldSkipForViewController:(id)controller withComposition:(id)composition;
- (void)sundialSoundSyncNavigatorShouldGoForwardForViewController:(id)controller withComposition:(id)composition;
- (void)_didPanVertically:(id)vertically;
- (void)openClipsGalleryWithPresentingPanGesture:(id)gesture galleryEntryPoint:(long long)point;
- (void)_didTapEditClipButton:(id)button;
- (void)setAddYoursButtonHidden:(BOOL)hidden;
- (void)updateCompositionAfterDeletingSticker:(id)sticker;
- (void)_didTapAddYoursButton:(id)button;
- (void)didTapSticker:(id)sticker atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)sundialCreationPromptPageViewController:(id)controller didSelectPromptStickerModel:(id)model;
- (void)sundialCreationPromptPageViewControllerDidSelectNewStickerCreation:(id)creation;
- (void)_didTapDeleteAllCapturesButton:(id)button;
- (void)_precaptureNextTap;
- (void)showPreloadedAttributionsPillForEffect:(id)effect creationTemplate:(id)template;
- (void)hideSuggestedPill;
- (void)preloadSettingsPickerDidTapContinueButton:(id)button audioSelected:(BOOL)selected effectSelected:(BOOL)selected;
- (void)preloadSettingsPickerDidTapClearAllButton:(id)button;
- (void)storyMusicClipsNUXViewControllerDidTapDismissButton:(id)button;
- (void)sundialNUXExplorePageVCDidTapGetStartedButton:(id)button;
- (void)setMuteButtonHidden:(BOOL)hidden;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)storyFormatViewControllerWillAppear:(BOOL)appear;
- (void)storyFormatViewControllerDidAppear:(BOOL)appear;
- (void)storyFormatViewControllerWillDisappear:(BOOL)disappear;
- (void)storyFormatViewControllerDidDisappear:(BOOL)disappear;
- (void)_userStoppedScrollingModeSwitcher;
- (void)didDismissPostCaptureBySharing;
- (long long)preferredPostCaptureDismissButtonStyle;
- (void)didDismissPostCaptureBySavingDraft;
- (void)didDismissPostCaptureWithoutSharing;
- (void)cameraWillStopRecording;
- (void)cameraDidStopRecording:(struct { long long x0; int x1; unsigned int x2; long long x3; })recording;
- (void)showAREffectTextInstructions:(id)instructions;
- (void)showAREffectTextInstructions:(id)instructions forDuration:(double)duration;
- (void)hideAREffectInstructions;
- (BOOL)storyCameraOverlayViewControllerShouldShowVariantSelectorCloseButton:(id)button;
- (void)storyCameraOverlayViewController:(id)controller didSelectVariantAtIndex:(long long)index;
- (void)storyCameraOverlayViewController:(id)controller didTapVariantAtIndex:(long long)index;
- (void)storyCameraOverlayViewController:(id)controller didEndScrollingAtIndex:(long long)index;
- (id)toolsMenu;
- (void)endPreloadingLatencyLoggingWithHasEffect:(BOOL)effect;
- (void)cancelPreloadingLatencyLogging;
- (void)sundialSingleVideoClipEditorViewControllerDidAdd:(id)add;
- (void)sundialSingleVideoClipEditorViewControllerDidCancel:(id)cancel;
- (void)sundialSingleVideoClipEditorViewControllerDidTrim:(id)trim;
- (void)sundialSingleVideoClipEditorViewController:(id)controller didAutoTrimSlowedDownExtendedClip:(id)clip;
- (void)sundialSingleVideoClipEditorViewController:(id)controller didSelectAudioTrackClip:(id)clip;
- (void)zoomController:(id)controller didChangeZoomScaleBy:(double)by;
- (void)captureButtonDidZoomScale:(double)scale;
- (void)zoomControllerDidStopZoom:(id)zoom withGestureRecognizer:(id)recognizer;
- (void)sundialRemixVideoPlayerView:(id)view didEndZoomingAtScale:(double)scale withOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)sundialCaptureControlsOverlayView:(id)view toolButtonTapped:(id)tapped;
- (BOOL)canSelectVideoLayout;
- (void)sundialCaptureControlOverlayView:(id)view didSelectVideoLayout:(BOOL)layout;
- (void)sundialCaptureControlOverlayView:(id)view didSelectVideoLayoutAtIndex:(unsigned long long)index;
- (void)sundialCaptureControlOverlayView:(id)view didChangeVideoLayoutViewAlignment:(BOOL)alignment;
- (void)sundialCaptureControlOverlayView:(id)view didTapDualButton:(id)button;
- (void)sundialCaptureControlOverlayView:(id)view didTapSmartCaptureButton:(id)button;
- (void)sundialCaptureControlOverlayView:(id)view didTapGreenScreenButton:(id)button;
- (void)sundialCaptureControlOverlayView:(id)view didTapSUPButton:(long long)supbutton completion:(id /* block */)completion;
- (void)sundialCaptureControlOverlayViewDidTapSUPRequestCapture:(id)capture;
- (id)layoutVariantsFor:(id)for;
- (void)setDoubleTapGestureEnabled:(BOOL)enabled;
- (void)_handleDoubleTap:(id)tap;
- (void)_handleSingleTap:(id)tap;
- (void)_applicationDidEnterBackground:(id)background;
- (void)currentEffectRequiresARAudioEffectData:(BOOL)data;
- (void)autoCreatedReelViewController:(id)controller didCreateSundialComposition:(id)composition;
- (void)autoCreatedReelViewControllerDidTapBackButton:(id)button;
- (void)presentAudioBrowser;
- (void)startPromptStickerCreation;
- (void)storyCameraOverlayViewControllerDidSelectGreenScreenEffect:(id)effect didSelectGreenScreenEffect:(BOOL)effect;
- (void)sundialPictureInPictureLayoutDidBeginDragging:(id)dragging;
- (void)sundialPictureInPictureLayoutDidEndDragging:(id)dragging targetOrigin:(struct CGPoint { double x0; double x1; })origin;
- (long long)preferredTabBarBehavior;
- (double)actionableConfirmationToastBottomPadding;
- (double)actionableConfirmationToastTopPadding;
- (void)didStartCaptureSession;
- (void)captureBecameAvailable;
- (void)_handleRemixCollectionSwitchVideoGesture;
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
- (id)sundialDropGallerySelectionView;
- (void)setEDR:(BOOL)edr;
- (void)stickerCreationController:(id)controller presentStickerCreationViewController:(id)controller;
- (void)stickerCreationController:(id)controller presentMusicStickerEditingViewControllerWithMusicTrackClip:(id)clip musicSticker:(id)sticker;
- (void)stickerCreationControllerPresentTemplatesEditingViewController:(id)controller;
- (void)stickerCreationController:(id)controller willDismissStickerCreationViewController:(id)controller withSticker:(id)sticker;
- (void)stickerCreationController:(id)controller didDismissStickerCreationViewController:(id)controller withSticker:(id)sticker;
- (void)stickerCreationController:(id)controller didSelectSticker:(id)sticker;
- (void)stickerCreationController:(id)controller didSelectGalleryStickers:(id)stickers;
- (void)stickerCreationController:(id)controller presentAlertWithMessage:(id)message;
- (void)stickerCreationControllerPresentPromptPage:(id)page withSticker:(id)sticker;
- (void)stickerCreationController:(id)controller selectedTrendingPrompt:(BOOL)prompt;
- (void)stickerCreationController:(id)controller presentFundraiserDetailsPage:(id)page;
- (void)stickerCreationController:(id)controller presentMagicModWithCameraToolType:(long long)type;
- (void)stickerCreationController:(id)controller presentMagicModTopicStickerWithCameraToolType:(long long)type;
- (void)stickerCreationController:(id)controller selectedMusicPickMusicTrack:(id)track;
- (void)stickerCreationController:(id)controller cutoutSticker:(id)sticker isLoaded:(BOOL)loaded;
- (void)stickerCreationController:(id)controller cutoutSticker:(id)sticker endedWithError:(id)error;
- (void)stickerCreationControllerPresentPolaroidGalleryPickerViewController:(id)controller;
- (void)stickerCreationControllerPresentTextStickerCreation:(id)creation;
- (void)stickerCreationControllerPresentCutoutStickerCreation:(id)creation;
- (void)stickerCreationControllerShowNoCaptionsActionableToast:(id)toast;
- (void)showSuggestedPillWithModel:(id)model;
- (void)resetSuggestedPill;
- (BOOL)shouldPerformActionInsteadOfReportingForRageShakeInterval:(double)interval;
- (id /* block */)actionToPerformOnRageShake;
- (BOOL)storyDrawerShouldBeginGestureRecognizer:(id)recognizer;
- (void)storyDrawerWillShow:(id)show;
- (void)storyDrawerWillDismiss:(id)dismiss withDismissStyle:(unsigned long long)style;
- (void)storyDrawerDidDismiss:(id)dismiss;
- (void)storyDrawerTransitionDidFinish:(id)finish didShow:(BOOL)show;
- (void)navigationLatencyLogging:(id)logging didStartTracking:(id)tracking;
- (BOOL)isRemixGreenscreenEnabled;
@end

#endif /* IGSundialFormatViewController_h */
