//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdsAudioManager_h
#define IGAdsAudioManager_h
@import Foundation;

#include "IGUserSession.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface IGAdsAudioManager : NSObject {
  /* instance variables */
  NSMutableDictionary *_loggerStoreByPK;
  NSMutableArray *_availablePlayers;
  NSMutableDictionary *_playerStoreByPK;
  IGUserSession *_userSession;
}

@property (readonly, nonatomic) NSString *recentActiveAudioPlayerKey;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)_setReadyToPlayStateForLogger:(id)logger withPK:(id)pk;
- (void)_logIfhasErrorForLogger:(id)logger withPK:(id)pk;
@end

#endif /* IGAdsAudioManager_h */
