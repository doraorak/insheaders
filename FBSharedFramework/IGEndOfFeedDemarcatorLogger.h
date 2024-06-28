//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEndOfFeedDemarcatorLogger_h
#define IGEndOfFeedDemarcatorLogger_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGListAdapter.h"

@class NSString;

@interface IGEndOfFeedDemarcatorLogger : NSObject {
  /* instance variables */
  NSString *_analyticsModule;
  NSString *_sessionId;
  NSString *_demarcatorId;
  double _visibleStartTime;
  double _lastEventTime;
  long long _lastMediaIndex;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  IGListAdapter *_listAdapter;
  NSString *_demarcatorType;
  double _lastNewEventTime;
}

/* instance methods */
- (id)initWithSessionId:(id)id analyticsModule:(id)module demarcatorId:(id)id analyticsLogger:(id)logger listAdapter:(id)adapter demarcatorType:(id)type;
@end

#endif /* IGEndOfFeedDemarcatorLogger_h */