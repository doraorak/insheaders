//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryConsumedMediaTracker_h
#define IGStoryConsumedMediaTracker_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSMutableSet, NSString;

@interface IGStoryConsumedMediaTracker : NSObject<NSObject> {
  /* instance variables */
  NSMutableSet *_consumedMediaIDInCurrentSession;
  NSMutableSet *_seenAdOrNetegoReelIDInCurrentSession;
  long long _consumedMediaCountSincePreviousAdImpression;
  long long _consumedMediaCountSincePreviousNetegoImpression;
  NSString *_previouslySeenAdReelID;
  NSString *_previouslySeenNetegoReelID;
}

@property (copy, nonatomic) NSString *lastInsertedAdOrNetegoReelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (long long)consumedMediaCountSincePreviousItemType:(unsigned long long)type;
- (long long)lastAdReelIndexWithImpressedAdReelIndex:(long long)index allSurfaceDataSourceItems:(id)items;
- (long long)adConsumedMediaGapWithImpressedAdReelIndex:(long long)index lastAdReelIndex:(long long)index allSurfaceDataSourceItems:(id)items;
@end

#endif /* IGStoryConsumedMediaTracker_h */
