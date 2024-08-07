//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryLiveFormatViewController_h
#define IGStoryLiveFormatViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAddPartnerSearchContainerViewControllerDelegate-Protocol.h"
#include "IGCameraToolsMenuHandednessController.h"
#include "IGCameraViewController.h"
#include "IGCameraZoomControllerDelegate-Protocol.h"
#include "IGCreationNavigationPresentable-Protocol.h"
#include "IGDirectChannelsLiveConfiguration.h"
#include "IGLiveAudienceControlViewController.h"
#include "IGLiveBrandedContentPartnersViewController.h"
#include "IGLiveBroadcastLogger.h"
#include "IGLivePromptsViewControllerDelegate-Protocol.h"
#include "IGLiveUserPaySheetViewController.h"
#include "IGQuickCamCaptureButtonDelegate-Protocol.h"
#include "IGStoryAudienceSelectionViewControllerDelegate-Protocol.h"
#include "IGStoryCameraOverlayViewControllerDelegate-Protocol.h"
#include "IGStoryFormatViewControllerProtocol-Protocol.h"
#include "IGStoryLiveOverlayView.h"
#include "IGVideoRecorderDualOptions.h"
#include "_TtP13SUPConnecting13SUPConnecting_-Protocol.h"
#include "_TtP22SUPEngagementProducing22SUPEngagementProducing_-Protocol.h"

@class IGActionableConfirmationToastController, IGBrandedContentUpsellHelper, IGCameraDynamicPreviewView, IGCameraZoomController, IGNavigationController, IGPartialModalSheetViewController, IGStoryStyledFrameBundleView, IGUserSession, NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol IGStoryLiveFormatViewControllerDelegate, IGStoryLiveFormatViewControllerOverlayHideDelegate, UIViewController<IGLiveBroadcastMainViewControllerProtocol, UIViewController<IGStoryCameraOverlayViewControlling;

@interface IGStoryLiveFormatViewController : UIViewController<IGCameraZoomControllerDelegate, IGQuickCamCaptureButtonDelegate, IGStoryCameraOverlayViewControllerDelegate, IGAddPartnerSearchContainerViewControllerDelegate, IGLivePromptsViewControllerDelegate, IGStoryAudienceSelectionViewControllerDelegate, IGStoryFormatViewControllerProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
  IGCameraZoomController *_zoomController;
  IGLiveBrandedContentPartnersViewController *_brandedContentPartnersViewController;
  NSMutableSet *_preLiveConfigurations;
  long long _selectedPreLiveOptions;
  IGDirectChannelsLiveConfiguration *_directChannelsLiveConfiguration;
  BOOL _isLiveOn;
  NSString *_shoppingWaterfallId;
  UIViewController<IGLiveBroadcastMainViewControllerProtocol> *_liveMainViewController;
  IGPartialModalSheetViewController *_liveUserPayPartialModalSheetViewController;
  IGLiveUserPaySheetViewController *_liveUserPaySheetViewController;
  NSString *_goalSettingMessage;
  IGLiveAudienceControlViewController *_audienceControlVC;
  IGNavigationController *_audienceNavigationController;
  IGPartialModalSheetViewController *_audiencePartialModalSheet;
  BOOL _isBrandedContentNonFeedDisclosureRedesign;
  NSMutableArray *_brandPartners;
  NSString *_liveDetailsTitle;
  IGBrandedContentUpsellHelper *_brandedContentUpsellHelper;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRegion;
  IGLiveBroadcastLogger *_preliveLogger;
  BOOL _canSupportPreliveInvitations;
  NSObject<_TtP13SUPConnecting13SUPConnecting_> *_supConnector;
  NSObject<_TtP22SUPEngagementProducing22SUPEngagementProducing_> *_engagementProducer;
  IGCameraToolsMenuHandednessController *_handednessController;
  IGActionableConfirmationToastController *_toastController;
  BOOL _isDualEnabled;
  NSArray *_originalCaptureDevices;
  IGStoryStyledFrameBundleView *_pipFrameView;
  IGCameraDynamicPreviewView *_pipCameraPreviewView;
  IGVideoRecorderDualOptions *_videoRecorderDualOptions;
  BOOL _effectSliderRevealsLeft;
}

@property (weak, nonatomic) NSObject<IGStoryLiveFormatViewControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGStoryLiveFormatViewControllerOverlayHideDelegate> *overlayHideDelegate;
@property (readonly, nonatomic) IGStoryLiveOverlayView *liveOverlayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long prefersBottomLeftButtonType;
@property (readonly, nonatomic) BOOL isManagingCameraView;
@property (readonly, nonatomic) BOOL requiresCameraAccess;
@property (retain, nonatomic) IGCameraViewController *cameraViewController;
@property (retain, nonatomic) UIViewController<IGStoryCameraOverlayViewControlling> *overlayViewController;
@property (copy, nonatomic) id /* block */ galleryViewControllerProvider;
@property (retain, nonatomic) NSObject<IGCreationNavigationPresentable> *creationPresenter;

/* instance methods */
- (id)initWithUserSession:(id)session directChannelsLiveConfiguration:(id)configuration;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)livePreLiveAvailableOptionsService:(id)service didUpdateAvailablePreLiveOptions:(long long)options userPayBroadcasterConfig:(id)config;
- (void)brandedContentUpsellHelperDidTapAddTagButtonWithSignals:(id)signals suspectedCoauthors:(id)coauthors;
- (void)brandedContentUpsellHelperDidTapShareAnywayButtonWithSignals:(id)signals entryPoint:(unsigned long long)point;
- (void)brandedContentUpsellHelperDidTapShareAnywayButtonWithSignals:(id)signals entryPoint:(unsigned long long)point contentType:(unsigned long long)type;
- (void)brandedContentUpsellHelperDidTapReviewBrandedContentPolicies;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)storyFormatViewControllerWillAppear:(BOOL)appear;
- (void)storyFormatViewControllerDidAppear:(BOOL)appear;
- (void)storyFormatViewControllerWillDisappear:(BOOL)disappear;
- (void)storyFormatViewControllerDidDisappear:(BOOL)disappear;
- (void)didDismissPostCaptureWithoutSharing;
- (void)didDismissPostCaptureBySharing;
- (void)storyLiveOverlayViewDidTapAddTitleButton:(id)button;
- (void)storyLiveOverlayViewDidTapAddPromptsButton:(id)button;
- (void)storyLiveOverlayViewDidTapAudienceControlButton:(id)button;
- (void)storyLiveOverlayViewDidTapAddFundraiserButton:(id)button;
- (void)storyLiveOverlayViewDidTapLiveDualCameraButton:(id)button;
- (void)storyLiveOverlayViewDidTapAddUserPayButton:(id)button;
- (void)storyLiveOverlayView:(id)view didChangeZoomScaleBy:(double)by;
- (void)storyLiveOverlayViewDidTapLiveSchedulingButton:(id)button;
- (void)storyLiveOverlayViewDidTapSubscriptionButton:(id)button;
- (void)storyLiveOverlayViewDidTapSUPButton:(id)supbutton action:(long long)action completion:(id /* block */)completion;
- (void)storyLiveOverlayViewDidTapSUPRequestCapture:(id)capture;
- (void)storyLiveOverlayViewDidBeginEditingTitle:(id)title;
- (void)storyLiveOverlayViewDidEndEditingTitle:(id)title;
- (void)storyLiveOverlayViewDidTapPreliveInviteButton:(id)button;
- (void)storyLiveOverlayViewDidAddSupButtonAsSubview:(id)subview;
- (void)upcomingEventServiceDidLoadUpcomingEvents:(id)events;
- (void)upcomingEventServiceDidFailLoad;
- (void)upcomingEventServiceDidLoadForProductIds:(id)ids upcomingEvent:(id)event;
- (void)upcomingEventServiceDidFailLoadForProductIds:(id)ids;
- (void)upcomingEventDetailsViewController:(id)controller didEditUpcomingEvent:(id)event;
- (void)upcomingEventDetailsViewController:(id)controller didDeleteUpcomingEvent:(id)event;
- (void)IGLiveSubscriptionDetailViewControllerDidTapTurnOnSubscriptionsButton:(id)button;
- (void)addStandaloneFundraiserToLive:(id)live;
- (void)upcomingLiveEventsViewController:(id)controller didTapShareStoryForEvent:(id)event;
- (void)upcomingLiveEventsViewController:(id)controller didTapShareAsPostForEvent:(id)event;
- (void)upcomingLiveEventsViewController:(id)controller didSelectUpcomingLiveEvent:(id)event;
- (void)storyCameraOverlayViewControllerDidTapUpcomingEventsOption:(id)option;
- (void)liveDetailsComposerViewDidTapAddTitleButton:(id)button withTitle:(id)title taggedPartners:(id)partners;
- (void)liveDetailsComposerViewDidTapAddBusinessPartner:(id)partner withTitle:(id)title taggedPartners:(id)partners;
- (void)addPartnerSearchContainerViewControllerDidUpdateBrandPartners:(id)partners;
- (void)addPartnerSearchContainerViewControllerDidTapBackButton;
- (void)partnersViewController:(id)controller didUpdatePartners:(id)partners isPaidPartnership:(BOOL)partnership isBCAdsPermissionOn:(BOOL)on;
- (void)partnersViewController:(id)controller didUpdateAudienceRestrictions:(id)restrictions;
- (void)partnersViewControllerDidTapDoneButton:(id)button;
- (void)partnersViewController:(id)controller didUpdateBrandedContentAdsBoostPostToken:(id)token;
- (void)IGLivePromptsViewDidSelectPrompt:(id)prompt withPrompt:(id)prompt promptEmoji:(id)emoji;
- (void)IGLiveAudienceControlViewDidSelectAudience:(id)audience withAudience:(unsigned long long)audience;
- (void)IGLiveAudienceControlControllerDidTapSetAudienceButton:(id)button withAudience:(unsigned long long)audience;
- (void)presentAudienceSelection:(id)selection;
- (void)IGLiveAudienceControlViewControllerDidDismiss:(id)dismiss;
- (void)audienceSelectionViewControllerDidTapCreateSharedList:(id)list;
- (void)audienceSelectionViewControllerDidSuccessfullyCreateSharedList:(id)list sharedListID:(id)id;
- (void)audienceSelectionViewControllerDidFailToCreateSharedList:(id)list;
- (void)audienceSelectionViewControllerDidTapShare:(id)share privateStoryList:(id)list;
- (void)audienceSelectionViewControllerDidTapShare:(id)share audienceSelectionType:(long long)type selectedMembers:(id)members;
- (void)audienceSelectionViewControllerWillDismissWithMembers:(id)members andExitPoint:(long long)point;
- (void)audienceSelectionViewControllerDidTapBackButton:(id)button;
- (void)audienceSelectionViewControllerDidTapDoneButton:(id)button;
- (void)audienceSelectionViewControllerDidTapDeletePrivateStoryList:(id)list privateStoryList:(id)list;
- (void)audienceSelectionViewControllerDidCreatePrivateStoryList:(id)list privateStoryList:(id)list;
- (id)cameraViewController:(id)controller viewforDevice:(id)device;
- (id)cameraViewController:(id)controller viewforPosition:(long long)position;
- (void)liveBrandedContentPartnersViewControllerDidUpdatePartners:(id)partners liveDetailsTitle:(id)title viewController:(id)controller;
- (void)addFundraiserInPreLiveWithExistingFundraiser:(id)fundraiser fundraiserTitle:(id)title;
- (void)liveUserPaySheetViewControllerDidToggleUserPay:(id)pay goalSettingMessage:(id)message;
- (void)liveUserPaySheetViewControllerDidDismiss:(id)dismiss goalSettingMessage:(id)message;
- (void)liveUserPaySheetViewControllerNeedsToBeResized:(id)resized;
- (void)_presentToastController;
- (void)liveInviteGuestControllerWillDismiss:(id)dismiss;
- (void)liveInviteGuestController:(id)controller didInviteUser:(id)user;
- (void)liveInviteGuestController:(id)controller didCancelInviteForUser:(id)user;
- (void)liveInviteGuestController:(id)controller didFinishBulkInviteWithUsers:(id)users;
- (void)liveMainViewController:(id)controller didTapSUPButton:(long long)supbutton completion:(id /* block */)completion;
- (void)liveMainViewControllerDidSwitchToActiveState:(id)state;
- (void)liveMainViewControllerDidFinishSession:(id)session afterSuccessfulBroadcasting:(BOOL)broadcasting sharedToIGTV:(BOOL)igtv sharedLiveToStory:(BOOL)story startNewLive:(BOOL)live;
- (void)liveMainViewController:(id)controller didFailWithMessage:(id)message;
- (void)liveMainViewController:(id)controller didTapWithGestureRecognizer:(id)recognizer;
- (void)_handleDoubleTap:(id)tap;
- (void)_handleSingleTap:(id)tap;
- (void)captureButtonDidReleaseBeforeExpandingFinished;
- (void)captureButtonDidReleaseAfterExpandingFinished;
- (void)captureButtonDidTouchDown;
- (void)captureButtonDidReleaseFromInterruption;
- (void)captureButtonDidBeginExpanding;
- (void)captureButtonDidEndExpanding;
- (void)captureButtonDidConfirm;
- (void)zoomController:(id)controller didChangeZoomScaleBy:(double)by;
- (void)captureButtonDidZoomScale:(double)scale;
- (void)zoomControllerDidStopZoom:(id)zoom withGestureRecognizer:(id)recognizer;
- (BOOL)storyCameraOverlayViewControllerDialShouldAllowVideoCapture:(id)capture;
- (void)storyCameraOverlayViewController:(id)controller didSwitchFromCameraMode:(id)mode toCameraMode:(id)mode;
- (void)storyCameraOverlayViewControllerDidTapSwitchCameras:(id)cameras;
- (void)storyCameraOverlayViewControllerDidTapHistoryButton:(id)button;
- (void)storyCameraOverlayViewControllerDidAbortCameraPermissions:(id)permissions;
- (void)storyCameraOverlayViewControllerDidTapCloseButton:(id)button;
- (void)storyCameraOverlayViewControllerDidTapLightingButton:(id)button;
- (void)storyCameraOverlayViewControllerDidTapGalleryButton:(id)button;
- (void)storyCameraOverlayViewControllerDidTapAudioButton:(id)button;
- (void)storyCameraOverlayViewControllerDidTapShutterButton:(id)button;
- (void)storyCameraOverlayViewController:(id)controller didEndScrollOnCameraMode:(id)mode;
- (void)storyCameraOverlayViewControllerDidTapSettingsButton:(id)button;
- (void)storyCameraOverlayViewMoreInfoSheetDidEnterFullscreenMode:(id)mode;
- (void)storyCameraOverlayViewMoreInfoSheetDidLeaveFullscreenMode:(id)mode;
- (void)storyCameraOverlayViewController:(id)controller didToggleNetworkAccess:(BOOL)access;
- (void)storyCameraOverlayViewControllerDialDidFailVideoCapture:(id)capture;
- (void)storyCameraOverlayViewControllerDialDidStartVideoCapture:(id)capture;
- (void)storyCameraOverlayViewControllerDialDidStopVideoCapture:(id)capture;
- (void)storyCameraOverlayViewController:(id)controller didSelectAREffectScrollingSelectorItemAtIndex:(long long)index;
- (void)storyCameraOverlayViewController:(id)controller didEndScrollingOnAREffectScrollingSelectorItemIndex:(long long)index;
- (void)storyCameraOverlayViewController:(id)controller canvasModeViewControllerDidShareToStory:(long long)story andDirectRecipients:(id)recipients;
- (BOOL)storyCameraOverlayViewController:(id)controller shouldTapSticker:(id)sticker;
- (void)storyCameraOverlayViewController:(id)controller didTapSticker:(id)sticker;
- (void)storyCameraOverlayViewController:(id)controller didToggleMuteButton:(BOOL)button;
- (void)storyCameraOverlayViewDidUpdatePermissions:(id)permissions;
- (void)storyCameraOverlayView:(id)view didScaleZoom:(double)zoom;
- (void)storyCameraOverlayView:(id)view didZoomByPercent:(double)percent;
- (void)storyCameraOverlayViewControllerDidBeginHandsFreeCountdown:(id)countdown;
- (void)storyCameraOverlayViewController:(id)controller didFinishHandsFreeCountdown:(BOOL)countdown;
- (void)storyCameraOverlayView:(id)view didChangePickerValueWithIndex:(long long)index;
- (void)storyCameraOverlayView:(id)view didChangeSliderWithValue:(double)value;
- (void)storyCameraOverlayView:(id)view didChangeText:(id)text;
- (void)storyCameraOverlayViewDidExitTextInput:(id)input;
- (void)storyCameraOverlayViewDidExitEditableTextInput:(id)input text:(id)text;
- (void)storyCameraOverlayViewControllerTrayDidAppear:(id)appear;
- (void)storyCameraOverlayViewControllerTrayDidDisappear:(id)disappear;
- (void)storyCameraOverlayViewControllerDidTapTryIt:(id)it onEffectWithID:(id)id effectName:(id)name effectIconURL:(id)url;
- (void)storyCameraOverlayViewController:(id)controller didSelectShareUpcomingEvent:(id)event;
- (void)storyCameraOverlayViewController:(id)controller didTapShareStoryForEvent:(id)event;
- (void)storyCameraOverlayViewControllerDidExitAddYoursBrowsing:(id)browsing withPromptStickerView:(id)view;
- (void)storyCameraOverlayViewController:(id)controller didTapSUPButton:(long long)supbutton completion:(id /* block */)completion;
- (void)storyCameraOverlayViewControllerDidTapSUPRequestCapture:(id)capture;
- (void)storyCameraOverlayViewControllerDidTapAnonymityButton:(id)button;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cameraViewControllerSafeAreaInsets:(id)insets;
- (void)cameraViewController:(id)controller didChangeLightingMode:(long long)mode;
- (void)cameraViewControllerWillStopRecording:(id)recording;
- (void)cameraViewControllerDidStopRecording:(id)recording timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration error:(id)error;
- (void)cameraViewController:(id)controller didUpdateRecordProgress:(double)progress;
- (void)cameraViewController:(id)controller didFinishWithDevicePosition:(long long)position videoInfos:(id)infos images:(id)images;
- (void)cameraViewController:(id)controller failedToCapturePhotoWithError:(id)error;
- (void)cameraViewController:(id)controller didFinishWithBoomerangManager:(id)manager;
- (void)cameraViewController:(id)controller didChangeCameraState:(long long)state;
- (void)cameraViewController:(id)controller willSwitchFromCameraPosition:(long long)position;
- (void)cameraViewController:(id)controller didSwitchToCameraPosition:(long long)position withUserInput:(unsigned long long)input;
- (void)cameraViewController:(id)controller captureDidBecomeAvailable:(BOOL)available;
- (void)cameraViewController:(id)controller didStartCaptureSessionWithCameraPosition:(long long)position cameraOrientation:(long long)orientation;
- (void)cameraViewControllerDidReceiveFirstFrame:(id)frame;
- (void)cameraViewControllerDidStartCameraSwitch:(id)switch;
- (void)cameraViewController:(id)controller didReceiveFirstFrameAfterSwitchingCamerasWithCameraPosition:(long long)position cameraOrientation:(long long)orientation;
- (void)cameraViewControllerDidStopCapture:(id)capture;
- (void)cameraViewControllerWillRequestStartRecording:(id)recording;
- (void)cameraViewControllerDidRequestStartRecording:(id)recording;
- (void)cameraViewControllerDidStartRecording:(id)recording timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp;
- (void)cameraViewController:(id)controller startAudioSessionDidError:(id)error;
- (void)cameraViewControllerDidUpdateLightingCapability:(id)capability;
- (void)cameraViewController:(id)controller didToggleHDR:(BOOL)hdr;
- (void)cameraViewControllerDidPauseRecording:(id)recording timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp;
- (void)cameraViewControllerDidResumeRecording:(id)recording timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp;
- (void)cameraViewControllerWantsDisableOfMultiCam:(id)cam;
- (void)cameraToolsMenuHandednessController:(id)controller didUpdateHandedness:(unsigned long long)handedness;
- (void)showAREffectTextInstructions:(id)instructions;
- (void)showAREffectTextInstructions:(id)instructions forDuration:(double)duration;
- (void)hideAREffectInstructions;
- (id)analyticsModule;
- (void)_updateDualForSUPAction:(long long)supaction;
@end

#endif /* IGStoryLiveFormatViewController_h */
