//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFPixelBufferPool_h
#define FNFPixelBufferPool_h
@import Foundation;

@interface FNFPixelBufferPool : NSObject
/* class methods */
+ (struct __CVPixelBufferPool *)createPixelBufferPool:(struct CGSize { double x0; double x1; })pool pixelFormat:(unsigned int)format;
+ (struct __CVPixelBufferPool *)createPixelBufferPool:(struct CGSize { double x0; double x1; })pool pixelFormat:(unsigned int)format allocationThreshold:(unsigned int)threshold minimumBufferCount:(unsigned int)count maximumBufferAge:(double)age;
+ (struct __CVPixelBufferPool *)createPixelBufferPool:(struct CGSize { double x0; double x1; })pool pixelFormat:(unsigned int)format extraPixelBufferAttributes:(id)attributes;
@end

#endif /* FNFPixelBufferPool_h */