//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNAnimationMultiImagesProvider_h
#define SNAnimationMultiImagesProvider_h
@import Foundation;

#include "SNAnimationMultiImagesProviderDelegate-Protocol.h"
#include "ShowreelErrorRecoveryAttempting-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSString;
@protocol OS_dispatch_queue, SNAnimationSingleImageDownloading;

@interface SNAnimationMultiImagesProvider : NSObject<ShowreelErrorRecoveryAttempting> {
  /* instance variables */
  NSObject<SNAnimationSingleImageDownloading> *_downloader;
  NSMutableDictionary *_downloadedImages;
  NSMutableDictionary *_downloadedImagesLoadSources;
  NSMutableDictionary *_downloadedImagesFetchLatencies;
  NSMutableDictionary *_downloadedImagesTotalBytes;
  NSArray *_downloadRequests;
  NSObject<OS_dispatch_queue> *_processingQueue;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  NSMutableOrderedSet *_recoverableImageURLs;
}

@property (weak, nonatomic) NSObject<SNAnimationMultiImagesProviderDelegate> *delegate;
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, nonatomic) BOOL isFetching;
@property (readonly, nonatomic) NSOrderedSet *imageURLs;
@property (readonly, nonatomic) NSString *attempterId;
@property (nonatomic) BOOL isRecoveryEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImageURLs:(id)urls downloader:(id)downloader contextID:(id)id callbackQueue:(id)queue;
- (void)cancel;
- (void)attemptRecoveryFromError:(id)error completionHandler:(id /* block */)handler;
@end

#endif /* SNAnimationMultiImagesProvider_h */