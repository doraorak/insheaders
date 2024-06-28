//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerVideoSurveyActionButtonsView_h
#define IGSundialViewerVideoSurveyActionButtonsView_h
@import Foundation;

#include "UIView.h"

@class IGTextButton, UIButton;
@protocol IGSundialViewerVideoSurveyActionButtonsViewDelegate;

@interface IGSundialViewerVideoSurveyActionButtonsView : UIView {
  /* instance variables */
  IGTextButton *_startButton;
  UIButton *_skipButton;
}

@property (weak, nonatomic) NSObject<IGSundialViewerVideoSurveyActionButtonsViewDelegate> *delegate;

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTapStartButton;
- (void)_didTapSkipButton;
@end

#endif /* IGSundialViewerVideoSurveyActionButtonsView_h */
