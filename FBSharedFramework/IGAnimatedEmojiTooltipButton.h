//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnimatedEmojiTooltipButton_h
#define IGAnimatedEmojiTooltipButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGAnimatedEmoji.h"
#include "IGAnimatedEmojiView.h"

@class CAShapeLayer;

@interface IGAnimatedEmojiTooltipButton : IGBouncyButton {
  /* instance variables */
  CAShapeLayer *_shapeLayer;
  IGAnimatedEmojiView *_animatedEmojiView;
  IGAnimatedEmoji *_animatedEmoji;
}

/* class methods */
+ (id)newWithAnimatedEmoji:(id)emoji;

/* instance methods */
- (id)initWithAnimatedEmoji:(id)emoji;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* IGAnimatedEmojiTooltipButton_h */
