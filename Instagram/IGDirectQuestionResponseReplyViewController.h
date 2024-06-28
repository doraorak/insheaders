//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectQuestionResponseReplyViewController_h
#define IGDirectQuestionResponseReplyViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDirectCardTextViewModel.h"
#include "IGDirectComposerButtonDelegate-Protocol.h"
#include "IGDirectComposerSizingDelegate-Protocol.h"
#include "IGDirectMessageReactionSelectionViewController.h"
#include "IGDirectMessageReactionsViewThemeable-Protocol.h"
#include "IGDirectQuestionsIntermediateCardView.h"
#include "IGKeyboardInputManager-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtC20IGDirectPromptsSwift36IGDirectPromptsBlurredBackgroundView.h"

@class IGDirectComposer, IGDirectGridViewNetworkHelper, IGDirectLeftAlignedTitleView, IGDirectMessageAttachedBubbleBorderMaskView, IGDirectMessageAttachedBubbleView, IGDirectMessageAttachedBubbleViewModel, IGDirectMessageCellAttachedBubbleViewLayoutSpec, IGDirectThreadTheme, IGDirectUIMessageMetadata, IGKeyboardObserver, IGStackView, IGTallNavigationBarView, IGUser, IGUserSession, NSNumber, NSSet, NSString, UILabel, UILongPressGestureRecognizer, UITextView, UIView;
@protocol IGDirectQuestionResponseReplyViewControllerDelegate;

@interface IGDirectQuestionResponseReplyViewController : IGViewController<IGDirectComposerButtonDelegate, IGDirectComposerSizingDelegate, UIGestureRecognizerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDirectCardTextViewModel *_viewModel;
  IGDirectThreadTheme *_threadTheme;
  IGDirectUIMessageMetadata *_messageMetadata;
  IGDirectGridViewNetworkHelper *_networkHelper;
  IGUser *_channelCreatorUser;
  BOOL _isCreatorCurrentUser;
  BOOL _isCurrentUserCardAuthor;
  BOOL _canDeletePromptAndResponse;
  BOOL _isBroadcastChannel;
  NSSet *_hiddenEmojisForBroadcastChannel;
  BOOL _isChannelEnded;
  NSNumber *_consistentThreadFbid;
  long long _audienceType;
  IGTallNavigationBarView *_customHeaderView;
  IGDirectLeftAlignedTitleView *_titleView;
  IGDirectQuestionsIntermediateCardView *_cardView;
  IGStackView *_nameStack;
  UITextView *_textField;
  UILabel *_timeLabel;
  IGStackView *_cardStack;
  UILabel *_footerLabel;
  NSObject<IGKeyboardInputManager> *_keyboardInputManager;
  IGKeyboardObserver *_keyboardObserver;
  IGDirectComposer *_composerView;
  double _keyboardEndFrame;
  IGDirectMessageAttachedBubbleView *_reactionsView;
  IGDirectMessageAttachedBubbleViewModel *_reactionsViewModel;
  IGDirectMessageCellAttachedBubbleViewLayoutSpec *_reactionsViewLayoutSpec;
  NSObject<IGDirectMessageReactionsViewThemeable> *_reactionsViewThemeable;
  IGDirectMessageAttachedBubbleBorderMaskView *_reactionsBorderMaskView;
  UIView *_maskedContainerViewForReactions;
  UILongPressGestureRecognizer *_longPressGestureRecognizer;
  _TtC20IGDirectPromptsSwift36IGDirectPromptsBlurredBackgroundView *_blurredMaskView;
  IGDirectMessageReactionSelectionViewController *_reactionSelectionViewController;
}

@property (weak, nonatomic) NSObject<IGDirectQuestionResponseReplyViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session channelCreatorUser:(id)user isCreatorCurrentUser:(BOOL)user viewModel:(id)model canDeletePromptAndResponse:(BOOL)response isBroadcastChannel:(BOOL)channel hiddenEmojisForBroadcastChannel:(id)channel isChannelEnded:(BOOL)ended messageMetadata:(id)metadata networkHelper:(id)helper threadTheme:(id)theme consistentThreadFbid:(id)fbid audienceType:(long long)type;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)_didReceiveLongPress:(id)press;
- (void)_didTapMoreButton;
- (void)leftAlignedTitleViewDidTapTitle:(id)title;
- (void)leftAlignedTitleViewDidTapSubtitle:(id)subtitle;
- (void)leftAlignedTitleViewDidTapBackButton:(id)button;
- (void)leftAlignedTitleView:(id)view didTapAvatar:(id)avatar;
- (void)inputView:(id)view didTapSendButtonWithText:(id)text quotedContent:(id)content animatedEmojiCharacterRanges:(id)ranges defaultPowerupsMetadata:(id)metadata;
- (void)inputView:(id)view didTapCameraButton:(id)button withQuotedContent:(id)content;
- (void)inputView:(id)view didTapGalleryButton:(id)button withQuotedContent:(id)content;
- (void)inputView:(id)view didTapMoreButton:(id)button;
- (void)inputView:(id)view didTapVoiceMessageButton:(id)button;
- (void)inputView:(id)view didTapP2MPaymentRequestButton:(id)button;
- (void)inputView:(id)view didTapStickerButton:(id)button inPosition:(long long)position withQuotedContent:(id)content;
- (void)inputView:(id)view didTapGifButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapAvatarButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapDrawButton:(id)button;
- (void)inputView:(id)view didTapReshareButton:(id)button;
- (void)inputView:(id)view didTapRemoveGifButton:(id)button withGifModel:(id)model;
- (void)inputView:(id)view didLongPressSendButton:(id)button withText:(id)text;
- (void)inputView:(id)view voiceMessageLongPressGestureRecognizerDidUpdate:(id)update;
- (void)inputView:(id)view redesignGalleryButtonLongPressGestureRecognizerDidUpdate:(id)update;
- (void)inputView:(id)view didTapStickerSearchButton:(id)button withText:(id)text;
- (void)inputView:(id)view didTapProductPickerButton:(id)button;
- (void)inputView:(id)view didTapOrderManagementButton:(id)button;
- (void)inputView:(id)view didTapBusinessToolsButton:(id)button;
- (void)inputView:(id)view didTapPlusButton:(id)button isExpanded:(BOOL)expanded layoutSpec:(id)spec;
- (void)inputView:(id)view didTapEmojiReactionButton:(id)button;
- (void)inputView:(id)view didTapBookNowLinkShareButton:(id)button;
- (void)inputView:(id)view didTapQuickReplyButton:(id)button isHighlighted:(BOOL)highlighted text:(id)text;
- (void)inputView:(id)view didTapAppointmentButton:(id)button;
- (void)inputView:(id)view didTapChallengePromptButton:(id)button;
- (void)inputView:(id)view didTapDailyPromptsButton:(id)button;
- (void)inputView:(id)view didTapQuestionPromptButton:(id)button;
- (void)inputView:(id)view didTapAddYoursPromptButton:(id)button;
- (void)inputView:(id)view didTapLocationSharingButton:(id)button;
- (void)inputView:(id)view didTapEventButton:(id)button;
- (void)inputView:(id)view didTapPollPromptButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapEditDoneButtonWithText:(id)text;
- (void)inputView:(id)view didTapGoLiveButton:(id)button;
- (void)inputView:(id)view didTapMetaAIShortcutButton:(id)button;
- (void)inputView:(id)view didTapFileSharingButton:(id)button;
- (void)inputView:(id)view didTapMetaAIDiscoveryButton:(id)button;
- (void)inputView:(id)view didTapMetaAIVoiceButton:(id)button;
- (void)inputViewDidInvalidateIntrinsicContentSize:(id)size needsImmediateLayout:(BOOL)layout;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)directMessageAttachedBubbleViewWasLongPressed:(id)pressed gestureRecognizer:(id)recognizer;
- (void)directMessageAttachedBubbleViewWasTapped:(id)tapped;
- (void)directMessageAttachedBubbleViewWasDoubleTapped:(id)tapped;
- (void)directMessageAttachedBubbleViewCustomEmojiWasSelected:(id)selected emojiModel:(id)model;
- (void)messageReactionSelectionViewController:(id)controller didToggleEmoji:(id)emoji isSelected:(BOOL)selected isSuperReact:(BOOL)react actionSource:(long long)source;
- (void)messageReactionSelectionViewController:(id)controller didToggleEmoji:(id)emoji isSelected:(BOOL)selected;
- (void)messageReactionShouldAnimate:(id)animate forCell:(id)cell;
- (void)messageReactionSelectionViewControllerWillDismissAndCleanUp:(id)up;
- (void)messageReactionSelectionViewControllerWillPresentOrAdjustEmojiPickerTray:(id)tray selectionMode:(long long)mode;
- (void)messageReactionSelectionViewControllerWillDismissEmojiPickerTray:(id)tray;
- (void)messageReactionSelectionViewControllerWillResetOpacity:(id)opacity;
- (void)messageReactionSelectionViewControllerWillAdjustOpacityToFocusMessage:(id)message;
- (void)inputView:(id)view didTapImagineCreateButton:(id)button inPosition:(long long)position;
@end

#endif /* IGDirectQuestionResponseReplyViewController_h */
