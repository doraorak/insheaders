//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPostMessageBubbleView_h
#define IGDirectPostMessageBubbleView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectTextMessageBubbleView.h"

@class IGDirectMessageBlurredImageView, IGDirectMessageBubbleView, IGDirectReshareMessageHeaderView, IGImageProgressView, IGMediaOverlayView, IGRingViewSpecFactory, UIImageView;

@interface IGDirectPostMessageBubbleView : UIView {
  /* instance variables */
  IGDirectMessageBubbleView *_messageBubbleView;
  UIImageView *_tagIndicatorView;
  IGDirectTextMessageBubbleView *_captionTextView;
  IGDirectMessageBlurredImageView *_blurredImageView;
  struct CGSize { double width; double height; } _postContentSize;
  struct CGSize { double width; double height; } _captionSize;
  IGMediaOverlayView *_mediaOverlayView;
  IGRingViewSpecFactory *_ringViewSpecFactory;
}

@property (readonly, nonatomic) IGDirectReshareMessageHeaderView *headerView;
@property (readonly, nonatomic) IGImageProgressView *imageView;

/* instance methods */
- (id)initWithRingViewSpecFactory:(id)factory;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
@end

#endif /* IGDirectPostMessageBubbleView_h */
