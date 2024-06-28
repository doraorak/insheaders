//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImageDiskCache_h
#define IGImageDiskCache_h
@import Foundation;

#include "IGCacheEvictionLogger.h"
#include "IGImageDataCaching-Protocol.h"

@class NSString;
@protocol IGDataCaching;

@interface IGImageDiskCache : NSObject<IGImageDataCaching> {
  /* instance variables */
  IGCacheEvictionLogger *_logger;
}

@property (readonly, nonatomic) NSObject<IGDataCaching> *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRootPath:(id)path name:(id)name diskCapacityInBytes:(unsigned long long)bytes maxFileCount:(unsigned long long)count evictionLogger:(id)logger userLauncherSet:(id)set deviceLauncherSet:(id)set evictionCompletion:(id /* block */)completion;
- (BOOL)containsImageDataForKey:(id)key;
- (id)imageDataForKey:(id)key;
- (void)removeAllImageData;
- (void)setImageData:(id)data withURL:(id)url forKey:(id)key forModule:(id)module forFetchType:(long long)type forScans:(id)scans;
- (void)updateAccessTimeForImageDataWithKey:(id)key;
@end

#endif /* IGImageDiskCache_h */
