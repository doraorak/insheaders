//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayActionButtonView_h
#define FBPayActionButtonView_h
@import Foundation;

#include "UIView.h"

@class NSString, UIActivityIndicatorView, UIButton, UIColor, UIFont, UIImageView, UIView;
@protocol FBPayViewStyleConfiguring;

@interface FBPayActionButtonView : UIView {
  /* instance variables */
  UIView *_topSeparator;
  UIButton *_button;
  UIImageView *_rightArrowView;
  NSString *_title;
  UIFont *_titleFont;
  long long _titleAlignment;
  UIColor *_backgroundColor;
  UIColor *_titleColor;
  BOOL _showTopSeparator;
  BOOL _showPressedState;
  BOOL _showRightArrow;
  id /* block */ _tapAction;
  NSObject<FBPayViewStyleConfiguring> *_viewStyleConfiguration;
  UIActivityIndicatorView *_activityIndicatorView;
}

/* instance methods */
- (id)initWithTitle:(id)title titleFont:(id)font titleAlignment:(long long)alignment backgroundColor:(id)color titleColor:(id)color showTopSeparator:(BOOL)separator showPressedState:(BOOL)state showRightArrow:(BOOL)arrow tapAction:(id /* block */)action;
- (void)_setupViews;
- (void)_setupTopSeparator;
- (void)_setupButton;
- (void)_setupRightArrowView;
- (void)showSystemSpinnerOnButton;
- (void)dismissSystemSpinnerOnButton;
- (void)showLoadingColorOnButton;
- (void)dismissLoadingColorOnButton;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTapButton:(id)button;
@end

#endif /* FBPayActionButtonView_h */
