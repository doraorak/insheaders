//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18IGMagicModSharedUI22IGTrendingPromptButton_h
#define _TtC18IGMagicModSharedUI22IGTrendingPromptButton_h
@import Foundation;

#include "IGBouncyButton.h"

@interface _TtC18IGMagicModSharedUI22IGTrendingPromptButton : IGBouncyButton { // (Swift)
  /* instance variables */
   promptText;
   countLabel;
   icon;
   orientation;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC18IGMagicModSharedUI22IGTrendingPromptButton_h */
