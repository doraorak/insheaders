//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUnreadBubbleView_h
#define IGUnreadBubbleView_h
@import Foundation;

#include "UIView.h"
#include "IGPassthroughLabel.h"
#include "IGUnreadBubbleViewConfig.h"

@class CAGradientLayer;

@interface IGUnreadBubbleView : UIView {
  /* instance variables */
  IGUnreadBubbleViewConfig *_config;
  long long _unreadCount;
  IGPassthroughLabel *_label;
  double _labelOffsetX;
  CAGradientLayer *_gradient;
}

/* instance methods */
- (id)initWithConfig:(id)config;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setUnreadCount:(long long)count;
@end

#endif /* IGUnreadBubbleView_h */