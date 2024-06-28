//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPrefetchScheduler_h
#define IGPrefetchScheduler_h
@import Foundation;

#include "IGNetworkSpeedProvider.h"
#include "IGPrefetchPrioritizer.h"
#include "NSObject-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface IGPrefetchScheduler : NSObject<NSObject> {
  /* instance variables */
  struct IGPrefetchSchedulerConfig { long long maxConcurrentUnknown; long long maxConcurrentPoor; long long maxConcurrentModerate; long long maxConcurrentGood; long long maxConcurrentExcellent; long long maxQueuedOperations; double staleOperationCutoffMS; unsigned long long urlCompletionConfig; BOOL enableAdditionalWarnings; } _config;
  NSMutableArray *_queuedOperations;
  NSMutableArray *_activeOperations;
  unsigned long long _maxConcurrentOperations;
  IGNetworkSpeedProvider *_networkSpeedProvider;
  struct IGPrefetchSchedulerDebugInfo { unsigned long long addedOpCount; unsigned long long audioURLCount; unsigned long long videoURLCount; unsigned long long completedOpCountTotal; unsigned long long completedByBlockCount; unsigned long long completedByURLCountTotal; unsigned long long completedWithURLCount1; unsigned long long completedWithURLCount2; unsigned long long completedWithURLCount4; unsigned long long completedWithURLCountOther; unsigned long long completedByStaleCount; unsigned long long queueFullCount; float totalSecondsSinceEnqueue; float totalSecondsSinceBlockStart; } _info;
  IGPrefetchPrioritizer *_prioritizer;
}

@property (readonly) NSObject<OS_dispatch_queue> *runningQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfig:(struct IGPrefetchSchedulerConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; double x6; unsigned long long x7; BOOL x8; })config networkSpeedProvider:(id)provider videoProxy:(id)proxy;
- (void)addOperation:(id)operation;
- (void)didStartPrefetchURLString:(id)urlstring mediaID:(id)id isAudio:(BOOL)audio;
- (void)_handleDidStartPrefetchURLString:(id)urlstring mediaID:(id)id isAudio:(BOOL)audio;
- (void)videoProxyDidEndRequestForURL:(id)url requestRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range error:(id)error cancelRequestTime:(double)time;
- (void)_handleVideoProxyDidEndRequestForURL:(id)url;
- (void)_updateInfoVideoURLCount:(unsigned long long)urlcount audioURLCount:(unsigned long long)urlcount;
@end

#endif /* IGPrefetchScheduler_h */
