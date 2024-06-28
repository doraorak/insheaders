//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLinkageCache_h
#define IGLinkageCache_h
@import Foundation;

#include "IGLinkageNetworkLogging.h"
#include "IGUserDefaults.h"

@interface IGLinkageCache : NSObject {
  /* instance variables */
  IGUserDefaults *_sessionUserDefaults;
  IGLinkageNetworkLogging *_logger;
  double _refreshDuration;
  BOOL _isCacheEnabled;
  BOOL _destinationLinkageErrorAlreadyLogged;
  double _cacheDurationSecs;
}

/* instance methods */
- (id)initWithUserDefaults:(id)defaults logger:(id)logger cacheDurationDays:(long long)days refreshDuration:(double)duration isCacheEnabled:(BOOL)enabled;
- (void)clearCache;
- (void)_logFetchDestinationMissing:(id)missing;
- (void)_logFetchDestinationExpired:(double)expired;
@end

#endif /* IGLinkageCache_h */