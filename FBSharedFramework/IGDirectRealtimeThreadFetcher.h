//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRealtimeThreadFetcher_h
#define IGDirectRealtimeThreadFetcher_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGDirectPublishedThreadFetcher.h"

@class NSMutableDictionary, NSMutableSet;
@protocol IGDirectRealtimeThreadFetcherAnnouncer;

@interface IGDirectRealtimeThreadFetcher : NSObject {
  /* instance variables */
  IGDirectPublishedThreadFetcher *_threadFetcher;
  long long _retryCount;
  id /* block */ _timerProvider;
  NSObject<IGDirectRealtimeThreadFetcherAnnouncer> *_listenerAnnouncer;
  NSMutableDictionary *_threadIdToBackoffTimer;
  NSMutableSet *_threadIdsOfOngoingFetches;
  NSMutableSet *_threadIdsOfFailedFetches;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
}

/* instance methods */
- (id)initWithPublishedThreadFetcher:(id)fetcher retryCount:(long long)count timerProvider:(id /* block */)provider analyticsLogger:(id)logger;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* IGDirectRealtimeThreadFetcher_h */
