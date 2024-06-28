//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AVPictureInPictureSampleBufferPlaybackDelegate_Protocol_h
#define AVPictureInPictureSampleBufferPlaybackDelegate_Protocol_h
@import Foundation;

@protocol AVPictureInPictureSampleBufferPlaybackDelegate <NSObject>
/* instance methods */
- (void)pictureInPictureController:(id)controller setPlaying:(BOOL)playing;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })pictureInPictureControllerTimeRangeForPlayback:(id)playback;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)paused;
- (void)pictureInPictureController:(id)controller didTransitionToRenderSize:(struct { int x0; int x1; })size;
- (void)pictureInPictureController:(id)controller skipByInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval completionHandler:(id /* block */)handler;
@optional
/* instance methods */
- (BOOL)pictureInPictureControllerShouldProhibitBackgroundAudioPlayback:(id)playback;
@end

#endif /* AVPictureInPictureSampleBufferPlaybackDelegate_Protocol_h */
