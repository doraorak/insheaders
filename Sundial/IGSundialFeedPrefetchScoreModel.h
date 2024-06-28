//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialFeedPrefetchScoreModel_h
#define IGSundialFeedPrefetchScoreModel_h
@import Foundation;

#include "IGSundialFeedPrefetchConfig.h"

@class NSDate, NSMutableArray, NSString;

@interface IGSundialFeedPrefetchScoreModel : NSObject {
  /* instance variables */
  IGSundialFeedPrefetchConfig *_config;
  NSMutableArray *_trackedSignals;
  NSMutableArray *_pendingSignals;
  long long _score;
  NSString *_audioId;
  NSString *_effectId;
  NSDate *_unlockDate;
  BOOL _locked;
  unsigned long long _feedType;
}

/* instance methods */
- (id)initWithAudioId:(id)id effectId:(id)id config:(id)config;
- (BOOL)isLocked;
- (id)audioId;
- (id)effectId;
- (unsigned long long)feedType;
- (long long)score;
@end

#endif /* IGSundialFeedPrefetchScoreModel_h */
