//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialVoiceEffectsIconView_h
#define IGSundialVoiceEffectsIconView_h
@import Foundation;

#include "UIView.h"

@class CALayer, CAShapeLayer, UIImage, UIImageView, UIView;

@interface IGSundialVoiceEffectsIconView : UIView {
  /* instance variables */
  UIImageView *_defaultIconImageView;
  CAShapeLayer *_defaultCircleOutline;
  UIView *_selectedGradientView;
  CALayer *_iconGradientLayer;
  CALayer *_iconGradientMask;
  CALayer *_circleOutlineGradientLayer;
}

@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL disabled;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (BOOL)isSelected;
- (BOOL)isDisabled;
@end

#endif /* IGSundialVoiceEffectsIconView_h */
