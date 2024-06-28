//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRepliesComposingController_h
#define IGDirectRepliesComposingController_h
@import Foundation;

#include "IGDirectComposerButtonDelegate-Protocol.h"
#include "IGDirectComposerSizingDelegate-Protocol.h"

@class IGCommentModel, IGDirectRepliesMessageMetadata, IGDirectThreadTheme, IGUserSession, NSString;
@protocol IGDirectRepliesComposingControllerDelegate, UIView<IGDirectComposerProtocol;

@interface IGDirectRepliesComposingController : NSObject<IGDirectComposerSizingDelegate, IGDirectComposerButtonDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDirectRepliesMessageMetadata *_directMessageMetadata;
  IGDirectThreadTheme *_threadTheme;
  BOOL _composerIsForChildReply;
  BOOL _showNudgeView;
  IGCommentModel *_parentReplyCommentModel;
  UIView<IGDirectComposerProtocol> *_composerView;
}

@property (weak, nonatomic) NSObject<IGDirectRepliesComposingControllerDelegate> *delegate;
@property (readonly, nonatomic) IGCommentModel *replyToComment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session directMessageMetadata:(id)metadata presentingViewController:(id)controller threadTheme:(id)theme;
- (void)inputViewDidInvalidateIntrinsicContentSize:(id)size needsImmediateLayout:(BOOL)layout;
- (void)inputView:(id)view didTapSendButtonWithText:(id)text quotedContent:(id)content animatedEmojiCharacterRanges:(id)ranges defaultPowerupsMetadata:(id)metadata;
- (void)inputView:(id)view didTapCameraButton:(id)button withQuotedContent:(id)content;
- (void)inputView:(id)view didTapGalleryButton:(id)button withQuotedContent:(id)content;
- (void)inputView:(id)view didTapMoreButton:(id)button;
- (void)inputView:(id)view didTapVoiceMessageButton:(id)button;
- (void)inputView:(id)view didTapP2MPaymentRequestButton:(id)button;
- (void)inputView:(id)view didTapAvatarButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapStickerSearchButton:(id)button withText:(id)text;
- (void)inputView:(id)view didTapStickerButton:(id)button inPosition:(long long)position withQuotedContent:(id)content;
- (void)inputView:(id)view didTapGifButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapDrawButton:(id)button;
- (void)inputView:(id)view didTapReshareButton:(id)button;
- (void)inputView:(id)view didTapRemoveGifButton:(id)button withGifModel:(id)model;
- (void)inputView:(id)view didLongPressSendButton:(id)button withText:(id)text;
- (void)inputView:(id)view voiceMessageLongPressGestureRecognizerDidUpdate:(id)update;
- (void)inputView:(id)view redesignGalleryButtonLongPressGestureRecognizerDidUpdate:(id)update;
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
- (void)inputView:(id)view didTapPollPromptButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapGoLiveButton:(id)button;
- (void)inputView:(id)view didTapMetaAIShortcutButton:(id)button;
- (void)inputView:(id)view didTapFileSharingButton:(id)button;
- (void)inputView:(id)view didTapLocationSharingButton:(id)button;
- (void)inputView:(id)view didTapEventButton:(id)button;
- (void)inputView:(id)view didTapEditDoneButtonWithText:(id)text;
- (void)inputView:(id)view didTapMetaAIDiscoveryButton:(id)button;
- (void)inputView:(id)view didTapMetaAIVoiceButton:(id)button;
- (void)composerReplyBarDidTapCloseButton:(id)button;
- (void)musicStatusXMAViewTappedFromReplyBarWithAudioId:(id)id;
- (void)inputView:(id)view didTapImagineCreateButton:(id)button inPosition:(long long)position;
@end

#endif /* IGDirectRepliesComposingController_h */
