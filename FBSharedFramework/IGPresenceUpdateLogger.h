//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPresenceUpdateLogger_h
#define IGPresenceUpdateLogger_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"

@interface IGPresenceUpdateLogger : NSObject {
  /* instance variables */
  NSObject<FBAnalyticsLogging> *_logger;
}

/* instance methods */
- (id)initWithAnalyticsLogger:(id)logger;
- (void)logEvent:(long long)event;
- (void)setLogger:(id)logger;
@end

#endif /* IGPresenceUpdateLogger_h */
