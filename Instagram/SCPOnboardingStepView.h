//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SCPOnboardingStepView_h
#define SCPOnboardingStepView_h
@import Foundation;

#include "UIView.h"
#include "SCPOnboardingStep.h"

@class UILabel, UIView;

@interface SCPOnboardingStepView : UIView {
  /* instance variables */
  UIView *_stepViewContainerView;
}

@property (readonly, nonatomic) SCPOnboardingStep *step;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

/* class methods */
+ (id)newWithStep:(id)step;

/* instance methods */
- (id)initWithStep:(id)step;
- (void)initializeViews;
- (void)setTitleColor:(id)color;
- (void)setSubtitleColor:(id)color;
- (void)setTitleFont:(id)font;
- (void)setSubtitleFont:(id)font;
- (void)configureConstraints;
@end

#endif /* SCPOnboardingStepView_h */
