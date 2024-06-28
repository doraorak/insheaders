//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSurveyViewController_h
#define IGSurveyViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGSurveyLogger.h"
#include "IGSurveyPrimerView.h"
#include "IGSurveyQuestionView.h"
#include "IGSurveyResultView.h"
#include "NSObject-Protocol.h"

@class IGSurveyQuestion, NSString;

@interface IGSurveyViewController : IGViewController<NSObject> {
  /* instance variables */
  IGSurveyLogger *_logger;
  BOOL _showingPrimerView;
  IGSurveyPrimerView *_primerView;
  IGSurveyQuestionView *_questionView;
  IGSurveyResultView *_resultView;
}

@property (retain, nonatomic) IGSurveyQuestion *question;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithQuestion:(id)question userSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)_dismiss;
- (void)primerViewDidTapNextInView:(id)view;
- (void)questionView:(id)view didSelectAnswer:(id)answer;
@end

#endif /* IGSurveyViewController_h */
