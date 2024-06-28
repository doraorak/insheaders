//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFPlayAction_h
#define KFPlayAction_h
@import Foundation;

#include "KFAction.h"
#include "KFPlayActionModel.h"

@interface KFPlayAction : KFAction

@property (readonly, nonatomic) KFPlayActionModel *model;

/* instance methods */
- (void)executeWithExtras:(id)extras;
@end

#endif /* KFPlayAction_h */
