//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStreamingVideoDataLoader_h
#define IGStreamingVideoDataLoader_h
@import Foundation;

#include "FNFPrefetchEventManager.h"
#include "IGAuthHeaderManaging-Protocol.h"
#include "IGCacheEvictionLogger.h"
#include "IGSparseDiskCache.h"
#include "IGStreamingVideoCacheDataLoader.h"
#include "IGStreamingVideoCacheLogger.h"
#include "IGStreamingVideoCacheRequest.h"
#include "IGStreamingVideoMetaDataCacheEntry.h"
#include "IGStreamingVideoNetworkDataLoader.h"
#include "IGUserLauncherSet-Protocol.h"
#include "NSObject-Protocol.h"

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface IGStreamingVideoDataLoader : NSObject<NSObject> {
  /* instance variables */
  IGSparseDiskCache *_diskCache;
  NSObject<OS_dispatch_queue> *_queue;
  id /* block */ _completionBlock;
  IGStreamingVideoCacheDataLoader *_cacheDataLoader;
  IGStreamingVideoNetworkDataLoader *_networkDataLoader;
  NSObject<IGUserLauncherSet> *_userLauncherSet;
  NSObject<IGAuthHeaderManaging> *_authHeaderManager;
  BOOL _enablePrefetchIntercept;
  BOOL _disablePriorityUpdateOnCancel;
  NSMutableSet *_parkingRequests;
  BOOL _canceled;
  unsigned long long _bytesDownloaded;
  IGStreamingVideoMetaDataCacheEntry *_metaDataEntry;
  IGStreamingVideoCacheLogger *_cacheDataLoadingLogger;
  IGCacheEvictionLogger *_cacheEvictionLogger;
  FNFPrefetchEventManager *_prefetchEventManager;
}

@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly) IGStreamingVideoCacheRequest *originalRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequest:(id)request requestBehavior:(unsigned long long)behavior diskCache:(id)cache queue:(id)queue videoRequestTracker:(id)tracker competingNetworkRequestTracker:(id)tracker userLauncherSet:(id)set authHeaderManager:(id)manager prefetchEventManager:(id)manager completionBlock:(id /* block */)block;
- (void)loadData;
- (void)attachRequest:(id)request callback:(id /* block */)callback;
- (void)cancelRequest:(id)request;
- (void)cancelDataLoading;
- (BOOL)hasBeenCanceled;
- (void)setIsPlaying:(BOOL)playing;
- (BOOL)isSafeToAttachRequest:(id)request;
- (void)convertToTollFree;
- (void)networkDataLoader:(id)loader didEncounterError:(id)error;
- (void)networkDataLoader:(id)loader didReceiveMetaData:(id)data liveTraceId:(id)id liveParentSource:(id)source;
- (void)networkDataLoader:(id)loader didReceiveBytes:(const char *)bytes length:(unsigned long long)length contentLength:(long long)length bytesSource:(long long)source statusCode:(long long)code numberOfRetries:(long long)retries;
- (void)networkDataLoaderDidCompleteDataDownload:(id)download;
@end

#endif /* IGStreamingVideoDataLoader_h */