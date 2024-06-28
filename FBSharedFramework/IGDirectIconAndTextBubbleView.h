//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectIconAndTextBubbleView_h
#define IGDirectIconAndTextBubbleView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextView.h"
#include "IGDirectGradientView.h"
#include "IGDirectIconAndTextBubbleViewModel.h"

@class UIImageView, UIView;

@interface IGDirectIconAndTextBubbleView : UIView {
  /* instance variables */
  IGDirectIconAndTextBubbleViewModel *_viewModel;
  IGDirectGradientView *_contentView;
  UIView *_iconBackgroundView;
  UIImageView *_iconView;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _bubbleInsets;
  struct CGSize { double width; double height; } _styledTextSize;
  BOOL _hasIconBackground;
  struct CGSize { double width; double height; } _iconSize;
}

@property (retain, nonatomic) UIView *containerView;
@property (readonly, nonatomic) IGCoreTextView *textView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
@end

#endif /* IGDirectIconAndTextBubbleView_h */