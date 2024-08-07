//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCachedAnimatedWebP_h
#define FBCachedAnimatedWebP_h
@import Foundation;

#include "FBCachedImage.h"
#include "FLAnimatedImage.h"

@class NSData;

@interface FBCachedAnimatedWebP : FBCachedImage {
  /* instance variables */
  NSData *_data;
  struct CGImage * _image;
  unsigned long long _frameCount;
  FLAnimatedImage *_animatedImage;
}

@property (readonly) id animatedImageWithSingleFrame;

/* instance methods */
- (id)initWithData:(id)data;
- (id)initWithData:(id)data imageSize:(struct { unsigned long long x0; unsigned long long x1; })size frameCount:(unsigned long long)count;
- (void)dealloc;
- (BOOL)decodeIfNeeded;
- (void)setImage:(struct CGImage *)image;
- (struct CGImage *)image;
- (id)extraData;
- (unsigned long long)cost;
- (id)mediaType;
@end

#endif /* FBCachedAnimatedWebP_h */
