//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNAnimationProvider_h
#define SNAnimationProvider_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "SNAnalyticsData.h"
#include "SNAnimationProviderDelegate-Protocol.h"
#include "SNPlaybackItem.h"
#include "ShowreelErrorRecoveryAttempting-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, SNAnimationDownloading;

@interface SNAnimationProvider : NSObject<ShowreelErrorRecoveryAttempting> {
  /* instance variables */
  SNPlaybackItem *_playbackItem;
  SNAnalyticsData *_analyticsData;
  NSObject<OS_dispatch_queue> *_processQueue;
}

@property (readonly, nonatomic) NSObject<SNAnimationDownloading> *downloader;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSObject<NSObject> *token;
@property (weak, nonatomic) NSObject<SNAnimationProviderDelegate> *delegate;
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, nonatomic) BOOL isFetching;
@property (readonly, nonatomic) NSString *attempterId;
@property (nonatomic) BOOL isRecoveryEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPlaybackItem:(id)item downloader:(id)downloader contextID:(id)id analyticsData:(id)data callbackQueue:(id)queue;
- (void)cancel;
- (void)attemptRecoveryFromError:(id)error completionHandler:(id /* block */)handler;
@end

#endif /* SNAnimationProvider_h */
