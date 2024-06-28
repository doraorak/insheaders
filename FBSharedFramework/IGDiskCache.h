//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiskCache_h
#define IGDiskCache_h
@import Foundation;

#include "IGRemovalManager.h"
#include "NSObject-Protocol.h"

@class NSFileManager, NSString;

@interface IGDiskCache : NSObject<NSObject> {
  /* instance variables */
  NSString *_cachePath;
  NSString *_rootPath;
  unsigned long long _trimmingTask;
  double _lastTrimTime;
  id /* block */ _trimmingBlock;
  BOOL _cancelTrimmingOnForeground;
  id /* block */ _evictionCompletion;
  NSFileManager *_fileManager;
  IGRemovalManager *_removalManager;
  BOOL _shouldMapAllFiles;
  BOOL _shouldMapLargeFles;
  BOOL _disableMD5;
  unsigned long long _streamMinimumWriteSize;
  BOOL _enableFNF;
  unsigned long long _diskCapacityInBytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long capacityInBytes;
@property (readonly, nonatomic) unsigned long long maxFileCount;

/* instance methods */
- (id)initWithRootPath:(id)path name:(id)name diskCapacityInBytes:(unsigned long long)bytes maxFileCount:(unsigned long long)count shouldMapAllFiles:(BOOL)files shouldMapLargeFles:(BOOL)fles disableMD5:(BOOL)md5 evictionCompletion:(id /* block */)completion;
- (id)initWithRootPath:(id)path name:(id)name diskCapacityInBytes:(unsigned long long)bytes maxFileCount:(unsigned long long)count evictionCompletion:(id /* block */)completion;
- (id)inputStreamForKey:(id)key;
- (id)outputStreamForKey:(id)key append:(BOOL)append analyticsTags:(id)tags;
- (id)outputStreamForKey:(id)key append:(BOOL)append analyticsModule:(id)module;
- (id)dataForKey:(id)key;
- (id)dataForKey:(id)key analyticsTags:(id)tags;
- (unsigned long long)dataLengthForKey:(id)key;
- (void)setData:(id)data forKey:(id)key;
- (void)setData:(id)data forKey:(id)key analyticsTags:(id)tags;
- (void)setData:(id)data forKey:(id)key atomically:(BOOL)atomically;
- (void)removeDataForKey:(id)key;
- (BOOL)containsDataForKey:(id)key;
- (id)cachePathForKey:(id)key;
- (void)updateAccessTimeForKey:(id)key;
- (void)setStringAttribute:(id)attribute forCacheKey:(id)key andTag:(const char *)tag;
- (id)removeAllDataWithDeletionBlock:(id /* block */)block;
- (BOOL)isEmpty;
- (void)_startBackgroundCacheTrimmingTask;
- (void)_cancelBackgroundCacheTrimmingTask;
- (void)_trimCache;
- (void)removeAllData:(id /* block */)data;
- (id)dataInputStreamForKey:(id)key analyticsTags:(id)tags;
- (id)dataOutputStreamForKey:(id)key analyticsTags:(id)tags;
- (void)applicationWillEnterForegroundListener;
@end

#endif /* IGDiskCache_h */