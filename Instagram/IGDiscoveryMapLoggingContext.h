//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryMapLoggingContext_h
#define IGDiscoveryMapLoggingContext_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"

@class IGUserSession, NSDate, NSString;

@interface IGDiscoveryMapLoggingContext : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  BOOL _hasLoggedImpression;
  NSDate *_lastMapEnterDate;
  NSObject<FBAnalyticsLogging> *_structuredLogger;
  NSString *_mapSessionId;
}

@property (retain, nonatomic) NSString *queryToken;
@property (readonly, nonatomic) NSString *entryPoint;

/* instance methods */
- (id)initWithUserSession:(id)session mapSessionId:(id)id entryPoint:(id)point;
@end

#endif /* IGDiscoveryMapLoggingContext_h */
