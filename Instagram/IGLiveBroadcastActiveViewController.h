//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveBroadcastActiveViewController_h
#define IGLiveBroadcastActiveViewController_h
@import Foundation;

#include "UIViewController.h"
#include "FBCancelable-Protocol.h"
#include "IGAlertHUDHandling-Protocol.h"
#include "IGCameraViewController.h"
#include "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#include "IGLiveAddonCoordinator.h"
#include "IGLiveBroadcastActionSheetController.h"
#include "IGLiveBroadcastCaptureManager.h"
#include "IGLiveBroadcastController.h"
#include "IGLiveBroadcastEventController.h"
#include "IGLiveBroadcastLiveRoomManager.h"
#include "IGLiveBroadcastLogger.h"
#include "IGLiveBroadcastModeratorManager.h"
#include "IGLiveBroadcastResourceViewController.h"
#include "IGLiveBroadcastSUPController.h"
#include "IGLiveBroadcastTutorialViewController.h"
#include "IGLiveBroadcastView.h"
#include "IGLiveBroadcastViewerInviteManager.h"
#include "IGLiveCommentViewUpdater.h"
#include "IGLiveDarkOverlayView.h"
#include "IGLiveDebugInfoVideoProcessor.h"
#include "IGLiveDonationWaveManager.h"
#include "IGLiveDonationsDataSource.h"
#include "IGLiveFeedbackController.h"
#include "IGLiveHostQuestionAnswerManager.h"
#include "IGLiveHostWidgetManager.h"
#include "IGLiveInstantDemonetizationWarningViewController.h"
#include "IGLiveInteractivityService.h"
#include "IGLiveInviteModeratorViewController.h"
#include "IGLiveMediaShareManager.h"
#include "IGLiveModeratorRTService.h"
#include "IGLiveRightsManagerService.h"
#include "IGLiveRoomHostBroadcastViewController.h"
#include "IGLiveRoomInviteSheetController.h"
#include "IGLiveVideoStateManager.h"
#include "IGLiveViewStatusTracker.h"
#include "IGLiveViewerListViewController.h"
#include "IGLiveWaveService.h"
#include "IGStoryViewerSectionControllerViewerDelegate-Protocol.h"
#include "_TtP13SUPConnecting13SUPConnecting_-Protocol.h"
#include "_TtP22SUPEngagementProducing22SUPEngagementProducing_-Protocol.h"

@class IGDiskRecordingResults, IGFundraiserLiveSharingModel, IGKeyboardObserver, IGLiveCommentModel, IGLiveUserPaySupporterDataSource, IGLiveUserPaySupporterListViewController, IGStoryConfettiAnimationController, IGUserSession, IGViewController, NSArray, NSString, UIView;
@protocol IGLiveAddonCoordinating, IGLiveBroadcastActiveViewControllerDelegate;

@interface IGLiveBroadcastActiveViewController : UIViewController<IGKeyboardObserverFrameChangeDelegate, IGStoryViewerSectionControllerViewerDelegate> {
  /* instance variables */
  NSString *_broadcastId;
  IGLiveDarkOverlayView *_darkOverlayView;
  BOOL _isPolicyViolatingStream;
  BOOL _isCheckpointedForPolicyViolation;
  IGLiveRightsManagerService *_rightsManagerService;
  BOOL _isFirstLayoutPass;
  BOOL _hasShownInitialWarningForCopyrightedMusic;
  IGViewController *_sourceViewController;
  NSString *_module;
  IGLiveAddonCoordinator *_addonCoordinator;
  IGLiveViewStatusTracker *_viewStatusTracker;
  NSObject<IGAlertHUDHandling> *_alertHandler;
  IGLiveDebugInfoVideoProcessor *_debugVideoProcessor;
  IGLiveFeedbackController *_feedbackController;
  IGKeyboardObserver *_keyboardObserver;
  IGLiveBroadcastActionSheetController *_actionSheetController;
  IGLiveCommentViewUpdater *_commentViewUpdater;
  IGLiveViewerListViewController *_viewerListViewController;
  IGLiveBroadcastViewerInviteManager *_viewerInviteManager;
  IGLiveBroadcastLiveRoomManager *_liveRoomManager;
  IGLiveRoomHostBroadcastViewController *_liveRoomHostViewController;
  IGLiveBroadcastEventController *_liveRoomEventController;
  IGLiveRoomInviteSheetController *_liveRoomInviteSheetController;
  IGCameraViewController *_cameraViewController;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cameraWindowFrameReference;
  IGUserSession *_userSession;
  IGLiveBroadcastLogger *_logger;
  BOOL _isVisible;
  IGLiveBroadcastResourceViewController *_liveResourceViewController;
  struct { BOOL isInitialized; BOOL isUserPayActivated; unsigned long long audienceType; BOOL shareButtonEnabled; BOOL realtimeQAEnabledForViewer; BOOL requestToJoinEnabled; BOOL isLiveSubscriptionEnabled; BOOL dualCameraEnabled; } _liveBroadcastConfig;
  NSString *_broadcastTitle;
  NSString *_broadcastPrompt;
  NSArray *_taggedPartners;
  IGLiveWaveService *_waveService;
  IGLiveMediaShareManager *_liveMediaShareManager;
  IGStoryConfettiAnimationController *_confettiAnimationController;
  IGFundraiserLiveSharingModel *_fundraiser;
  IGLiveDonationWaveManager *_donationWaveManager;
  IGLiveUserPaySupporterListViewController *_userPaySupportersViewController;
  IGLiveUserPaySupporterDataSource *_supportersDataSource;
  BOOL _badgesEligible;
  BOOL _badgesEnabled;
  IGLiveInstantDemonetizationWarningViewController *_liveInstantDemonetizationWarningViewController;
  BOOL _hasShownInstantDemonetizationWarningSheet;
  IGLiveHostQuestionAnswerManager *_liveHostQuestionAnswerManager;
  IGLiveBroadcastController *_broadcastController;
  IGLiveBroadcastCaptureManager *_broadcastCaptureManager;
  IGLiveBroadcastTutorialViewController *_broadcastTutorialViewController;
  IGLiveCommentModel *_startedLiveSystemComment;
  NSObject<FBCancelable> *_startBroadcastToken;
  IGLiveCommentModel *_pinnedComment;
  IGLiveBroadcastModeratorManager *_broadcastModeratorManager;
  IGLiveInviteModeratorViewController *_inviteModeratorViewController;
  IGLiveModeratorRTService *_moderatorService;
  BOOL _backgroundBroadcastingEnabled;
  IGLiveBroadcastSUPController *_liveSUPController;
  BOOL _isSUPEngagementEnabled;
  NSObject<_TtP22SUPEngagementProducing22SUPEngagementProducing_> *_engagementProducer;
  NSObject<_TtP13SUPConnecting13SUPConnecting_> *_supConnector;
  BOOL _supPausedLive;
  IGLiveInteractivityService *_quickReactionsInteractivityService;
  BOOL _didStopDVR;
  BOOL _didEndBroadcast;
  IGLiveHostWidgetManager *_widgetManager;
  IGLiveVideoStateManager *_videoStateManager;
  IGDiskRecordingResults *_recordingResults;
  IGLiveDonationsDataSource *_donationsDataSource;
  NSString *_currentLiveMediaId;
}

@property (weak, nonatomic) NSObject<IGLiveBroadcastActiveViewControllerDelegate> *delegate;
@property (readonly, nonatomic) UIView *cameraGesturesContainerView;
@property (readonly, nonatomic) IGLiveBroadcastView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGLiveAddonCoordinating> *coordinator;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL addonLifeCycleEventEnabled;

/* instance methods */
- (id)initWithUserSession:(id)session logger:(id)logger broadcastToolbox:(id)toolbox liveBroadcastConfig:(struct { BOOL x0; BOOL x1; unsigned long long x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })config fundraiser:(id)fundraiser broadcastTitle:(id)title broadcastPrompt:(id)prompt taggedPartners:(id)partners sourceViewController:(id)controller broadcastModeratorManager:(id)manager invitedGuests:(id)guests;
- (void)dealloc;
- (void)setCameraViewController:(id)controller;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (void)_onAppWillResignActive:(id)active;
- (void)_onAppDidBecomeActive:(id)active;
- (void)_onAppDidEnterBackground:(id)background;
- (void)_onAppWillTerminate:(id)terminate;
- (void)_onAppLaunchedViaURL:(id)url;
- (void)receiveEvent:(unsigned long long)event from:(id)from payload:(id)payload;
- (BOOL)canHandleRequest:(id)request;
- (id)handleRequest:(id)request;
- (void)showAREffectTextInstructions:(id)instructions;
- (void)showAREffectTextInstructions:(id)instructions forDuration:(double)duration;
- (void)hideAREffectInstructions;
- (void)reloadCameraEffectTrayData;
- (void)liveModeratorRTService:(id)rtservice didReceiveModeratorUpdate:(id)update;
- (void)interactivityService:(id)service didReceiveQuestionEvent:(id)event;
- (void)interactivityServiceQuestionSubmissionStatusDidChange:(BOOL)change submittedQuestionCount:(long long)count;
- (void)interactivityService:(id)service didReceiveBadgesStatusChange:(BOOL)change;
- (void)interactivityService:(id)service didReceiveCommentMutedStatus:(BOOL)status;
- (void)interactivityService:(id)service didReceiveReaction:(id)reaction fromUserId:(id)id;
- (void)interactivityService:(id)service didReceiveAvatarReaction:(id)reaction fromUserId:(id)id;
- (void)interactivityService:(id)service isPlayingGame:(id)game withStatus:(id)status;
- (void)interactivityService:(id)service didUpdateJoinRequestForUser:(id)user withStatus:(unsigned long long)status;
- (void)liveBroadcastController:(id)controller didConnectToServerForSession:(id)session withSpeedTestSuccess:(BOOL)success badgesEnabled:(BOOL)enabled;
- (void)liveBroadcastController:(id)controller didUpdateBroadcastWithStats:(id)stats;
- (void)liveBroadcastControllerDidSwapBackToRtmp:(id)rtmp;
- (void)liveBroadcastController:(id)controller didStallVideoWithGuestIdentifier:(id)identifier;
- (void)liveBroadcastController:(id)controller didResumeVideoWithGuestIdentifier:(id)identifier;
- (void)liveBroadcastControllerDidLoseConnection:(id)connection;
- (void)liveBroadcastControllerDidReconnect:(id)reconnect;
- (void)liveBroadcastController:(id)controller broadcastForSession:(id)session didFailWithError:(id)error;
- (void)liveBroadcastController:(id)controller didAddVideoInView:(id)view withGuestIdentifier:(id)identifier;
- (void)liveBroadcastController:(id)controller didRemoveVideoWithGuestIdentifier:(id)identifier;
- (void)liveBroadcastLiveRoomManagerNeedsToMarkRequestsAsSeen:(id)seen;
- (void)liveBroadcastController:(id)controller didUpdateStatusToConnectingWithUserId:(id)id;
- (void)liveBroadcastControllerDidReceiveInvitation:(id)invitation;
- (void)liveBroadcastController:(id)controller guestDidDeclineInvitation:(id)invitation;
- (void)liveBroadcastController:(id)controller didFailInvitationWithUserIds:(id)ids;
- (void)liveBroadcastControllerDidDismissFromCall:(id)call reason:(long long)reason;
- (void)liveBroadcastControllerAudioCaptureStalled:(id)stalled;
- (void)liveBroadcastControllerVideoCaptureStalled:(id)stalled;
- (void)liveBroadcastControllerDidReceiveEventMessageAck:(id)ack;
- (void)liveBroadcastController:(id)controller didEndSession:(id)session diskRecordingResults:(id)results;
- (void)liveInviteModeratorViewController:(id)controller didAddModerator:(id)moderator;
- (void)keyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)broadcastTutorialViewControllerDismiss:(id)dismiss;
- (void)broadcastView:(id)view didTapWithGestureRecognizer:(id)recognizer;
- (BOOL)broadcastViewCanToggleCommentsHeight:(id)height;
- (void)broadcastViewDidUnpinCurrentComment:(id)comment;
- (void)broadcastView:(id)view didEnterCommentText:(id)text repliedToCommentPk:(id)pk;
- (void)broadcastView:(id)view didReceiveUnpinTapOnComment:(id)comment;
- (void)broadcastView:(id)view didReceiveTapOnComment:(id)comment isPinned:(BOOL)pinned tappedWaveButton:(BOOL)button shouldExpandViewerList:(BOOL)list cell:(id)cell;
- (void)broadcastView:(id)view didChangeZoomScaleWithDelta:(double)delta;
- (void)broadcastView:(id)view didTapPinnedButtonWithViewModel:(id)model;
- (void)broadcastView:(id)view didTapPinnedViewWithViewModel:(id)model;
- (void)broadcastView:(id)view didTapPinnedViewTextWithViewModel:(id)model text:(id)text URL:(id)url;
- (void)broadcastViewDidChangeTopBannerVisibility:(id)visibility;
- (void)userListButtonTappedInBroadcastView:(id)view;
- (void)headerTappedInBroadcastView:(id)view;
- (void)closeButtonTappedInBroadcastView:(id)view;
- (void)broadcastViewDidExpandViewerList:(id)list;
- (void)broadcastViewDidTapCancelCallButton:(id)button;
- (void)broadcastView:(id)view didPan:(id)pan;
- (void)broadcastViewDidTapDismissGuestButton:(id)button;
- (void)broadcastViewDidTapLiveResourceTooltip:(id)tooltip;
- (void)broadcastViewDidRequestToHideTrays:(id)trays;
- (void)optionButtonTappedInBroadcastView:(id)view;
- (void)broadcastViewDidTapSUPButton:(id)supbutton action:(long long)action completion:(id /* block */)completion;
- (void)broadcastViewDidSUPMute:(id)supmute shouldMute:(BOOL)mute;
- (void)broadcastViewDidSUPPauseBroadcast:(id)broadcast shouldPause:(BOOL)pause;
- (void)broadcastViewDidTapSUPRequestCapture:(id)capture;
- (void)feedbackController:(id)controller hasCommentsReadyToDisplay:(id)display shouldLogImpression:(BOOL)impression;
- (void)feedbackController:(id)controller didRemoveComment:(id)comment;
- (void)feedbackController:(id)controller didReplaceCommentWithPk:(id)pk withComment:(id)comment;
- (void)feedbackController:(id)controller didHaveBroadcastUpdate:(id)update requestTimestamp:(id)timestamp;
- (void)feedbackController:(id)controller didFailToPinComment:(id)comment;
- (void)feedbackController:(id)controller didFailToUnpinComment:(id)comment;
- (void)feedbackControllerDidFailToMuteComments:(id)comments;
- (void)feedbackControllerDidFailToUnmuteComments:(id)comments;
- (void)feedbackController:(id)controller didFetchPinnedComment:(id)comment unpinnedComment:(id)comment;
- (void)feedbackControllerDidFetchCommentMuteStatus:(BOOL)status;
- (BOOL)feedbackController:(id)controller updateRequestPromptIfNeeded:(id)needed withIncomingRequestPrompt:(id)prompt;
- (void)feedbackController:(id)controller didReceiveVisibleComments:(id)comments;
- (void)feedbackController:(id)controller updateWithReactionAnimationModel:(id)model reaction:(id)reaction;
- (void)feedbackController:(id)controller updateWithFloatingReactionAnimationModel:(id)model reaction:(id)reaction;
- (void)feedbackController:(id)controller updateWithAvatarReactionModel:(id)model isFromSelf:(BOOL)self;
- (void)actionSheetControllerDidTapMuteComment:(id)comment;
- (void)actionSheetControllerDidTapUnmuteComment:(id)comment;
- (void)actionSheetControllerDidTapEnableRequestToJoin:(id)join;
- (void)actionSheetControllerDidTapDisableRequestToJoin:(id)join;
- (void)actionSheetControllerDidTapDisableBadges:(id)badges;
- (void)actionSheetControllerDidTapEnableBadges:(id)badges;
- (void)actionSheetControllerDidTapEnableQuestions:(id)questions;
- (void)actionSheetControllerDidTapAddModerator:(id)moderator;
- (void)actionSheetControllerDidTapDisableQuestions:(id)questions;
- (void)actionSheetControllerDidTapShowPracticeTutorial:(id)tutorial;
- (void)actionSheetController:(id)controller didTapPinComment:(id)comment;
- (void)actionSheetController:(id)controller didTapUnpinComment:(id)comment;
- (void)actionSheetController:(id)controller didHideFromUser:(id)user;
- (void)actionSheetController:(id)controller didRemoveUserFromComment:(id)comment;
- (void)actionSheetController:(id)controller didBlockUser:(id)user;
- (void)actionSheetController:(id)controller didReportComment:(id)comment;
- (void)actionSheetController:(id)controller didTapDeleteComment:(id)comment;
- (void)actionSheetController:(id)controller didDisplayActionSheetForComment:(id)comment actionIdentifiers:(id)identifiers;
- (void)actionSheetController:(id)controller didTapInviteLiveWithUser:(id)user;
- (void)actionSheetController:(id)controller didAddModerator:(id)moderator;
- (void)actionSheetController:(id)controller didRemoveModerator:(id)moderator;
- (void)liveBroadcastViewerInviteManagerWillBeginInvitingViewer:(id)viewer;
- (void)liveBroadcastViewerInviteManagerDidFinishInvitingViewer:(id)viewer;
- (void)liveBroadcastLiveRoomManager:(id)manager willPresentHostSheetWithGuests:(id)guests;
- (void)liveBroadcastLiveRoomManager:(id)manager willPresentInviteSheetWithContext:(unsigned long long)context;
- (void)liveBroadcastLiveRoomManager:(id)manager willPresentInviteSheetForUser:(id)user;
- (void)liveBroadcastLiveRoomManager:(id)manager willBeginInvitingUsers:(id)users;
- (void)liveBroadcastLiveRoomManager:(id)manager didFinishInvitingUser:(id)user cancelled:(BOOL)cancelled;
- (void)liveBroadcastLiveRoomManager:(id)manager didAttachInvitedUser:(id)user firstUser:(BOOL)user;
- (void)liveBroadcastLiveRoomManager:(id)manager didDetachInvitedUser:(id)user lastUser:(BOOL)user;
- (void)liveBroadcastLiveRoomManager:(id)manager didAddModerator:(id)moderator;
- (void)liveBroadcastLiveRoomManager:(id)manager didRemoveModerator:(id)moderator;
- (void)liveBroadcastLiveRoomManager:(id)manager didReceiveDeclineForInvitedUser:(id)user;
- (void)liveBroadcastLiveRoomManager:(id)manager didReceiveFailureForInvitedUser:(id)user;
- (void)liveBroadcastLiveRoomManager:(id)manager didUpdateInviteBadgeCount:(long long)count;
- (id)liveBroadcastLiveRoomManagerNeedShowProgressAlert:(id)alert;
- (void)liveBroadcastLiveRoomManager:(id)manager willShowPrivacyConfirmationForRequestedUser:(id)user;
- (void)liveRoomInviteSheetController:(id)controller didTapInviteUser:(id)user;
- (void)acceptButtonTappedInPrivacyConfirmationViewController:(id)controller;
- (void)rejectButtonTappedInPrivacyConfirmationViewController:(id)controller;
- (void)dismissResourceViewController;
- (void)storyViewerSectionController:(id)controller didTapViewerSource:(id)source;
- (void)storyViewerSectionController:(id)controller didTapMoreButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapAddButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapCheckmarkButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapProductThumbnailInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didHideViewerSource:(id)source;
- (void)storyViewerSectionController:(id)controller presentStoryForReel:(id)reel media:(id)media fromView:(id)view profilePictureView:(id)view;
- (void)storyViewerSectionController:(id)controller willDisplayViewerSource:(id)source position:(long long)position;
- (void)storyViewerSectionController:(id)controller didMarkAsNotSpamViewerSource:(id)source;
- (void)storyViewerSectionController:(id)controller didTapHeartButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapViewCommentLikes:(id)likes;
- (void)storyViewerSectionController:(id)controller didTapStoryComment:(id)comment;
- (void)storyViewerSectionController:(id)controller didDeleteStoryComment:(id)comment;
- (void)liveRightsManagementWarningViewControllerDidTapFinishButton:(id)button;
- (void)liveInstantDemonetizationWarningViewControllerDidTapEndButton:(id)button;
- (BOOL)accessibilityPerformEscape;
@end

#endif /* IGLiveBroadcastActiveViewController_h */
