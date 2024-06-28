//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageRequestsNavigationPerfComponents_h
#define IGDirectMessageRequestsNavigationPerfComponents_h
@import Foundation;

#include "IGPerformanceComponent.h"
#include "IGPerformanceNavigationLogger.h"

@interface IGDirectMessageRequestsNavigationPerfComponents : NSObject {
  /* instance variables */
  IGPerformanceComponent *_cacheRendered;
  IGPerformanceComponent *_serverFetch;
  IGPerformanceComponent *_serverRendered;
}

@property (readonly, nonatomic) IGPerformanceNavigationLogger *logger;

/* instance methods */
- (id)initWithLauncherSet:(id)set;
@end

#endif /* IGDirectMessageRequestsNavigationPerfComponents_h */
