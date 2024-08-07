//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCreatorAICustomNegativeFeedbackIntentTarget_h
#define IGCreatorAICustomNegativeFeedbackIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGCreatorAICustomNegativeFeedbackIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *question;
@property (readonly, nonatomic) NSString *answer;
@property (readonly, nonatomic) NSString *botResponseId;
@property (readonly, nonatomic) NSString *correctedBotMessageIgid;
@property (readonly, nonatomic) NSString *otid;
@property (readonly, nonatomic) NSString *threadIgid;
@property (readonly, nonatomic) NSString *agentOwnerFbid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQuestion:(id)question answer:(id)answer botResponseId:(id)id correctedBotMessageIgid:(id)igid otid:(id)otid threadIgid:(id)igid agentOwnerFbid:(id)fbid;
@end

#endif /* IGCreatorAICustomNegativeFeedbackIntentTarget_h */
