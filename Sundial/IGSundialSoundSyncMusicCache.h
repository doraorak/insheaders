//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialSoundSyncMusicCache_h
#define IGSundialSoundSyncMusicCache_h
@import Foundation;

#include "IGAPIClient-Protocol.h"

@class IGAsyncTask, NSDate;

@interface IGSundialSoundSyncMusicCache : NSObject {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  NSDate *_lastRefreshTime;
  BOOL _isUsingFakeAPI;
  IGAsyncTask *_suggestedMusic;
}

/* instance methods */
- (id)initWithNetworker:(id)networker;
- (id)suggestedMusic;
- (id)suggestedMusicForContextualMusic:(id)music;
- (void)_fetchMusic:(id)music;
@end

#endif /* IGSundialSoundSyncMusicCache_h */