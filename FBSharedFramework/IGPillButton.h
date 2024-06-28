//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPillButton_h
#define IGPillButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGDSBlurView.h"
#include "IGPillButtonModel.h"

@class UIImageView, UILabel, UIView;

@interface IGPillButton : IGBouncyButton {
  /* instance variables */
  IGPillButtonModel *_viewModel;
  IGDSBlurView *_blurView;
  UIView *_customSubview;
  BOOL _imageAfterText;
  BOOL _disableBlurBackground;
  BOOL _flexibleHeight;
  double _additionalHeight;
  double _additionalWidth;
  double _additionalVerticalPadding;
  double _additionalHorizontalPadding;
  double _iconViewVerticalAdjustment;
  double _maximumPillButtonWidth;
  double _interSegmentSpacing;
  double _iconWidthHeight;
}

@property (nonatomic) unsigned long long buttonStyle;
@property (nonatomic) unsigned long long borderStyle;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic) double fontSize;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIImageView *iconView;
@property (nonatomic) struct CGColor * borderColor;
@property (nonatomic) double fixedHeight;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setFont:(id)font;
- (void)setShadowRadius:(double)radius;
- (void)setShadowOpacity:(float)opacity;
- (id)accessibilityLabel;
- (void)configureWithViewModel:(id)model;
- (void)prepareForReuse;
@end

#endif /* IGPillButton_h */