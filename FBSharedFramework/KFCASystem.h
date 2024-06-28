//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFCASystem_h
#define KFCASystem_h
@import Foundation;

#include "KFSystem.h"

@protocol KFCASystemDelegate;

@interface KFCASystem : KFSystem

@property (weak, nonatomic) NSObject<KFCASystemDelegate> *delegate;

/* instance methods */
- (void)setupWithToolbox:(id)toolbox pass:(unsigned long long)pass;
@end

#endif /* KFCASystem_h */
