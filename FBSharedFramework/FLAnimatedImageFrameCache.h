//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FLAnimatedImageFrameCache_h
#define FLAnimatedImageFrameCache_h
@import Foundation;

#include "FLAnimatedImageFrameCache.h"
#include "FLAnimatedImageFrameDataSource-Protocol.h"

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface FLAnimatedImageFrameCache : NSObject {
  /* instance variables */
  unsigned long long _requestedFrameIndex;
  NSMutableIndexSet *_cachedFrameIndexes;
  NSMutableIndexSet *_requestedFrameIndexes;
  NSMutableDictionary *_cachedFramesForIndexes;
  unsigned long long _frameCacheSizeMaxInternal;
  unsigned long long _memoryWarningCount;
  unsigned long long _frameCount;
  unsigned long long _frameCacheSizeOptimal;
  unsigned long long _posterImageFrameIndex;
  NSIndexSet *_allFramesIndexSet;
  NSObject<OS_dispatch_queue> *_serialQueue;
  FLAnimatedImageFrameCache *_weakProxy;
  NSObject<FLAnimatedImageFrameDataSource> *_dataSource;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _cachedFramesMutex;
}

/* class methods */
+ (void)initialize;
+ (void)registerInstanceOfClassForMemoryWarnings:(id)warnings;
+ (double)allFramesInMemorySizeLimitMB;
+ (void)setAllFramesInMemorySizeLimitMB:(double)mb;
+ (double)bufferedFramesSizeLimitMB;
+ (void)setBufferedFramesSizeLimitMB:(double)mb;

/* instance methods */
- (id)initWithFrameCount:(unsigned long long)count skippedFrameCount:(unsigned long long)count frameSize:(double)size posterImage:(id)image posterImageFrameIndex:(unsigned long long)index dataSource:(id)source;
- (void)dealloc;
- (id)posterImage;
- (id)dataSource;
- (id)cachedImageAtIndex:(unsigned long long)index;
- (id)weakProxy;
- (unsigned long long)frameCacheSizeCurrent;
- (void)setFrameCacheSizeMaxInternal:(unsigned long long)internal;
- (void)setCachedFramesForIndexes:(id)indexes;
- (id)frameIndexesToCache;
- (void)addFrameIndexesToCache:(id)cache;
- (void)cacheFrame:(id)frame atIndex:(unsigned long long)index;
- (id)synchronousImageAtIndex:(unsigned long long)index;
- (void)purgeFrameCacheIfNeeded;
- (void)growFrameCacheSizeAfterMemoryWarning:(id)warning;
- (void)resetFrameCacheSizeMaxInternal;
- (void)didReceiveMemoryWarning:(id)warning;
@end

#endif /* FLAnimatedImageFrameCache_h */
