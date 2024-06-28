//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSparseDiskCache_h
#define IGSparseDiskCache_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGSparseDiskMetadataCache.h"

@class NSString;
@protocol IGDataCaching;

@interface IGSparseDiskCache : NSObject {
  /* instance variables */
  NSObject<IGDataCaching> *_diskCache;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  id /* block */ _evictionCompletion;
  NSObject<IGDataCaching> *_prefetchDiskCache;
  unsigned long long _firstSegmentOversizeThreshold;
  NSString *_rootPath;
  unsigned long long _inPlayCapacityInBytes;
  unsigned long long _maxFileCount;
}

@property (readonly, nonatomic) IGSparseDiskMetadataCache *metadataCache;

/* instance methods */
- (id)initWithRootPath:(id)path prefetchDiskCapacityInBytes:(unsigned long long)bytes inPlayCapacityInBytes:(unsigned long long)bytes maxFileCount:(unsigned long long)count diskCacheConfig:(struct IGSparseDiskCacheConfig { BOOL x0; BOOL x1; BOOL x2; struct IGSparseDiskCachePrefetchConfig { BOOL x0; long long x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } x3; long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; long long x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; unsigned long long x15; BOOL x16; struct IGSparseFNFCacheWritePolicyConfig { BOOL x0; BOOL x1; long long x2; long long x3; long long x4; long long x5; } x17; BOOL x18; BOOL x19; BOOL x20; long long x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; })config evictionCompletion:(id /* block */)completion;
- (void)_setupPrefetchCacheWithConfig:(struct IGSparseDiskCacheConfig { BOOL x0; BOOL x1; BOOL x2; struct IGSparseDiskCachePrefetchConfig { BOOL x0; long long x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } x3; long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; long long x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; unsigned long long x15; BOOL x16; struct IGSparseFNFCacheWritePolicyConfig { BOOL x0; BOOL x1; long long x2; long long x3; long long x4; long long x5; } x17; BOOL x18; BOOL x19; BOOL x20; long long x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; })config cacheCapacityInBytes:(long long)bytes;
- (void)_updateWithConfig:(struct IGSparseDiskCacheConfig { BOOL x0; BOOL x1; BOOL x2; struct IGSparseDiskCachePrefetchConfig { BOOL x0; long long x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } x3; long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; long long x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; unsigned long long x15; BOOL x16; struct IGSparseFNFCacheWritePolicyConfig { BOOL x0; BOOL x1; long long x2; long long x3; long long x4; long long x5; } x17; BOOL x18; BOOL x19; BOOL x20; long long x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; })config;
- (id)_layeredCacheForPrefetchingWithConfig:(struct IGSparseDiskCacheConfig { BOOL x0; BOOL x1; BOOL x2; struct IGSparseDiskCachePrefetchConfig { BOOL x0; long long x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } x3; long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; long long x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; unsigned long long x15; BOOL x16; struct IGSparseFNFCacheWritePolicyConfig { BOOL x0; BOOL x1; long long x2; long long x3; long long x4; long long x5; } x17; BOOL x18; BOOL x19; BOOL x20; long long x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; })config;
- (id)_layeredCacheWithConfig:(struct IGSparseDiskCacheConfig { BOOL x0; BOOL x1; BOOL x2; struct IGSparseDiskCachePrefetchConfig { BOOL x0; long long x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } x3; long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; long long x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; unsigned long long x15; BOOL x16; struct IGSparseFNFCacheWritePolicyConfig { BOOL x0; BOOL x1; long long x2; long long x3; long long x4; long long x5; } x17; BOOL x18; BOOL x19; BOOL x20; long long x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; })config;
- (id)_diskCacheWithConfig:(struct IGSparseDiskCacheConfig { BOOL x0; BOOL x1; BOOL x2; struct IGSparseDiskCachePrefetchConfig { BOOL x0; long long x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } x3; long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; long long x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; unsigned long long x15; BOOL x16; struct IGSparseFNFCacheWritePolicyConfig { BOOL x0; BOOL x1; long long x2; long long x3; long long x4; long long x5; } x17; BOOL x18; BOOL x19; BOOL x20; long long x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; })config;
- (void)_logEvictionCachePathWhenMD5IsDisabled:(id)disabled evictionReason:(id)reason;
- (id)allRangesForStreamDataKey:(id)key;
- (id)allCacheSpansForStreamDataKey:(id)key;
- (id)allMergedRangesForStreamDataKey:(id)key;
- (BOOL)_canCacheStreamDataOnPrefetchDiskCacheWithRangeToLoad:(struct _NSRange { unsigned long long x0; unsigned long long x1; })load;
- (id)inputStreamForStreamDataKey:(id)key offset:(long long)offset;
- (id)outputStreamForStreamDataKey:(id)key rangeToLoad:(struct _NSRange { unsigned long long x0; unsigned long long x1; })load analyticsTags:(id)tags;
- (BOOL)containsPrefetchedDataForStreamDataKey:(id)key;
- (BOOL)containsCachedDataForStreamDataKey:(id)key offset:(unsigned long long)offset length:(unsigned long long)length;
- (id)evictionLoggingUseOnlyMethodCachePathForStreamDataKey:(id)key offset:(long long)offset;
- (id)evictionLoggingUseOnlyMethodCachePathForStreamDataKey:(id)key;
- (id)evictionLoggingUseOnlyMethodCachePathForStreamDataKey:(id)key offset:(long long)offset cacheType:(long long)type;
- (id)evictionLoggingUseOnlyMethodCachePathForStreamDataKey:(id)key cacheType:(long long)type;
- (void)setStreamData:(id)data forStreamDataKey:(id)key offset:(long long)offset;
- (id)_dataForStreamDataKey:(id)key offset:(long long)offset;
- (id)removeAllDataForStreamDataKey:(id)key;
- (id)removeAllDataWithDeletionBlock:(id /* block */)block;
- (void)setAnalyticsLogger:(id)logger;
- (id /* block */)_deletionWithCache:(id)cache withKey:(id)key;
- (id)_diskCacheForWriteWithStreamDataKey:(id)key;
- (id)_diskCacheForOutputStreamWithStreamDataKey:(id)key rangeToLoad:(struct _NSRange { unsigned long long x0; unsigned long long x1; })load;
@end

#endif /* IGSparseDiskCache_h */
