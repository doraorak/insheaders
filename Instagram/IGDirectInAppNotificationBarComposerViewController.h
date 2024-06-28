//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInAppNotificationBarComposerViewController_h
#define IGDirectInAppNotificationBarComposerViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGDirectComposerButtonDelegate-Protocol.h"
#include "IGDirectComposerSizingDelegate-Protocol.h"
#include "IGDirectMessageSendingListener-Protocol.h"

@class IGDirectComposer, IGDirectThreadKey, IGUserSession, NSMutableDictionary, NSString;
@protocol IGUserSessionOperationCompletion;

@interface IGDirectInAppNotificationBarComposerViewController : UIViewController<IGDirectComposerButtonDelegate, IGDirectComposerSizingDelegate, IGDirectMessageSendingListener> {
  /* instance variables */
  IGDirectThreadKey *_threadKey;
  IGUserSession *_presentedUserSession;
  NSString *_recipientUserPk;
  IGDirectComposer *_directComposer;
  NSObject<IGUserSessionOperationCompletion> *_userSessionCompletion;
  NSMutableDictionary *_notificationServiceMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadView;
- (void)inputView:(id)view didTapCameraButton:(id)button withQuotedContent:(id)content;
- (void)inputView:(id)view didTapGalleryButton:(id)button withQuotedContent:(id)content;
- (void)inputView:(id)view didTapMoreButton:(id)button;
- (void)inputView:(id)view didTapSendButtonWithText:(id)text quotedContent:(id)content animatedEmojiCharacterRanges:(id)ranges defaultPowerupsMetadata:(id)metadata;
- (void)inputView:(id)view didTapVoiceMessageButton:(id)button;
- (void)inputView:(id)view didTapP2MPaymentRequestButton:(id)button;
- (void)inputView:(id)view didLongPressSendButton:(id)button withText:(id)text;
- (void)inputView:(id)view voiceMessageLongPressGestureRecognizerDidUpdate:(id)update;
- (void)inputView:(id)view redesignGalleryButtonLongPressGestureRecognizerDidUpdate:(id)update;
- (void)inputView:(id)view didTapStickerSearchButton:(id)button withText:(id)text;
- (void)inputView:(id)view didTapQuickReplyButton:(id)button isHighlighted:(BOOL)highlighted text:(id)text;
- (void)inputView:(id)view didTapProductPickerButton:(id)button;
- (void)inputView:(id)view didTapBusinessToolsButton:(id)button;
- (void)inputView:(id)view didTapOrderManagementButton:(id)button;
- (void)inputView:(id)view didTapBookNowLinkShareButton:(id)button;
- (void)inputView:(id)view didTapAppointmentButton:(id)button;
- (void)inputView:(id)view didTapChallengePromptButton:(id)button;
- (void)inputView:(id)view didTapDailyPromptsButton:(id)button;
- (void)inputView:(id)view didTapQuestionPromptButton:(id)button;
- (void)inputView:(id)view didTapAddYoursPromptButton:(id)button;
- (void)inputView:(id)view didTapLocationSharingButton:(id)button;
- (void)inputView:(id)view didTapEventButton:(id)button;
- (void)inputView:(id)view didTapPollPromptButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapPlusButton:(id)button isExpanded:(BOOL)expanded layoutSpec:(id)spec;
- (void)inputView:(id)view didTapDrawButton:(id)button;
- (void)inputView:(id)view didTapReshareButton:(id)button;
- (void)inputView:(id)view didTapStickerButton:(id)button inPosition:(long long)position withQuotedContent:(id)content;
- (void)inputView:(id)view didTapGifButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapAvatarButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapRemoveGifButton:(id)button withGifModel:(id)model;
- (void)inputView:(id)view didTapEmojiReactionButton:(id)button;
- (void)inputView:(id)view didTapEditDoneButtonWithText:(id)text;
- (void)inputView:(id)view didTapGoLiveButton:(id)button;
- (void)inputView:(id)view didTapMetaAIShortcutButton:(id)button;
- (void)inputView:(id)view didTapFileSharingButton:(id)button;
- (void)inputView:(id)view didTapMetaAIDiscoveryButton:(id)button;
- (void)inputView:(id)view didTapMetaAIVoiceButton:(id)button;
- (void)inputViewDidInvalidateIntrinsicContentSize:(id)size needsImmediateLayout:(BOOL)layout;
- (void)outgoingMessagePayloadSuccessfullySent:(id)sent successResponseDict:(id)dict;
- (void)outgoingMessageWithPayload:(id)payload didFailToSendWithError:(id)error manualRetryPermitted:(BOOL)permitted;
- (void)outgoingSecureMessageWillSendForThreadTarget:(id)target content:(id)content;
- (void)inputView:(id)view didTapImagineCreateButton:(id)button inPosition:(long long)position;
@end

#endif /* IGDirectInAppNotificationBarComposerViewController_h */