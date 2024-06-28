//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUpcomingEventsCreationLogger_h
#define IGUpcomingEventsCreationLogger_h
@import Foundation;

#include "IGUserSession.h"

@class NSString;

@interface IGUpcomingEventsCreationLogger : NSObject {
  /* instance variables */
  NSString *_analyticsModule;
  NSString *_creationSessionId;
  IGUserSession *_userSession;
  BOOL _isScheduledLive;
  NSString *_upcomingEventId;
  NSString *_priorModule;
}

/* instance methods */
- (id)initWithAnalyticsModule:(id)module creationSessionId:(id)id upcomingEventId:(id)id userSession:(id)session isScheduledLive:(BOOL)live priorModule:(id)module;
@end

#endif /* IGUpcomingEventsCreationLogger_h */
