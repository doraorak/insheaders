//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecentStickerMemoryDataStore_h
#define IGDirectRecentStickerMemoryDataStore_h
@import Foundation;

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface IGDirectRecentStickerMemoryDataStore : NSObject {
  /* instance variables */
  unsigned long long _maximumStickers;
  NSMutableOrderedSet *_orderedRecentStickerIds;
  NSMutableDictionary *_orderedRecentStickersByStickerId;
  NSArray *_orderedRecentStickers;
}

/* instance methods */
- (id)initWithMaximumStickers:(unsigned long long)stickers;
@end

#endif /* IGDirectRecentStickerMemoryDataStore_h */
