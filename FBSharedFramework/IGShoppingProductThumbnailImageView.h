//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductThumbnailImageView_h
#define IGShoppingProductThumbnailImageView_h
@import Foundation;

#include "UIControl.h"
#include "IGBlurredImageView.h"
#include "IGImageView.h"
#include "IGTapButton.h"

@class CAShapeLayer, NSURL, UIImageView;

@interface IGShoppingProductThumbnailImageView : UIControl {
  /* instance variables */
  CAShapeLayer *_soldOutStrikethroughLayer;
  UIImageView *_unavailableIconImageView;
  IGBlurredImageView *_blurredImageView;
  UIImageView *_hiddenIconImageView;
}

@property (readonly, nonatomic) IGImageView *imageView;
@property (readonly, nonatomic) IGTapButton *overlayButton;
@property (retain, nonatomic) NSURL *blurredImageURL;
@property (nonatomic) long long thumbnailState;
@property (nonatomic) BOOL highlightable;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame shouldUseProgressiveJPEG:(BOOL)jpeg placeholderConfig:(id)config;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setContentMode:(long long)mode;
- (BOOL)isHighlightable;
@end

#endif /* IGShoppingProductThumbnailImageView_h */
