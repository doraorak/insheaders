//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedSharingSurveyManager_h
#define IGFeedSharingSurveyManager_h
@import Foundation;

@class IGRapidFeedbackController;

@interface IGFeedSharingSurveyManager : NSObject {
  /* instance variables */
  IGRapidFeedbackController *_organicCarouselSwipeSurvey;
  IGRapidFeedbackController *_carouselCreationAbandonmentSurvey;
  IGRapidFeedbackController *_singleMediaCreationSurvey;
  IGRapidFeedbackController *_fundraiserHalfCancelSurvey;
  IGRapidFeedbackController *_fundraiserFullCancelSurvey;
  IGRapidFeedbackController *_fundraiserSuccessSurvey;
  BOOL _didEnterCarouselShareScreen;
  BOOL _didRemoveFundraiser;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
@end

#endif /* IGFeedSharingSurveyManager_h */
