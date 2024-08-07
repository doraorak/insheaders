//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC19IGVideoPlayerWarmup28IGVideoPlayerWarmupOperation_IGVideoPlayerWarmup_h
#define _TtC19IGVideoPlayerWarmup28IGVideoPlayerWarmupOperation_IGVideoPlayerWarmup_h
@import Foundation;

@interface _TtC19IGVideoPlayerWarmup28IGVideoPlayerWarmupOperation (IGVideoPlayerWarmup) <IGVideoPlayerWarmupListener>
/* instance methods */
- (void)videoPlayer:(id)player didWarmupWithPlaybackReason:(long long)reason;
- (void)videoPlayer:(id)player didFailToWarmupWithError:(id)error;
@end

#endif /* _TtC19IGVideoPlayerWarmup28IGVideoPlayerWarmupOperation_IGVideoPlayerWarmup_h */
