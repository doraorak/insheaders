//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFullscreenOverlayView_h
#define IGStoryFullscreenOverlayView_h
@import Foundation;

#include "UIView.h"
#include "AdsTextRendererOverlay.h"
#include "IGAXStoryAATView.h"
#include "IGAXStorySummaryView.h"
#include "IGActionableInsightsTipLogger.h"
#include "IGCTMessagingAdsStoryReplyViewModel.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGEmptyStoryView.h"
#include "IGFullScreenContentGatingView.h"
#include "IGHeartAnimatable-Protocol.h"
#include "IGMediaOverlayDelegate-Protocol.h"
#include "IGStoryAdEndSceneView.h"
#include "IGStoryCommentComposerView.h"
#include "IGStoryComposerBackgroundView.h"
#include "IGStoryFullscreenCarouselScrubberView.h"
#include "IGStoryFullscreenFooterContainerView.h"
#include "IGStoryFullscreenHeaderView.h"
#include "IGStoryFullscreenOverlayViewProtocol-Protocol.h"
#include "IGStoryFullscreenProgressView.h"
#include "IGStoryFullscreenTappableOverlayDelegate-Protocol.h"
#include "IGStoryHeaderAttributionTooltipContentView.h"
#include "IGStoryHorizonWorldContainerView.h"
#include "IGStoryHypePreviewView.h"
#include "IGStoryItemType-Protocol.h"
#include "IGStoryMediaControlling-Protocol.h"
#include "IGStoryMentionReplyAndReshareView.h"
#include "IGStoryRollCallAddToRollCallView.h"
#include "IGStoryShoppingIncentiveInfoView.h"
#include "IGStoryStickerAdsMediaDelayManager.h"
#include "IGStoryStickerManager.h"
#include "IGStoryStickerOrganicMediaDelayManager.h"
#include "IGStoryTappableOverlayTooltipContentView.h"
#include "IGStoryViewerTapTargetDelegate-Protocol.h"
#include "IGSuggestedHighlightEndCardOverlayView.h"
#include "IGTokenFieldDelegate-Protocol.h"
#include "IGTooltipViewDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtC20IGStoryCommentsSwift26IGStoryCommentsPreviewView.h"
#include "_TtC20IGStoryCommentsSwift28IGStoryCommentsFaceswarmView.h"
#include "_TtC26IGStoryViewerQuickCaptions30IGStoryViewerQuickCaptionsView.h"
#include "_TtP20IGStoryCommentsSwift34IGStoryCommentsPreviewViewDelegate_-Protocol.h"
#include "_TtP20IGStoryCommentsSwift36IGStoryCommentsFaceswarmViewDelegate_-Protocol.h"

@class BKContext, FBTimer, IGAdsLinkStickerLayoutSpec, IGGradientView, IGInstaPalMotionManager, IGInstaPalStickerView, IGLinkStickerView, IGMedia, IGMediaIconButton, IGMediaOverlayView, IGMediaTextButton, IGPanGestureRecognizer, IGSecretStickerOverlayView, IGStoryGradientRingView, IGStoryQuickCaptionsModel, IGStoryQuickReactionsEmojiViewModel, IGStorySharingInterstitialView, IGStoryViewerFullScreenLatelyNuxView, IGStoryWaveAnimationView, IGTapButton, IGTooltipView, IGUserSession, NSArray, NSDate, NSMutableArray, NSString, NSValue, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, UIVisualEffectView, _TtC17IGPolaroidSticker26IGPolaroidStickerBottomNUX;
@protocol IGStoryFullscreenAdEndSceneDelegate, IGStoryFullscreenCommentsDelegate, IGStoryFullscreenGestureDelegate, IGStoryFullscreenMentionStoryShareDelegate, IGStoryFullscreenOverlayAccessibilityDelegate, IGStoryFullscreenOverlayButtonDelegate, IGStoryFullscreenRetryDelegate, IGStoryFullscreenSensitivityScreenDelegate, IGStoryFullscreenVideoPlayDelegate, IGStorySharingInterstitialViewDelegate, IGStoryViewerFullScreenLatelyNuxViewDelegate, UIView<IGDirectComposerProtocol;

@interface IGStoryFullscreenOverlayView : UIView<IGCoreTextLinkHandler, _TtP20IGStoryCommentsSwift36IGStoryCommentsFaceswarmViewDelegate_, _TtP20IGStoryCommentsSwift34IGStoryCommentsPreviewViewDelegate_, IGTokenFieldDelegate, IGTooltipViewDelegate, UIGestureRecognizerDelegate, IGStoryViewerTapTargetDelegate, IGHeartAnimatable, IGStoryFullscreenOverlayViewProtocol> {
  /* instance variables */
  IGGradientView *_leftTapGradientView;
  IGGradientView *_bottomGradientView;
  IGGradientView *_rightGradientView;
  IGGradientView *_commentsGradientView;
  BOOL _showBottomGradient;
  UILongPressGestureRecognizer *_pressGesture;
  struct CGPoint { double x; double y; } _pressStartLocationInWindow;
  BOOL _tapPending;
  FBTimer *_tapTimeout;
  UISwipeGestureRecognizer *_swipeDownGesture;
  IGPanGestureRecognizer *_tappableOverlayTooltipTouchGesture;
  UITapGestureRecognizer *_showAllButtonGestureRecognizer;
  BOOL _didLongPress;
  struct CGPoint { double x; double y; } _panUpGestureStartPoint;
  NSMutableArray *_panGestureDirectionSequence;
  BOOL _isFirstPanUpOnCurrentStory;
  BOOL _isTappingAndHold;
  NSDate *_panUpGestureStartTime;
  double _cumulativeVerticalPanDisplacement;
  IGStoryTappableOverlayTooltipContentView *_tappableOverlayTooltipContentView;
  struct CGSize { double width; double height; } _mediaSize;
  struct CGSize { double width; double height; } _mediaViewSize;
  BOOL _usesIGDSBottomGradientView;
  IGTooltipView *_nuxTooltip;
  UIVisualEffectView *_blurredMaskView;
  UIView *_emptyStoryLabelView;
  IGEmptyStoryView *_emptyStorySubscribeView;
  IGStoryHeaderAttributionTooltipContentView *_headerAttributionTooltipContentView;
  BOOL _panGestureDestinationPresented;
  IGActionableInsightsTipLogger *_actionableInsightsTipLogger;
  FBTimer *_tapGutterTimer;
  UIView *_leftTapGutterDebugView;
  UIView *_rightTapGutterDebugView;
  BOOL _hasTapGutterDelayPassed;
  IGUserSession *_userSession;
  BOOL _isLazyInitBackgroundEnabled;
  IGStoryQuickReactionsEmojiViewModel *_storyQuickReactionsEmojiViewModel;
  BOOL _isCurrentUser;
  BKContext *_bloksContext;
  IGCTMessagingAdsStoryReplyViewModel *_clickToMessageAdReplyViewModel;
  IGStoryRollCallAddToRollCallView *_rollCallBlurView;
  IGStoryRollCallAddToRollCallView *_rollCallInterstitialView;
  UIView *_blackView;
  UIView *_timeboxTimerBackground;
  UILabel *_timeboxTimer;
  IGStoryWaveAnimationView *_waveAnimationView;
  BOOL _hasOwner;
  FBTimer *_showAllButtonHighlightTimer;
  FBTimer *_dynamicTooltipTimer;
  BOOL _shouldShowDynamicTooltip;
  _TtC26IGStoryViewerQuickCaptions30IGStoryViewerQuickCaptionsView *_quickCaptionsView;
  UIView *_extendedQuickCaptionsGradientView;
  IGStoryQuickCaptionsModel *_storyQuickCaption;
  IGStoryCommentComposerView *_commentComposerView;
  IGTapButton *_selfStoryAddCommentButton;
  NSArray *_comments;
  IGMedia *_media;
  IGStoryHypePreviewView *_hypeOverlayView;
  double _commentDetailSheetHeight;
  UIView *_dimmerView;
  BOOL _isSensitiveVerticalAd;
  BOOL _tooltipClosedFromTooltipTap;
  IGSecretStickerOverlayView *_secretStoryOverlayView;
  BOOL _shouldScrollVertically;
  BOOL _verticalScrollReducePanDimissHitTarget;
  IGTooltipView *_storyManageMentionsTooltipView;
  IGTooltipView *_resharedMediaTooltipView;
  _TtC17IGPolaroidSticker26IGPolaroidStickerBottomNUX *_polaroidBottomNUX;
  id /* block */ _groupMentionParticipationBlock;
  id /* block */ _mentionReshareBlock;
  id /* block */ _addDonorDuplicateStickerBlock;
  id /* block */ _messageReshareBlock;
  id /* block */ _mentionReplyWithStoryBlock;
  IGMediaIconButton *_muteUnmuteIndicator;
  long long _muteUnmuteHideToken;
  BOOL _useLocationInViewInstead;
  UIView *_ctaExpandView;
  BOOL _shouldHighlightExpandArea;
  UIView *_TAAView;
  UIView *_interactiveMediaTappableView;
  BOOL _shouldHighlightTAA;
  IGStoryHorizonWorldContainerView *_horizonWorldContainerView;
  long long _carouselType;
  IGInstaPalStickerView *_instaPalView;
  IGInstaPalMotionManager *_instaPalMotionManager;
  IGStoryMentionReplyAndReshareView *_mentionReplyAndReshareView;
  BOOL _isLongPressing;
  BOOL _storyHighlight;
  BOOL _nullStateVisible;
  BOOL _hypeCyclingViewWasDismissed;
  BOOL _skipResizingMediaView;
  BOOL _isShowingEndScene;
  BOOL _showsTapAndHoldIndicator;
  BOOL _shouldCreateComposerBackgroundView;
  BOOL _isColorHighlighted;
  BOOL _shouldShowLinkStickerTooltip;
  BOOL _isTooltipShown;
  AdsTextRendererOverlay *_textOverlay;
  IGStoryFullscreenFooterContainerView *_footerContainerView;
  IGSuggestedHighlightEndCardOverlayView *_suggestedHighlightEndCardView;
  IGStoryComposerBackgroundView *_composerBackgroundView;
  IGFullScreenContentGatingView *_sensitivityView;
  IGMediaOverlayView *_mediaOverlayView;
  IGMediaOverlayView *_mediaOverlayActionableInsightsTipBanner;
  IGStoryAdEndSceneView *_endSceneView;
  UIView *_profileStoryExpansionView;
  _TtC20IGStoryCommentsSwift26IGStoryCommentsPreviewView *_hypeCyclingView;
  _TtC20IGStoryCommentsSwift28IGStoryCommentsFaceswarmView *_hypeFacepileCyclingView;
  IGAXStorySummaryView *_voiceOverSummaryView;
  IGAXStoryAATView *_aatView;
  IGMediaIconButton *_nextStoryButton;
  IGMediaIconButton *_previousStoryButton;
  NSObject<IGStoryFullscreenVideoPlayDelegate> *_videoPlayDelegate;
  NSObject<IGStoryFullscreenMentionStoryShareDelegate> *_mentionShareDelegate;
  NSObject<IGStoryFullscreenSensitivityScreenDelegate> *_sensitivityScreenDelegate;
  NSObject<IGStorySharingInterstitialViewDelegate> *_sharingInterstitialViewControllerDelegate;
  NSObject<IGStoryViewerFullScreenLatelyNuxViewDelegate> *_latelyNuxDelegate;
  NSObject<IGStoryFullscreenAdEndSceneDelegate> *_endSceneDelegate;
  NSObject<IGStoryFullscreenOverlayAccessibilityDelegate> *_accessibilityDelegate;
  NSObject<IGStoryFullscreenCommentsDelegate> *_storyCommentsDelegate;
  NSObject<IGStoryMediaControlling> *_storyMediaController;
  IGStoryStickerManager *_stickerManager;
  UILabel *_tapAndHoldLabel;
  IGStoryShoppingIncentiveInfoView *_incentiveInfoView;
  double _headerScaleRatio;
  long long _storyEntrypoint;
  double _tapAndHoldSwipeSpeedThreshold;
  IGTapButton *_skipButton;
  IGTapButton *_groupMentionParticipationButton;
  IGGradientView *_topGradientView;
  IGStorySharingInterstitialView *_sharingInterstitialView;
  IGStoryViewerFullScreenLatelyNuxView *_latelyNuxView;
  IGMediaTextButton *_showAllButton;
  IGLinkStickerView *_adsLinkStickerView;
  IGStoryFullscreenCarouselScrubberView *_carouselScrubberView;
  IGStoryStickerOrganicMediaDelayManager *_organicMediaTooltipDelayManager;
  IGStoryStickerAdsMediaDelayManager *_adsInteractiveMediaDelayManager;
  UIView *_highlightButton;
  struct CGPoint { double x; double y; } _hypeCyclingViewOrigin;
}

@property (retain, nonatomic) NSObject<IGStoryItemType> *currentStoryItem;
@property (readonly, nonatomic) IGStoryFullscreenHeaderView *headerView;
@property (readonly, nonatomic) IGMediaOverlayView *mediaOverlayBanner;
@property (weak, nonatomic) NSObject<IGStoryFullscreenOverlayButtonDelegate> *buttonDelegate;
@property (copy, nonatomic) NSString *module;
@property (nonatomic) double bottomInset;
@property (readonly, nonatomic) UIView *moreButton;
@property (retain, nonatomic) IGAdsLinkStickerLayoutSpec *ctaStickerLayoutSpec;
@property (nonatomic) BOOL carouselScrubberIsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IGTapButton *promptButton;
@property (readonly, nonatomic) IGTapButton *retryButton;
@property (readonly, nonatomic) IGStoryFullscreenProgressView *progressView;
@property (weak, nonatomic) NSObject<IGStoryFullscreenGestureDelegate> *gestureDelegate;
@property (weak, nonatomic) NSObject<IGStoryFullscreenRetryDelegate> *retryDelegate;
@property (readonly, nonatomic) UISwipeGestureRecognizer *swipeUpGesture;
@property (readonly, nonatomic) UIPanGestureRecognizer *panUpGesture;
@property (nonatomic) BOOL isSponsored;
@property (readonly, nonatomic) IGStoryGradientRingView *loadingView;
@property (weak, nonatomic) NSObject<IGStoryFullscreenTappableOverlayDelegate> *tappableOverlayDelegate;
@property (weak, nonatomic) NSObject<IGMediaOverlayDelegate> *mediaOverlayDelegate;
@property (retain, nonatomic) UIView<IGDirectComposerProtocol> *inputView;
@property (readonly, nonatomic) IGTooltipView *tappableOverlayTooltip;
@property (retain, nonatomic) NSValue *electionStickerTooltipPoint;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame shouldCreateComposerBackgroundView:(BOOL)view userSession:(id)session bloksContext:(id)context storyViewerLogger:(id)logger;
- (void)layoutSubviews;
- (void)_retryButtonTapped;
- (void)_nextStoryButtonTapped;
- (void)_previousStoryButtonTapped;
- (void)_previousUserButtonTapped;
- (void)_nextUserButtonTapped;
- (void)seekToBeginning;
- (void)prepareForReuse;
- (void)configureWithTappableOverlays:(id)overlays mediaSize:(struct CGSize { double x0; double x1; })size isCurrentUser:(BOOL)user module:(id)module container:(id)container shouldShowManageStoryMentionToolTip:(BOOL)tip shouldShowResharedMediaToolTip:(BOOL)tip;
- (void)setIsComposingMessage:(BOOL)message shouldCoverUnderlyingItems:(BOOL)items;
- (void)setChromeHidden:(BOOL)hidden;
- (void)configureOverlayWithContentGateableMediaItem:(id)item;
- (void)setMediaOverlayShown:(BOOL)shown;
- (void)configureEndSceneWithViewModel:(id)model;
- (void)setEndSceneViewShown:(BOOL)shown;
- (void)_profileStoryExpansionViewTapped:(id)tapped;
- (void)storyInterstitialViewUserConfirm:(id)confirm;
- (BOOL)isWaitingForUserConfirmSharingInterstitial;
- (void)storyViewerFullScreenLatelyNuxViewDidTapView:(id)view;
- (void)storyViewerFullScreenLatelyNuxViewDidTapNotNow:(id)now;
- (void)handleScrubGesture:(id)gesture;
- (void)progressViewDidEnterScrubbing:(id)scrubbing;
- (void)progressViewDidExitScrubbing:(id)scrubbing;
- (void)progressView:(id)view didScrubToSegment:(long long)segment;
- (void)storyAdEndSceneViewDidTapCTA:(id)cta;
- (void)storyAdEndSceneViewDidTapProfilePic:(id)pic;
- (void)storyAdEndSceneViewTrustSignalFollowers:(BOOL)followers andJoinDate:(BOOL)date;
- (void)_didTouchTappableOverlayTooltip:(id)tooltip;
- (void)_handleSwipeUpGesture:(id)gesture;
- (void)_handleSwipeDownGesture:(id)gesture;
- (void)_handlePanUpGesture:(id)gesture;
- (void)handleDoubleTap:(id)tap;
- (void)handlePressGesture:(id)gesture;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didTapTooltipView:(id)view;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)didTapOverlayTapTarget:(id)target atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)displayTooltipForTapTarget:(id)target atPoint:(struct CGPoint { double x0; double x1; })point isFromSticker:(BOOL)sticker;
- (void)fullscreenContentGatingViewDidDisplayActionSheet:(id)sheet;
- (void)fullscreenContentGatingViewDidDismissActionSheet:(id)sheet;
- (void)fullscreenContentGatingViewDidTapContinueActionSheet:(id)sheet;
- (void)fullscreenContentGatingViewDidTapSeeWhy:(id)why;
- (void)fullscreenContentGatingViewTimerExpired:(id)expired;
- (void)fullscreenContentGatingView:(id)view timerProgressed:(double)progressed;
- (void)storyTappableOverlayTooltipHandleTapActionForTapModel:(id)model atPoint:(struct CGPoint { double x0; double x1; })point;
- (id)contentViewForHeartAnimation;
- (BOOL)isComposingMessage;
- (BOOL)tokenFieldCanFinishEditing:(id)editing;
- (void)tokenField:(id)field didChangeQuery:(id)query;
- (BOOL)tokenField:(id)field canDeleteToken:(id)token;
- (void)tokenField:(id)field didDeleteToken:(id)token;
- (void)tokenField:(id)field willFocusTokenView:(id)view;
- (void)tokenFieldDidBeginEditing:(id)editing;
- (void)tokenFieldWillBeginEditing:(id)editing;
- (void)tokenField:(id)field didPressReturnWithQuery:(id)query;
- (void)tokenField:(id)field triedTypingQuery:(id)query;
- (void)tokenField:(id)field didTypeExistingQuery:(id)query;
- (void)tokenField:(id)field didChangeHeight:(double)height;
- (BOOL)tokenField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)didTapAddButton;
- (id)igFOAPollStickerVoteView;
- (void)setStickerVoteViewModelRef:(id)ref;
- (id)uploadFooterView;
- (void)_removeAdsTextOverlay;
- (void)_performMentionReshareBlock;
- (void)_performMessageReshareBlock;
- (void)_performGroupMentionParticipationButtonBlock;
- (void)_performMentionReplyWithStoryBlock;
- (void)_addCommentToSelfStoryButtonTapped;
- (void)_storyCommentsPreviewDidPan:(id)pan;
- (void)storyCommentsFaceswarmViewDidTapComment:(id)comment comment:(id)comment;
- (void)storyCommentsFaceswarmViewDidPan:(id)pan gesture:(id)gesture;
- (void)storyCommentsPreviewDidTapComment:(id)comment comment:(id)comment;
- (void)storyCommentsPreviewDidDoubleTap:(id)tap comment:(id)comment;
- (void)storyCommentsPreviewDidTapHeart:(id)heart comment:(id)comment;
- (void)storyCommentsPreviewDidPan:(id)pan gesture:(id)gesture;
- (void)reportComment:(id)comment;
- (void)storyHypePreviewViewDidTapDismiss;
- (void)storyHypePreviewViewDidTapHeart:(id)heart comment:(id)comment;
- (void)storyHypePreviewViewDidDoubleTap:(id)tap comment:(id)comment;
- (void)storyHypePreviewViewDidTapProfile:(id)profile profileUser:(id)user;
- (void)storyHypePreviewViewDidTapViewLikes:(id)likes comment:(id)comment;
- (void)storyCommentComposerViewDidTapDismiss:(id)dismiss;
- (void)storyCommentComposerView:(id)view didTapPostCommentWithText:(id)text;
- (void)animateForStateChangeWithIcon:(long long)icon;
- (void)_initHorizonWorldEntryPointView;
- (void)_animateHorizonWorldEntryPointViewFor:(id)for;
- (void)storyMentionReplyAndReshareViewDidTapMentionReplyButton:(id)button;
- (void)storyMentionReplyAndReshareViewDidTapMentionReshareButton:(id)button;
@end

#endif /* IGStoryFullscreenOverlayView_h */
