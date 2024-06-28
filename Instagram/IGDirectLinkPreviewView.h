//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectLinkPreviewView_h
#define IGDirectLinkPreviewView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectTextMessageBubbleView.h"

@class IGImageProgressView;
@protocol IGDirectLinkPreviewViewDelegate;

@interface IGDirectLinkPreviewView : UIView {
  /* instance variables */
  NSObject<IGDirectLinkPreviewViewDelegate> *_delegate;
  IGDirectTextMessageBubbleView *_textBubbleView;
  struct CGSize { double width; double height; } _textBubbleViewSize;
  struct CGSize { double width; double height; } _imageViewSize;
}

@property (readonly, nonatomic) IGImageProgressView *imageView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBackgroundColor:(id)color;
- (void)prepareForReuse;
- (void)layoutSubviews;
@end

#endif /* IGDirectLinkPreviewView_h */
