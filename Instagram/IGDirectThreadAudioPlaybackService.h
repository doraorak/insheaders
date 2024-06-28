//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadAudioPlaybackService_h
#define IGDirectThreadAudioPlaybackService_h
@import Foundation;

#include "IGDirectAudioMessagePlaybackService.h"
#include "NSObject-Protocol.h"

@class IGAudioSessionClient, IGDirectCache, NSString;

@interface IGDirectThreadAudioPlaybackService : NSObject<NSObject> {
  /* instance variables */
  IGDirectCache *_directCache;
  IGDirectAudioMessagePlaybackService *_audioPlaybackService;
  NSString *_currentUserPk;
  NSString *_threadId;
  NSString *_currentlyPlayingMessageId;
  IGAudioSessionClient *_audioSessionClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCurrentUserPk:(id)pk directCache:(id)cache playbackService:(id)service;
- (void)stopPlaying;
- (void)didUpdateAudioMessagePlaybackStateWithMetadata:(id)metadata;
- (void)didUpdateAudioMessageProgressWithMetadata:(id)metadata progress:(double)progress;
- (void)didPlayToEndWithMetadata:(id)metadata;
@end

#endif /* IGDirectThreadAudioPlaybackService_h */
