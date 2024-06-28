//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSDictionary_IGPostSessionLogger_h
#define NSDictionary_IGPostSessionLogger_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGUserLauncherSet-Protocol.h"

@protocol IGPostAnalyticsProvider;

@interface NSDictionary (IGPostSessionLogger)
/* instance methods */
- (id)ig_dictionaryWithCustomFieldAsyncConfigureEnabled:(id)enabled;
@end

#endif /* NSDictionary_IGPostSessionLogger_h */