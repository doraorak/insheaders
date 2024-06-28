//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentInnerReplyingToBanner_h
#define IGCommentInnerReplyingToBanner_h
@import Foundation;

#include "UIView.h"

@class CAShapeLayer, UIButton, UILabel;
@protocol IGCommentInnerReplyingToBannerDelegate;

@interface IGCommentInnerReplyingToBanner : UIView {
  /* instance variables */
  CAShapeLayer *_backgroundLayer;
  UILabel *_titleLabel;
  UIButton *_closeButton;
  BOOL _translucentStyleEnabled;
}

@property (weak, nonatomic) NSObject<IGCommentInnerReplyingToBannerDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)_didTapCloseButton;
@end

#endif /* IGCommentInnerReplyingToBanner_h */