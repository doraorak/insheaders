//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMediaCompositionView_IGStoryMediaPlaybackControllerProtocol_h
#define IGStoryMediaCompositionView_IGStoryMediaPlaybackControllerProtocol_h
@import Foundation;

@interface IGStoryMediaCompositionView (IGStoryMediaPlaybackControllerProtocol) <IGStoryMediaPlaybackControllerProtocol>
/* instance methods */
- (double)volume;
- (void)setVolume:(double)volume;
- (double)playbackRate;
- (double)currentPlaybackTime;
- (void)setCurrentPlaybackTime:(double)time;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
@end

#endif /* IGStoryMediaCompositionView_IGStoryMediaPlaybackControllerProtocol_h */