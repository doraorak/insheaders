//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTimeBoundCache_h
#define IGTimeBoundCache_h
@import Foundation;

#include "IGDiskCache.h"

@class NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface IGTimeBoundCache : NSObject {
  /* instance variables */
  NSMutableOrderedSet *_entries;
  NSString *_metadataFileName;
  double _timeToLive;
  NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (readonly, nonatomic) IGDiskCache *diskCache;

/* instance methods */
- (id)initWithRootPath:(id)path name:(id)name timeToLive:(double)live diskCapacityInBytes:(long long)bytes;
- (void)_asyncSerializeEntrySetWithCompletion:(id /* block */)completion;
- (void)_asyncExpireItemsIfNeededWithCompletion:(id /* block */)completion;
- (id)_entries;
- (id)dataForKey:(id)key;
- (void)setData:(id)data forKey:(id)key;
@end

#endif /* IGTimeBoundCache_h */
