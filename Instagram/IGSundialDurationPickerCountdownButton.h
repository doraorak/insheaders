//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialDurationPickerCountdownButton_h
#define IGSundialDurationPickerCountdownButton_h
@import Foundation;

#include "IGBouncyButton.h"

@class CAShapeLayer, NSArray, UILabel;

@interface IGSundialDurationPickerCountdownButton : IGBouncyButton {
  /* instance variables */
  CAShapeLayer *_backdropLayer;
  UILabel *_durationLabel;
  double _countdownDuration;
  NSArray *_durationOptions;
}

/* instance methods */
- (id)initWithDurationOptions:(id)options;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGSundialDurationPickerCountdownButton_h */