//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCreativeTransformationsPlayback_Protocol_h
#define IGCreativeTransformationsPlayback_Protocol_h
@import Foundation;

@protocol IGCreativeTransformationsPlayback <NSObject>
/* instance methods */
- (void)play;
- (void)pause;
- (void)stop;
- (BOOL)isPlaying;
- (void)seekToBeginning;
- (void)seekToTime:(double)time;
- (void)seekToTime:(double)time;
- (double)duration;
- (double)progress;
- (void)setAudioEnabled:(BOOL)enabled;
@end

#endif /* IGCreativeTransformationsPlayback_Protocol_h */