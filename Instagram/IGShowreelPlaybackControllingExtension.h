//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShowreelPlaybackControllingExtension_h
#define IGShowreelPlaybackControllingExtension_h
@import Foundation;

#include "SNPlaybackFeatureExtension-Protocol.h"
#include "SRPlaybackControlling-Protocol.h"
#include "SRPlaybackExtendable-Protocol.h"

@class NSString;

@interface IGShowreelPlaybackControllingExtension : NSObject<SNPlaybackFeatureExtension, SRPlaybackControlling> {
  /* instance variables */
  NSObject<SRPlaybackExtendable> *_playback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) double playbackDuration;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isFinished;

/* instance methods */
- (void)prepareExtensionWithPlayback:(id)playback;
- (id)extensionView;
- (id)extensionName;
- (void)play;
- (void)playFromProgress:(double)progress;
- (void)pause;
- (void)wait;
- (void)seekToProgress:(double)progress;
- (void)stop;
@end

#endif /* IGShowreelPlaybackControllingExtension_h */