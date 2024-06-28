//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPostAnalyticsExtendableLogger_h
#define IGPostAnalyticsExtendableLogger_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface IGPostAnalyticsExtendableLogger : NSObject<IGAnalyticsEventLoggingProtocol> {
  /* instance variables */
  NSObject<IGAnalyticsEventLoggingProtocol> *_eventLogger;
  NSMutableArray *_listeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEventLogger:(id)logger;
- (void)logEvent:(id)event;
- (void)logEventImmediately:(id)immediately;
- (void)logTimeSpentForModule:(id)module;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillResignActive;
- (void)uploadEvents;
- (void)addEventObserver:(id)observer;
- (void)addEventListener:(id /* block */)listener;
@end

#endif /* IGPostAnalyticsExtendableLogger_h */
