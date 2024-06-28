//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadViewControllerInitialParams_h
#define IGDirectThreadViewControllerInitialParams_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGCommentModel.h"
#include "IGDirectBusinessWelcomeMessage.h"
#include "IGDirectThreadViewControllerInitialAutomatedTrigger.h"
#include "IGMedia.h"

@class IGClickToMessagingAdsLogger, IGProfileSendMessageContext, NSArray, NSString;

@interface IGDirectThreadViewControllerInitialParams : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_ephemeralDraftMessage;
  IGDirectThreadViewControllerInitialAutomatedTrigger *_automatedTrigger;
  NSString *_threadEntryReferralParameter;
  NSString *_userProfileEntrypointParams_ephemeralDraftMessage;
  IGProfileSendMessageContext *_userProfileEntrypointParams_sendMessageReferralContext;
  IGDirectThreadViewControllerInitialAutomatedTrigger *_userProfileEntrypointParams_automatedTrigger;
  NSString *_storyCreatorPk;
  long long _bottomSheetEntrypointParams_threadLayoutType;
  IGProfileSendMessageContext *_bottomSheetEntrypointParams_sendMessageReferralContext;
  NSArray *_bottomSheetEntrypointParams_icebreakers;
  IGDirectBusinessWelcomeMessage *_bottomSheetEntrypointParams_welcomeMessage;
  IGClickToMessagingAdsLogger *_bottomSheetEntrypointParams_clickToMessageLogger;
  NSString *_bottomSheetEntrypointParams_messageToSend;
  NSString *_broadcastChannelCommentParams_messageId;
  NSString *_broadcastChannelCommentParams_mediaId;
  NSString *_broadcastChannelCommentParams_targetCommentId;
  BOOL _broadcastChannelCommentParams_permalinkEnabled;
  NSString *_directSundialViewerParams_clipId;
  NSString *_directSundialViewerParams_messageId;
  long long _directAgentMetaAIPromptParams_threadLayoutType;
  NSString *_directAgentMetaAIPromptParams_metaAIPrompt;
  NSString *_directAdFromCTDParams_adId;
  NSString *_directAdFromCTDParams_igId;
  IGDirectBusinessWelcomeMessage *_directAdFromCTDParams_welcomeMessage;
  NSArray *_directAdFromCTDParams_icebreakers;
  IGMedia *_replyToMedia_media;
  NSString *_replyToMedia_selectedPostPk;
  IGCommentModel *_replyToMedia_comment;
  NSString *_channelChallengeParams_challengeId;
  IGDirectThreadViewControllerInitialAutomatedTrigger *_baseThreadParams_automatedTrigger;
}

/* class methods */
+ (id)automatedTrigger:(id)trigger;
+ (id)baseThreadParamsWithAutomatedTrigger:(id)trigger;
+ (id)bottomSheetEntrypointParamsWithThreadLayoutType:(long long)type sendMessageReferralContext:(id)context icebreakers:(id)icebreakers welcomeMessage:(id)message clickToMessageLogger:(id)logger messageToSend:(id)send;
+ (id)broadcastChannelCommentParamsWithMessageId:(id)id mediaId:(id)id targetCommentId:(id)id permalinkEnabled:(BOOL)enabled;
+ (id)channelChallengeParamsWithChallengeId:(id)id;
+ (id)directAdFromCTDParamsWithAdId:(id)id igId:(id)id welcomeMessage:(id)message icebreakers:(id)icebreakers;
+ (id)directAgentMetaAIPromptParamsWithThreadLayoutType:(long long)type metaAIPrompt:(id)aiprompt;
+ (id)directSundialViewerParamsWithClipId:(id)id messageId:(id)id;
+ (id)ephemeralDraftMessage:(id)message;
+ (id)replyToMediaWithMedia:(id)media selectedPostPk:(id)pk comment:(id)comment;
+ (id)storyCreatorPk:(id)pk;
+ (id)threadEntryReferralParameter:(id)parameter;
+ (id)userProfileEntrypointParamsWithEphemeralDraftMessage:(id)message sendMessageReferralContext:(id)context automatedTrigger:(id)trigger;

/* instance methods */
@end

#endif /* IGDirectThreadViewControllerInitialParams_h */
