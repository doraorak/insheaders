//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAMediaSource_MediaSource10_h
#define METAMediaSource_MediaSource10_h
@import Foundation;

@interface METAMediaSource (MediaSource10)
/* instance methods */
- (id)initWithImageURL:(id)url duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)initWithImageURL:(id)url duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration colorSpaceName:(const struct __CFString *)name;
- (id)initWithImageURL:(id)url duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration colorSpace:(struct CGColorSpace *)space;
- (id)initWithImageData:(id)data duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)initWithImageData:(id)data duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration colorSpaceName:(const struct __CFString *)name;
- (id)initWithImageData:(id)data duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration colorSpace:(struct CGColorSpace *)space;
@end

#endif /* METAMediaSource_MediaSource10_h */