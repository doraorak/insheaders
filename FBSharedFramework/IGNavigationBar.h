//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNavigationBar_h
#define IGNavigationBar_h
@import Foundation;

#include "UINavigationBar.h"

@class UIColor, UIImage, UIView;

@interface IGNavigationBar : UINavigationBar {
  /* instance variables */
  BOOL _maintainBarHeightWhenStatusBarHidden;
  BOOL _overlayHidesShadowImage;
  long long _barAppearance;
  UIView *_dividerLine;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _backgroundViewInsets;
}

@property (retain, nonatomic) UIView *contentOverlayView;
@property (retain, nonatomic) UIColor *overlayColor;
@property (nonatomic) double overlayAlpha;
@property (retain, @dynamic, nonatomic) UIImage *shadowImage;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setCenter:(struct CGPoint { double x0; double x1; })center;
- (void)layoutSubviews;
- (void)setDividerLineHidden:(BOOL)hidden;
@end

#endif /* IGNavigationBar_h */