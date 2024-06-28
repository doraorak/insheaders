//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectBottomActionButtonDeprecated_h
#define IGDirectBottomActionButtonDeprecated_h
@import Foundation;

#include "UIView.h"
#include "IGGradientView.h"

@class UIButton, UIView;

@interface IGDirectBottomActionButtonDeprecated : UIView {
  /* instance variables */
  BOOL _useRoundBottomActionButton;
  BOOL _containerViewIsPassthroughView;
  UIView *_containerView;
  UIButton *_button;
  double _buttonHeight;
  IGGradientView *_gradientView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame title:(id)title actionTarget:(id)target action:(SEL)action buttonHeight:(double)height shouldDisplayHighlight:(BOOL)highlight containerViewIsPassthroughView:(BOOL)view;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame title:(id)title actionTarget:(id)target action:(SEL)action;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setUserInteractionEnabled:(BOOL)enabled;
@end

#endif /* IGDirectBottomActionButtonDeprecated_h */
