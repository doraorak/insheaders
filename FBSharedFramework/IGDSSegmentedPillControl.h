//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDSSegmentedPillControl_h
#define IGDSSegmentedPillControl_h
@import Foundation;

#include "UIControl.h"
#include "IGCenterLayout.h"
#include "IGDSSegmentedPillBarPillStyle.h"
#include "IGDSSegmentedPillControlVisualStyle.h"
#include "IGImageView.h"
#include "IGInsetLayout.h"
#include "IGStackLayout.h"

@class NSString, UIFont, UIImage, UIImageView, UILabel;
@protocol IGDSSegmentedPillControlDelegate;

@interface IGDSSegmentedPillControl : UIControl {
  /* instance variables */
  UIImageView *_iconImageView;
  IGImageView *_imageView;
  UIImage *_outlineIconImage;
  UIImage *_filledIconImage;
  NSString *_badge;
  IGCenterLayout *_centerLayout;
  IGInsetLayout *_insetLayout;
  IGStackLayout *_stackLayout;
  struct CGSize { double width; double height; } _minimumSize;
}

@property (readonly, nonatomic) IGDSSegmentedPillBarPillStyle *style;
@property (nonatomic) BOOL loading;
@property (weak, nonatomic) NSObject<IGDSSegmentedPillControlDelegate> *delegate;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) IGDSSegmentedPillControlVisualStyle *visualStyle;

/* class methods */
+ (id)newWithStyle:(id)style;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setEnabled:(BOOL)enabled;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setSelected:(BOOL)selected;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)isLoading;
@end

#endif /* IGDSSegmentedPillControl_h */
