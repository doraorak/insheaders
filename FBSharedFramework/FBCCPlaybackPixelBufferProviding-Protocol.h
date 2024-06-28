//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCCPlaybackPixelBufferProviding_Protocol_h
#define FBCCPlaybackPixelBufferProviding_Protocol_h
@import Foundation;

@protocol FBCCPlaybackPixelBufferProviding <FBCCPlaybackControlling>

@property (readonly, nonatomic) struct OpaqueCMTimebase * timebase;
@property (readonly, nonatomic) BOOL isStatic;

/* instance methods */
- (struct { long long x0; int x1; unsigned int x2; long long x3; })providerTimeForHostTime:(double)time;
- (BOOL)hasNewPixelBufferForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (struct __CVBuffer *)copyPixelBufferForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time timeForDisplay:(struct  *)display;
@end

#endif /* FBCCPlaybackPixelBufferProviding_Protocol_h */