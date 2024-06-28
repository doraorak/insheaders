//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPFetcherExperimentHelper_h
#define IGQPFetcherExperimentHelper_h
@import Foundation;

#include "IGUserLauncherSet-Protocol.h"

@interface IGQPFetcherExperimentHelper : NSObject

@property (readonly, nonatomic) NSObject<IGUserLauncherSet> *launcherSet;

/* instance methods */
- (id)initWithLauncherSet:(id)set;
@end

#endif /* IGQPFetcherExperimentHelper_h */