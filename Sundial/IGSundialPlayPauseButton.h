//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialPlayPauseButton_h
#define IGSundialPlayPauseButton_h
@import Foundation;

#include "IGBouncyButton.h"

@class UIImageView;

@interface IGSundialPlayPauseButton : IGBouncyButton {
  /* instance variables */
  UIImageView *_playIcon;
  UIImageView *_pauseIcon;
}

@property (nonatomic) BOOL playing;

/* instance methods */
- (id)init;
- (id)initWithSmallSize;
- (id)initWithLargeSize;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)isPlaying;
- (id)accessibilityLabel;
@end

#endif /* IGSundialPlayPauseButton_h */