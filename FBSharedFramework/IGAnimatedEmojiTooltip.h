//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnimatedEmojiTooltip_h
#define IGAnimatedEmojiTooltip_h
@import Foundation;

#include "IGAnimatedEmoji.h"
#include "IGAnimatedEmojiTooltipButton.h"
#include "IGAnimatedEmojiTooltipContainerView.h"

@protocol IGAnimatedEmojiTooltipDelegate;

@interface IGAnimatedEmojiTooltip : NSObject {
  /* instance variables */
  IGAnimatedEmojiTooltipContainerView *_containerView;
  IGAnimatedEmojiTooltipButton *_tooltipView;
  IGAnimatedEmoji *_animatedEmoji;
}

@property (weak, nonatomic) NSObject<IGAnimatedEmojiTooltipDelegate> *delegate;

/* class methods */
+ (id)newWithAnimatedEmoji:(id)emoji;

/* instance methods */
- (id)initWithAnimatedEmoji:(id)emoji;
- (void)dealloc;
- (void)dismiss;
- (void)_didTapTooltip;
@end

#endif /* IGAnimatedEmojiTooltip_h */