//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGAudioTestAudioPlayback38IGAudioTestAudioPlaybackViewController_IGAudioTestAudioPlayback1_h
#define _TtC24IGAudioTestAudioPlayback38IGAudioTestAudioPlaybackViewController_IGAudioTestAudioPlayback1_h
@import Foundation;

@interface _TtC24IGAudioTestAudioPlayback38IGAudioTestAudioPlaybackViewController (IGAudioTestAudioPlayback1) <IGStoryAudioPlayerDelegate>
/* instance methods */
- (void)storyAudioPlayer:(id)player didUpdateToPlaybackTime:(double)time;
- (void)storyAudioPlayer:(id)player didUpdateStallState:(BOOL)state;
- (void)storyAudioPlayer:(id)player didDetermineAssetPlayabilityStatus:(BOOL)status;
- (void)storyAudioPlayer:(id)player didDetermineDuration:(double)duration ofAsset:(id)asset;
- (void)storyAudioPlayer:(id)player effectivePlaybackRateDidChange:(double)change;
- (void)storyAudioPlayerDidPlayToEnd:(id)end;
@end

#endif /* _TtC24IGAudioTestAudioPlayback38IGAudioTestAudioPlaybackViewController_IGAudioTestAudioPlayback1_h */