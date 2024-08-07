//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedCustomAudioPlaying_Protocol_h
#define IGFeedCustomAudioPlaying_Protocol_h
@import Foundation;

@protocol IGFeedCustomAudioPlaying 

@property (readonly, nonatomic) long long audioAvailability;
@property (readonly, nonatomic) BOOL isAudioEnabled;

/* instance methods */
- (void)setAudioEnabled:(BOOL)enabled with:(long long)with;
- (BOOL)prefetchWhenAudioDisabled;
- (void)prepare;
- (void)play;
- (void)pause;
- (void)stop;
@end

#endif /* IGFeedCustomAudioPlaying_Protocol_h */
