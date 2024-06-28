//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMainInboxAnalyticsLogger_h
#define IGDirectMainInboxAnalyticsLogger_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"

@class NSMutableSet, NSString;

@interface IGDirectMainInboxAnalyticsLogger : NSObject {
  /* instance variables */
  NSMutableSet *_loggedThreadIds;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
}

@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, copy, nonatomic) NSString *sessionId;

/* instance methods */
- (id)initWithAnalyticsLogger:(id)logger analyticsModule:(id)module;
@end

#endif /* IGDirectMainInboxAnalyticsLogger_h */
