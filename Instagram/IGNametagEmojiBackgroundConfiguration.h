//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNametagEmojiBackgroundConfiguration_h
#define IGNametagEmojiBackgroundConfiguration_h
@import Foundation;

#include "IGNametagBackgroundConfiguration.h"

@class NSString, UIColor, UIImage;

@interface IGNametagEmojiBackgroundConfiguration : IGNametagBackgroundConfiguration {
  /* instance variables */
  NSString *_emojiString;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

/* instance methods */
@end

#endif /* IGNametagEmojiBackgroundConfiguration_h */