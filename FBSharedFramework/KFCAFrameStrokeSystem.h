//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFCAFrameStrokeSystem_h
#define KFCAFrameStrokeSystem_h
@import Foundation;

#include "KFSystem.h"

@interface KFCAFrameStrokeSystem : KFSystem
/* instance methods */
- (void)setupWithToolbox:(id)toolbox pass:(unsigned long long)pass;
- (void)updateWithToolbox:(id)toolbox pass:(unsigned long long)pass progress:(double)progress;
@end

#endif /* KFCAFrameStrokeSystem_h */
