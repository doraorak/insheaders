//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryAnimatedStickerViewSnapshotProvider_h
#define IGStoryAnimatedStickerViewSnapshotProvider_h
@import Foundation;

#include "IGDynamicOverlayImageProvider.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableArray;

@interface IGStoryAnimatedStickerViewSnapshotProvider : IGDynamicOverlayImageProvider<NSSecureCoding> {
  /* instance variables */
  double _startTime;
  NSMutableArray *_frames;
  BOOL _supportsHDR;
}

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double frameRate;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStickerView:(id)view startTime:(double)time trimmedStartTime:(double)time duration:(double)duration frameRate:(double)rate shouldCenterTextLabelVertically:(BOOL)vertically shouldMaskIfCornerRadius:(BOOL)radius;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)imageForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (BOOL)supportsHDR;
@end

#endif /* IGStoryAnimatedStickerViewSnapshotProvider_h */
