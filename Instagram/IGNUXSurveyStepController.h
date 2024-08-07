//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNUXSurveyStepController_h
#define IGNUXSurveyStepController_h
@import Foundation;

#include "IGNUXFlowContext.h"
#include "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol IGNUXFlowCoordinatorProtocol;

@interface IGNUXSurveyStepController : NSObject<NSObject> {
  /* instance variables */
  IGNUXFlowContext *_context;
  UIViewController *_viewController;
}

@property (weak, nonatomic) NSObject<IGNUXFlowCoordinatorProtocol> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)viewController;
- (id)stepName;
- (void)surveyViewControllerSkipButtonTapped:(id)tapped;
- (void)surveyViewControllerNextButtonTapped:(id)tapped;
@end

#endif /* IGNUXSurveyStepController_h */
