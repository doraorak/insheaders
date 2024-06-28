//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLearnMoreAboutSurveysViewController_h
#define IGLearnMoreAboutSurveysViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGLearnMoreAboutSurveysView.h"

@class IGBrandLiftAboutSurveyModel, IGUserSession, NSString;
@protocol IGLearnMoreAboutSurveysActionDelegate;

@interface IGLearnMoreAboutSurveysViewController : UIViewController<IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGBrandLiftAboutSurveyModel *_aboutSurveyModel;
  IGLearnMoreAboutSurveysView *_learnMoreView;
  NSObject<IGLearnMoreAboutSurveysActionDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session aboutSurveyModel:(id)model delegate:(id)delegate;
- (void)viewDidLoad;
- (void)didTapDoneLearningMoreAboutSurveys;
- (void)didTapOpenSurveyLearnMoreUrl;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGLearnMoreAboutSurveysViewController_h */
