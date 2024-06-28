//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInteractiveVotersModel_h
#define IGInteractiveVotersModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGAPIStoryFundraiserDonationsResponse.h"
#include "IGAPIStoryPollVoterInfo.h"
#include "IGAPIStoryQuizParticipantInfoDict.h"
#include "IGAPIStoryReactionStickerReactors.h"
#include "IGAPIStorySliderVoterInfoObject.h"
#include "IGQuestionAnswerStickerResponsesModel.h"
#include "NSCoding-Protocol.h"

@interface IGInteractiveVotersModel : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  IGAPIStoryPollVoterInfo *_poll_storyPollVoterInfo;
  IGAPIStorySliderVoterInfoObject *_slider_igAPISliderVotersModel;
  IGQuestionAnswerStickerResponsesModel *_questionAnswer_questionAnswerResponsesModel;
  IGAPIStoryQuizParticipantInfoDict *_quiz_storyQuizParticipantInfo;
  IGAPIStoryFundraiserDonationsResponse *_fundraiser_storyFundraiserDonationsResponse;
  IGAPIStoryReactionStickerReactors *_reaction_storyReactionStickerReactors;
}

/* class methods */
+ (id)fundraiserWithStoryFundraiserDonationsResponse:(id)response;
+ (id)pollWithStoryPollVoterInfo:(id)info;
+ (id)questionAnswerWithQuestionAnswerResponsesModel:(id)model;
+ (id)quizWithStoryQuizParticipantInfo:(id)info;
+ (id)reactionWithStoryReactionStickerReactors:(id)reactors;
+ (id)sliderWithIgAPISliderVotersModel:(id)model;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGInteractiveVotersModel_h */
