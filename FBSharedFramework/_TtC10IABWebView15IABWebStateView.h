//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC10IABWebView15IABWebStateView_h
#define _TtC10IABWebView15IABWebStateView_h
@import Foundation;

#include "UIView.h"

@class UIColor, UIView;

@interface _TtC10IABWebView15IABWebStateView : UIView // (Swift)

@property (nonatomic) long long state;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *errorView;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) BOOL opaque;

/* instance methods */
- (id)initWithContentView:(id)view errorView:(id)view;
- (id)initWithCoder:(id)coder;
- (BOOL)isOpaque;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC10IABWebView15IABWebStateView_h */
