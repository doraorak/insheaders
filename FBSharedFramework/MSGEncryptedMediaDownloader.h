//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MSGEncryptedMediaDownloader_h
#define MSGEncryptedMediaDownloader_h
@import Foundation;

#include "MOSImageDownloading-Protocol.h"
#include "MSGEncryptedDiskCache.h"
#include "MSGEncryptedMediaDownloading-Protocol.h"
#include "MSGMosaicMediaNetworking-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface MSGEncryptedMediaDownloader : NSObject<MSGEncryptedMediaDownloading> {
  /* instance variables */
  NSObject<MSGMosaicMediaNetworking> *_networker;
  NSObject<MOSImageDownloading> *_encryptedDownloader;
  MSGEncryptedDiskCache *_encryptedDiskCache;
  NSObject<OS_dispatch_queue> *_videoDownloadQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworker:(id)networker encryptedDiskCache:(id)cache mosaicMemoryCache:(id)cache downloaderCacheConfig:(struct MOSImageDownloaderCacheConfig { BOOL x0; BOOL x1; })config imageFormats:(id)formats logger:(id)logger experimentConfig:(struct MSGEncryptedMediaDownloaderExperimentsConfig { BOOL x0; BOOL x1; })config;
- (void)setMailbox:(id)mailbox;
- (void)loadEncryptedMediaWithMediaURL:(id)url requestToken:(id)token downloaderOptions:(struct { id x0; long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; BOOL x6; id x7; unsigned long long x8; })options callbackQueue:(id)queue downloadProgressBlock:(id /* block */)block completion:(id /* block */)completion;
- (void)removeImageFromCache:(id)cache cacheRemovalSource:(unsigned long long)source;
- (void)cancelImageDownload:(id)download;
- (void)downloadEncryptedVideoWithMediaURL:(id)url requestToken:(id)token encryptedPayload:(id)payload completion:(id /* block */)completion;
@end

#endif /* MSGEncryptedMediaDownloader_h */