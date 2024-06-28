//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadMetadataBuilder_h
#define IGDirectThreadMetadataBuilder_h
@import Foundation;

#include "IGDirectAccountWarning.h"
#include "IGDirectBlendedThreadCapabilities.h"
#include "IGDirectBroadcastChatContext.h"
#include "IGDirectBusinessPersistentIcebreakerSet.h"
#include "IGDirectBusinessPersistentMenu.h"
#include "IGDirectBusinessWelcomeMessage.h"
#include "IGDirectFanClubSubscriberGroupThreadContext.h"
#include "IGDirectThreadAdContextData.h"
#include "IGDirectThreadCtdOutcomeUpsellSetting.h"
#include "IGDirectThreadCustomerDetails.h"
#include "IGDirectThreadDisappearingModeLocalMetadata.h"
#include "IGDirectThreadDisappearingModeMetadata.h"
#include "IGDirectThreadEventMetadata.h"
#include "IGDirectThreadGroupMetadataProviding-Protocol.h"
#include "IGDirectThreadInstamadilloCutoverMetadata.h"
#include "IGDirectThreadProfessionalMetadata.h"
#include "IGDirectThreadShhModeMetadata.h"
#include "IGDirectThreadSmartSuggestion.h"
#include "IGDirectThreadSnoozedMessagesMetadata.h"
#include "IGDirectThreadTakedownData.h"
#include "IGDirectThreadThemeMetadata.h"
#include "IGDirectVideoCallInfo.h"
#include "IGDirectViolationReview.h"
#include "IGUser.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString;

@interface IGDirectThreadMetadataBuilder : NSObject {
  /* instance variables */
  BOOL _isCanonical;
  BOOL _isGroup;
  BOOL _isMessageRequest;
  BOOL _isSpamRequest;
  BOOL _isSelfThread;
  NSArray *_users;
  NSArray *_leftUsers;
  NSSet *_pendingUserIds;
  NSString *_socialContext;
  BOOL _isMuted;
  BOOL _isMentionsMuted;
  BOOL _isVideoCallMuted;
  long long _readReceiptsControlStatus;
  long long _typingIndicatorControlStatus;
  long long _lockStatus;
  IGDirectVideoCallInfo *_videoCallInfo;
  BOOL _isFlagged;
  BOOL _isMarkedAsUnread;
  BOOL _isArchived;
  long long _msysBasedCutoverState_DEPRECATED;
  IGUser *_inviter;
  NSDictionary *_lastSeenMessageIdsForUserIds;
  NSObject<IGDirectThreadGroupMetadataProviding> *_groupMetadata;
  long long _inputMode;
  long long _folderType;
  IGDirectThreadShhModeMetadata *_shhModeMetadata;
  IGDirectThreadDisappearingModeMetadata *_disappearingModeMetadata;
  IGDirectThreadDisappearingModeLocalMetadata *_disappearingModeLocalMetadata;
  BOOL _isCloseFriendThread;
  BOOL _isVerifiedThread;
  BOOL _isCreatorThread;
  BOOL _isBusinessThread;
  BOOL _hasFilteredMessages;
  BOOL _isMessageRequestsLimitReached;
  NSString *_filteredDictionaryId;
  IGDirectViolationReview *_violationReview;
  long long _messageRequestType;
  IGDirectThreadThemeMetadata *_themeMetadata;
  NSArray *_contextLines;
  NSString *_responsivenessCategory;
  NSArray *_icebreakers;
  IGDirectBusinessPersistentIcebreakerSet *_persistentIcebreakerSet;
  IGDirectBusinessWelcomeMessage *_welcomeMessage;
  IGDirectBusinessPersistentMenu *_persistentMenu;
  unsigned long long _senderReachabilityStatus;
  unsigned long long _recipientReachabilityStatus;
  unsigned long long _bizThreadThrottlingState;
  BOOL _hasRestrictedUser;
  BOOL _hasGroupsXacIneligibleUser;
  BOOL _isXacThread;
  NSArray *_labels;
  BOOL _isFanClubSubscriberThread;
  BOOL _isTranslationEnabled;
  NSDictionary *_threadLanguages;
  unsigned long long _translationBannerImpressionCount;
  IGDirectFanClubSubscriberGroupThreadContext *_fanClubSubscriberGroupThreadContext;
  IGDirectThreadSmartSuggestion *_bizSmartSuggestion;
  IGDirectAccountWarning *_accountWarning;
  unsigned long long _threadSubtype;
  unsigned long long _rawThreadSubtype;
  NSDictionary *_snippetDict;
  IGDirectBroadcastChatContext *_broadcastChatContext;
  NSNumber *_isOtherParticipantEligibleForIGAppointmentBooking;
  BOOL _isAnyParticipant3pAPI;
  BOOL _shouldUpsellNudge;
  unsigned long long _capabilities_0;
  unsigned long long _capabilities_1;
  IGDirectThreadAdContextData *_adContextData;
  IGDirectThreadProfessionalMetadata *_professionalMetadata;
  IGDirectThreadCtdOutcomeUpsellSetting *_ctdOutcomeUpsellSetting;
  IGDirectBlendedThreadCapabilities *_blendedThreadCapabilities;
  IGDirectThreadEventMetadata *_eventMetadata;
  NSString *_threadTitle;
  NSDate *_latestExternalActivityTimestamp;
  IGDirectThreadTakedownData *_takedownData;
  NSNumber *_groupMemberAddMode;
  BOOL _willXacBeReadOnly;
  BOOL _isXacReadOnly;
  BOOL _isPinned;
  unsigned long long _pinnedTimestamp;
  BOOL _isCreatorAgentEnabledForThread;
  BOOL _hasCreatorAIMessage;
  NSString *_pbiaPageId;
  IGDirectThreadInstamadilloCutoverMetadata *_cutoverMetadata;
  NSNumber *_groupThreadJid;
  BOOL _incomingFollowRequestFromRecipient;
  IGDirectThreadCustomerDetails *_customerDetails;
  NSString *_recurringPromptType;
  IGDirectThreadSnoozedMessagesMetadata *_snoozedMessagesMetadata;
}

/* class methods */
+ (id)directThreadMetadataFromExistingDirectThreadMetadata:(id)metadata;

/* instance methods */
- (id)initWithUsers:(id)users leftUsers:(id)users lastSeenMessageIdsForUserIds:(id)ids;
- (id)build;
- (id)withIsCanonical:(BOOL)canonical;
- (id)withIsGroup:(BOOL)group;
- (id)withIsMessageRequest:(BOOL)request;
- (id)withIsSpamRequest:(BOOL)request;
- (id)withIsSelfThread:(BOOL)thread;
- (id)withUsers:(id)users;
- (id)withLeftUsers:(id)users;
- (id)withPendingUserIds:(id)ids;
- (id)withSocialContext:(id)context;
- (id)withIsMuted:(BOOL)muted;
- (id)withIsMentionsMuted:(BOOL)muted;
- (id)withIsVideoCallMuted:(BOOL)muted;
- (id)withReadReceiptsControlStatus:(long long)status;
- (id)withTypingIndicatorControlStatus:(long long)status;
- (id)withLockStatus:(long long)status;
- (id)withVideoCallInfo:(id)info;
- (id)withIsFlagged:(BOOL)flagged;
- (id)withIsMarkedAsUnread:(BOOL)unread;
- (id)withIsArchived:(BOOL)archived;
- (id)withMsysBasedCutoverState_DEPRECATED:(long long)deprecated;
- (id)withInviter:(id)inviter;
- (id)withLastSeenMessageIdsForUserIds:(id)ids;
- (id)withGroupMetadata:(id)metadata;
- (id)withInputMode:(long long)mode;
- (id)withFolderType:(long long)type;
- (id)withShhModeMetadata:(id)metadata;
- (id)withDisappearingModeMetadata:(id)metadata;
- (id)withDisappearingModeLocalMetadata:(id)metadata;
- (id)withIsCloseFriendThread:(BOOL)thread;
- (id)withIsVerifiedThread:(BOOL)thread;
- (id)withIsCreatorThread:(BOOL)thread;
- (id)withIsBusinessThread:(BOOL)thread;
- (id)withHasFilteredMessages:(BOOL)messages;
- (id)withIsMessageRequestsLimitReached:(BOOL)reached;
- (id)withFilteredDictionaryId:(id)id;
- (id)withViolationReview:(id)review;
- (id)withMessageRequestType:(long long)type;
- (id)withThemeMetadata:(id)metadata;
- (id)withContextLines:(id)lines;
- (id)withResponsivenessCategory:(id)category;
- (id)withIcebreakers:(id)icebreakers;
- (id)withPersistentIcebreakerSet:(id)set;
- (id)withWelcomeMessage:(id)message;
- (id)withPersistentMenu:(id)menu;
- (id)withSenderReachabilityStatus:(unsigned long long)status;
- (id)withRecipientReachabilityStatus:(unsigned long long)status;
- (id)withBizThreadThrottlingState:(unsigned long long)state;
- (id)withHasRestrictedUser:(BOOL)user;
- (id)withHasGroupsXacIneligibleUser:(BOOL)user;
- (id)withIsXacThread:(BOOL)thread;
- (id)withLabels:(id)labels;
- (id)withIsFanClubSubscriberThread:(BOOL)thread;
- (id)withIsTranslationEnabled:(BOOL)enabled;
- (id)withThreadLanguages:(id)languages;
- (id)withTranslationBannerImpressionCount:(unsigned long long)count;
- (id)withFanClubSubscriberGroupThreadContext:(id)context;
- (id)withBizSmartSuggestion:(id)suggestion;
- (id)withAccountWarning:(id)warning;
- (id)withThreadSubtype:(unsigned long long)subtype;
- (id)withRawThreadSubtype:(unsigned long long)subtype;
- (id)withSnippetDict:(id)dict;
- (id)withBroadcastChatContext:(id)context;
- (id)withIsOtherParticipantEligibleForIGAppointmentBooking:(id)booking;
- (id)withIsAnyParticipant3pAPI:(BOOL)api;
- (id)withShouldUpsellNudge:(BOOL)nudge;
- (id)withCapabilities_0:(unsigned long long)capabilities_0;
- (id)withCapabilities_1:(unsigned long long)capabilities_1;
- (id)withAdContextData:(id)data;
- (id)withProfessionalMetadata:(id)metadata;
- (id)withCtdOutcomeUpsellSetting:(id)setting;
- (id)withBlendedThreadCapabilities:(id)capabilities;
- (id)withEventMetadata:(id)metadata;
- (id)withThreadTitle:(id)title;
- (id)withLatestExternalActivityTimestamp:(id)timestamp;
- (id)withTakedownData:(id)data;
- (id)withGroupMemberAddMode:(id)mode;
- (id)withWillXacBeReadOnly:(BOOL)only;
- (id)withIsXacReadOnly:(BOOL)only;
- (id)withIsPinned:(BOOL)pinned;
- (id)withPinnedTimestamp:(unsigned long long)timestamp;
- (id)withIsCreatorAgentEnabledForThread:(BOOL)thread;
- (id)withHasCreatorAIMessage:(BOOL)aimessage;
- (id)withPbiaPageId:(id)id;
- (id)withCutoverMetadata:(id)metadata;
- (id)withGroupThreadJid:(id)jid;
- (id)withIncomingFollowRequestFromRecipient:(BOOL)recipient;
- (id)withCustomerDetails:(id)details;
- (id)withRecurringPromptType:(id)type;
- (id)withSnoozedMessagesMetadata:(id)metadata;
@end

#endif /* IGDirectThreadMetadataBuilder_h */