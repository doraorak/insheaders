//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMessageFilterLogger_h
#define IGMessageFilterLogger_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGPerformanceMarker.h"

@interface IGMessageFilterLogger : NSObject {
  /* instance variables */
  NSObject<IGAnalyticsEventLoggingProtocol> *_logger;
  IGPerformanceMarker *_marker;
}

/* instance methods */
- (id)initWithLogger:(id)logger;
- (void)startThreadsGroupFiltering;
@end

#endif /* IGMessageFilterLogger_h */
