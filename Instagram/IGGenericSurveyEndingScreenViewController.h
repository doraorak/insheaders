//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGenericSurveyEndingScreenViewController_h
#define IGGenericSurveyEndingScreenViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGenericSurveyEndingScreenContext.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSDate, NSString, UIView;
@protocol IGSimpleActionPresentableViewerDelegate;

@interface IGGenericSurveyEndingScreenViewController : IGViewController<NSObject> {
  /* instance variables */
  IGGenericSurveyEndingScreenContext *_context;
  IGUserSession *_userSession;
  NSString *_surveyType;
  NSString *_pageId;
  UIView *_contentView;
  NSDate *_screenStartTime;
  NSString *_surveySessionId;
}

@property (weak, nonatomic) NSObject<IGSimpleActionPresentableViewerDelegate> *simpleActionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context surveyType:(id)type pageId:(id)id userSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_didTapDoneButton;
- (void)simpleActionViewDidTapStartButton:(id)button withSimpleAction:(id)action;
- (void)simpleActionViewDidTapDismissButton:(id)button;
@end

#endif /* IGGenericSurveyEndingScreenViewController_h */
