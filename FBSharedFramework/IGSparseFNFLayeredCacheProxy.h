//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSparseFNFLayeredCacheProxy_h
#define IGSparseFNFLayeredCacheProxy_h
@import Foundation;

#include "FNFCacheWritePolicy.h"
#include "FNFLayeredCache.h"
#include "IGDiskCache.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGSparseFNFLayeredCacheProxy : NSObject<NSObject> {
  /* instance variables */
  FNFLayeredCache *_layeredCache;
  IGDiskCache *_igDiskCache;
  FNFCacheWritePolicy *_writePolicy;
  unsigned long long _diskCapacityInBytes;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long capacityInBytes;
@property (readonly, nonatomic) unsigned long long maxFileCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMemoryCache:(id)cache igDiskCache:(id)cache;
- (id)initWithMemoryCache:(id)cache diskCache:(id)cache;
- (void)updateWithConfig:(struct IGSparseDiskCacheConfig { BOOL x0; BOOL x1; BOOL x2; struct IGSparseDiskCachePrefetchConfig { BOOL x0; long long x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } x3; long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; long long x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; unsigned long long x15; BOOL x16; struct IGSparseFNFCacheWritePolicyConfig { BOOL x0; BOOL x1; long long x2; long long x3; long long x4; long long x5; } x17; BOOL x18; BOOL x19; BOOL x20; long long x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; })config;
- (unsigned long long)dataLengthForKey:(id)key;
- (id)inputStreamForKey:(id)key;
- (id)outputStreamForKey:(id)key append:(BOOL)append analyticsModule:(id)module;
- (id)outputStreamForKey:(id)key append:(BOOL)append analyticsTags:(id)tags;
- (BOOL)containsDataForKey:(id)key;
- (id)cachePathForKey:(id)key;
- (void)removeDataForKey:(id)key;
- (id)dataForKey:(id)key;
- (id)removeAllDataWithDeletionBlock:(id /* block */)block;
- (void)setData:(id)data forKey:(id)key;
- (void)setData:(id)data forKey:(id)key atomically:(BOOL)atomically;
- (void)updateAccessTimeForKey:(id)key;
- (BOOL)isEmpty;
@end

#endif /* IGSparseFNFLayeredCacheProxy_h */
