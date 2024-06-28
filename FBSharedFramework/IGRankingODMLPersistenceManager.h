//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRankingODMLPersistenceManager_h
#define IGRankingODMLPersistenceManager_h
@import Foundation;

#include "IGObjectDiskStorage.h"

@interface IGRankingODMLPersistenceManager : NSObject {
  /* instance variables */
  IGObjectDiskStorage *_prefetchLastPositiveInboxDataCache;
  IGObjectDiskStorage *_prefetchShareSheetInteractionDataCache;
  IGObjectDiskStorage *_prefetchNewFollowingEventsCache;
}

/* instance methods */
- (id)initWithUserStore:(id)store diskManager:(id)manager configs:(id)configs;
@end

#endif /* IGRankingODMLPersistenceManager_h */