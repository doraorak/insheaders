//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveInteractionFooterView_h
#define IGLiveInteractionFooterView_h
@import Foundation;

#include "UIView.h"
#include "IGAPIClient-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGEmojiSelectionViewControllerDelegate-Protocol.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "IGLiveCommentTextFieldContainerView.h"
#include "IGLiveCommentsContainerViewController.h"
#include "IGLiveContainerView.h"
#include "IGLiveFloatingCommentViewDelegate-Protocol.h"
#include "IGLiveFooterButtonsView.h"
#include "IGLiveQuickReactionsView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtC26IGLiveAvatarMixedReactions40IGLiveAvatarMixedReactionAnimationHelper.h"
#include "_TtC26IGLiveAvatarMixedReactions40IGLiveAvatarMixedReactionsViewController.h"
#include "_TtP26IGLiveAvatarMixedReactions48IGLiveAvatarMixedReactionsViewControllerDelegate_-Protocol.h"

@class FBTimer, IGDeviceSession, IGEmojiSelectionViewController, IGKeyboardObserver, IGLiveBroadcastWhileLiveViewExperiments, IGLiveQuestionOverlayViewControllerV2, IGLiveQuestionOverlayViewModel, IGLiveTappablePinnedViewControllerV2, IGStoryMentionsView, IGTapButton, IGUserSession, NSString, UIButton, UIView;
@protocol IGLiveAddonCoordinating, IGLiveInteractionFooterViewDelegate, IGLiveLoggingContext;

@interface IGLiveInteractionFooterView : UIView<IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, UIGestureRecognizerDelegate, _TtP26IGLiveAvatarMixedReactions48IGLiveAvatarMixedReactionsViewControllerDelegate_, IGEmojiSelectionViewControllerDelegate, IGLiveFloatingCommentViewDelegate> {
  /* instance variables */
  IGLiveCommentsContainerViewController *_commentsContainerViewController;
  IGLiveQuestionOverlayViewControllerV2 *_questionOverlayViewControllerV2;
  BOOL _hasQuestion;
  IGLiveTappablePinnedViewControllerV2 *_tappablePinnedViewControllerV2;
  IGLiveFooterButtonsView *_footerButtonsView;
  IGLiveCommentTextFieldContainerView *_commentTextFieldContainer;
  IGKeyboardObserver *_keyboardObserver;
  struct { BOOL isInitialized; BOOL isUserPayActivated; unsigned long long audienceType; BOOL shareButtonEnabled; BOOL realtimeQAEnabledForViewer; BOOL requestToJoinEnabled; BOOL isLiveSubscriptionEnabled; BOOL dualCameraEnabled; } _liveBroadcastConfig;
  IGLiveBroadcastWhileLiveViewExperiments *_liveBroadcastViewExperiments;
  _TtC26IGLiveAvatarMixedReactions40IGLiveAvatarMixedReactionsViewController *_avatarMixedReactionsViewController;
  _TtC26IGLiveAvatarMixedReactions40IGLiveAvatarMixedReactionAnimationHelper *_avatarMixedReactionAnimationHelper;
  IGUserSession *_userSession;
  IGLiveQuestionOverlayViewModel *_latestQuestionModel;
  UIView *_invisibleBackgroundView;
  BOOL _showLiveResourceButton;
  long long _currentRole;
  FBTimer *_quickReactionsViewTimer;
  FBTimer *_avatarMixedReactionsViewTimer;
  IGEmojiSelectionViewController *_emojiSelectionViewController;
  IGLiveContainerView *_upleveledCommentContainerView;
  FBTimer *_upleveledCommentDismissTimer;
  BOOL _commentsDisabledForBlockedUser;
  BOOL _shouldConfigureForVerticalScrollWithPeeks;
  BOOL _showExtraQuestionViewSpacing;
  BOOL _avatarMixedReactionsEnabled;
  long long _footerViewMode;
  IGStoryMentionsView *_mentionSuggestionsView;
  double _buttonsContainerOriginYReference;
  UIView *_reactionsDisplay;
  IGLiveQuickReactionsView *_quickReactionsView;
}

@property (nonatomic) BOOL commentsDisabled;
@property (weak, nonatomic) NSObject<IGLiveInteractionFooterViewDelegate> *delegate;
@property (readonly, nonatomic) IGTapButton *liveRoomsButton;
@property (readonly, nonatomic) UIButton *liveViewerUserPayCtaButton;
@property (@dynamic, nonatomic) long long commentsContainerDisplayMode;
@property (nonatomic) BOOL shouldBottomInsetToMedia;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } mediaWindowFrameReference;
@property (retain, nonatomic) NSObject<IGAnalyticsEventLoggingProtocol> *analyticsLogger;
@property (retain, nonatomic) NSObject<IGLiveLoggingContext> *loggingContext;
@property (retain, nonatomic) IGDeviceSession *deviceSession;
@property (retain, nonatomic) NSString *broadcastId;
@property (retain, nonatomic) NSObject<IGAPIClient> *networker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGLiveAddonCoordinating> *coordinator;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL addonLifeCycleEventEnabled;

/* class methods */
+ (BOOL)ignoreEventIfNotDynamicBounded;
+ (id)addonEventDynamicBoundings;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame footerViewMode:(long long)mode liveBroadcastConfig:(struct { BOOL x0; BOOL x1; unsigned long long x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })config userSession:(id)session liveBroadcastViewExperiments:(id)experiments;
- (void)dealloc;
- (void)showUpleveledComment:(id)comment;
- (void)_createAndAnimateInUpleveledComment:(id)comment;
- (void)_dismissUpleveledCommentAfterDelay:(double)delay;
- (void)_dismissUpleveledCommentAnimated;
- (void)removeCommentWithPk:(id)pk;
- (BOOL)isCommentVisible:(id)visible;
- (id)visibleCellForComment:(id)comment;
- (void)_setUpleveledCommentContainerVisible:(BOOL)visible animated:(BOOL)animated;
- (void)prepareForReuse;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)initMentionSuggestionsViewWithUserSession:(id)session module:(id)module;
- (void)didTapLiveFloatingCommentView:(id)view;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
- (void)commentTextFieldContainerViewDidUpdateButtonVisibility:(id)visibility;
- (void)commentTextFieldContainerViewDidAnimateButtonVisibility:(id)visibility;
- (void)commentTextFieldContainerView:(id)view didChangeEditing:(BOOL)editing;
- (void)commentTextFieldContainerView:(id)view didPostCommentText:(id)text repliedToCommentPk:(id)pk;
- (void)commentTextFieldContainerViewDidChangeText:(id)text didChangeText:(id)text cursorIndex:(long long)index;
- (void)commentsContainerViewController:(id)controller didReceiveTap:(id)tap;
- (void)commentsContainerViewController:(id)controller didReceiveUnpinTapOnComment:(id)comment;
- (void)commentsContainerViewController:(id)controller didReceiveTapOnComment:(id)comment isPinned:(BOOL)pinned tappedWaveButton:(BOOL)button cell:(id)cell;
- (void)commentsContainerViewController:(id)controller didTapReplyComment:(id)comment;
- (void)emojiSelectionViewController:(id)controller didSelectEmoji:(id)emoji suggestedComment:(id)comment atIndex:(unsigned long long)index;
- (void)questionOverlayTapped:(id)tapped;
- (void)removeQuestionButtonTapped:(id)tapped;
- (void)liveTappablePinnedViewController:(id)controller didTapButtonWithViewModel:(id)model;
- (void)liveTappablePinnedViewController:(id)controller didTapWithViewModel:(id)model;
- (void)liveTappablePinnedViewController:(id)controller didTapTextWithViewModel:(id)model text:(id)text URL:(id)url;
- (BOOL)_canShowEmojiSelectionAboveComments;
- (void)_updateEmojiSelectorViewVisible:(BOOL)visible;
- (void)_triviaStateUpdated:(id)updated;
- (void)_questionCountUpdateWithCount:(id)count;
- (void)_questionContentUpdateWithContentModel:(id)model;
- (void)storyMentionsView:(id)view didSelectUser:(id)user;
- (void)storyMentionsView:(id)view didSelectGroupMention:(id)mention;
- (void)storyMentionsViewDidSelectNewGroupMention:(id)mention;
- (BOOL)storyMentionsViewShouldShowGroupMentionStickerSuggestions:(id)suggestions;
- (void)footerButtonsViewStartedAnimating:(id)animating expanded:(BOOL)expanded;
- (void)footerButtonsViewOptionButtonTapped:(id)tapped;
- (void)footerButtonsViewRequestToJoinButtonTapped:(id)tapped;
- (void)footerButtonsViewSubmitQuestionButtonTapped:(id)tapped;
- (void)footerButtonsViewBadgeButtonTapped:(id)tapped;
- (void)footerButtonsViewInviteButtonTapped:(id)tapped;
- (void)footerButtonsViewLikeButtonTapped:(id)tapped;
- (void)footerButtonsViewLikeButtonLongPressed:(id)pressed;
- (void)footerButtonsViewLiveResourceButtonTapped:(id)tapped;
- (void)footerButtonsViewLiveRoomButtonTapped:(id)tapped;
- (void)footerButtonsViewInviteGuestButtonTapped:(id)tapped;
- (void)footerButtonsViewLiveUnifiedGuestInviteButtonTapped:(id)tapped;
- (void)footerButtonsViewSelectQuestionButtonTapped:(id)tapped;
- (void)footerButtonsViewExpandButtonTapped:(id)tapped;
- (void)quickReactionsViewButtonPressed:(id)pressed;
- (void)sendEmojiReaction:(id)reaction;
- (void)sendAvatarReaction:(id)reaction;
- (void)startReactionScrollTimer:(BOOL)timer;
- (void)closeReactionTray;
- (void)configurateCoordinator:(id)coordinator;
- (void)unconfigurateCoordinator;
- (void)receiveEvent:(unsigned long long)event from:(id)from payload:(id)payload;
- (BOOL)canHandleRequest:(id)request;
- (id)handleRequest:(id)request;
@end

#endif /* IGLiveInteractionFooterView_h */