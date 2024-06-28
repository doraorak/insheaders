//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IG4BLogger_h
#define IG4BLogger_h
@import Foundation;

#include "IG4BLoggerConfiguration.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"

@interface IG4BLogger : NSObject {
  /* instance variables */
  BOOL _isEligibleLogToFunnel;
}

@property (readonly, copy, nonatomic) NSObject<IGAnalyticsEventLoggingProtocol> *analyticsLogger;
@property (readonly, nonatomic) IG4BLoggerConfiguration *config;

/* instance methods */
- (id)initWithAnalyticsLogger:(id)logger flow:(id)flow entrypoint:(id)entrypoint step:(id)step module:(id)module;
- (id)initWithAnalyticsLogger:(id)logger flow:(id)flow entrypoint:(id)entrypoint step:(id)step waterfallID:(id)id module:(id)module;
- (id)initWithAnalyticsLogger:(id)logger flow:(id)flow entrypoint:(id)entrypoint entryExtraData:(id)data step:(id)step waterfallID:(id)id module:(id)module priorStep:(id)step;
- (id)initWithAnalyticsLogger:(id)logger flow:(id)flow entrypoint:(id)entrypoint entryExtraData:(id)data step:(id)step waterfallID:(id)id module:(id)module priorStep:(id)step output:(long long)output;
- (void)endFlow;
- (void)logEvent:(id)event;
@end

#endif /* IG4BLogger_h */
