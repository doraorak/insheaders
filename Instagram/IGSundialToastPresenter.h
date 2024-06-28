//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialToastPresenter_h
#define IGSundialToastPresenter_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGSundialToastMessageView.h"

@class NSString, UIImpactFeedbackGenerator;

@interface IGSundialToastPresenter : IGPassthroughView {
  /* instance variables */
  IGSundialToastMessageView *_messageView;
  UIImpactFeedbackGenerator *_feedbackGenerator;
  BOOL _presented;
  double _topOffset;
  double _leftRightOffset;
}

@property (readonly, nonatomic) NSString *titleText;
@property (nonatomic) double bottomOffset;

/* instance methods */
- (id)initWithTitleText:(id)text showOkButton:(BOOL)button;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)present;
- (void)dismiss;
@end

#endif /* IGSundialToastPresenter_h */
