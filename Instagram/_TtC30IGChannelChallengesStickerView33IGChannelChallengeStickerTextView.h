//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC30IGChannelChallengesStickerView33IGChannelChallengeStickerTextView_h
#define _TtC30IGChannelChallengesStickerView33IGChannelChallengeStickerTextView_h
@import Foundation;

#include "IGBaseView.h"

@class UIColor, UILabel;

@interface _TtC30IGChannelChallengesStickerView33IGChannelChallengeStickerTextView : IGBaseView { // (Swift)
  /* instance variables */
   speechBubbleShapeLayer;
}

@property (nonatomic, retain) UILabel *challengeNameLabel;
@property (nonatomic, retain) UIColor *bubbleColor;

/* instance methods */
- (id)initWithChallengeNameLabel:(id)label;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC30IGChannelChallengesStickerView33IGChannelChallengeStickerTextView_h */
