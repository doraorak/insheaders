//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveE2EAnalyticsLoggerAdaptor_h
#define IGLiveE2EAnalyticsLoggerAdaptor_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGLiveE2EAnalyticsLoggerAdaptor : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnalyticsLogger:(id)logger;
- (void)logEvent:(id)event module:(id)module extraBlock:(id /* block */)block;
@end

#endif /* IGLiveE2EAnalyticsLoggerAdaptor_h */
