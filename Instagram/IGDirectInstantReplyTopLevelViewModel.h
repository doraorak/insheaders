//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstantReplyTopLevelViewModel_h
#define IGDirectInstantReplyTopLevelViewModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectInstantReplyViewModel.h"

@class IGDirectAgentMessageMetadata, IGDirectBusinessWelcomeMessage, IGDirectPowerupsMetadata, NSArray, NSString;

@interface IGDirectInstantReplyTopLevelViewModel : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSArray *_icebreaker_icebreakers;
  IGDirectInstantReplyViewModel *_icebreaker_instantReplyViewModel;
  IGDirectBusinessWelcomeMessage *_icebreaker_welcomeMessage;
  NSString *_icebreaker_threadEntryReferralParameterPrivacyDisclaimerText;
  BOOL _icebreaker_isDisabled;
  NSArray *_persistentIcebreaker_icebreakers;
  IGDirectInstantReplyViewModel *_persistentIcebreaker_instantReplyViewModel;
  NSArray *_persistentMenu_instantReplies;
  IGDirectInstantReplyViewModel *_persistentMenu_instantReplyViewModel;
  NSArray *_quickReply_instantReplies;
  IGDirectPowerupsMetadata *_quickReply_powerupsMetadata;
  IGDirectAgentMessageMetadata *_quickReply_agentMessageMetadata;
  BOOL _quickReply_isNewAgentStyle;
  BOOL _quickReply_isTwoLineAgents;
  NSArray *_conversationStarter_conversationStarters;
  IGDirectInstantReplyViewModel *_conversationStarter_instantReplyViewModel;
}

/* class methods */
+ (id)conversationStarterWithConversationStarters:(id)starters instantReplyViewModel:(id)model;
+ (id)icebreakerWithIcebreakers:(id)icebreakers instantReplyViewModel:(id)model welcomeMessage:(id)message threadEntryReferralParameterPrivacyDisclaimerText:(id)text isDisabled:(BOOL)disabled;
+ (id)persistentIcebreakerWithIcebreakers:(id)icebreakers instantReplyViewModel:(id)model;
+ (id)persistentMenuWithInstantReplies:(id)replies instantReplyViewModel:(id)model;
+ (id)quickReplyWithInstantReplies:(id)replies powerupsMetadata:(id)metadata agentMessageMetadata:(id)metadata isNewAgentStyle:(BOOL)style isTwoLineAgents:(BOOL)agents;

/* instance methods */
@end

#endif /* IGDirectInstantReplyTopLevelViewModel_h */