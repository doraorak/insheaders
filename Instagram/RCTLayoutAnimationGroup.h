//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTLayoutAnimationGroup_h
#define RCTLayoutAnimationGroup_h
@import Foundation;

#include "RCTLayoutAnimation.h"

@interface RCTLayoutAnimationGroup : NSObject

@property (readonly, nonatomic) RCTLayoutAnimation *creatingLayoutAnimation;
@property (readonly, nonatomic) RCTLayoutAnimation *updatingLayoutAnimation;
@property (readonly, nonatomic) RCTLayoutAnimation *deletingLayoutAnimation;
@property (copy, nonatomic) id /* block */ callback;

/* instance methods */
- (id)initWithCreatingLayoutAnimation:(id)animation updatingLayoutAnimation:(id)animation deletingLayoutAnimation:(id)animation callback:(id /* block */)callback;
- (id)initWithConfig:(id)config callback:(id /* block */)callback;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* RCTLayoutAnimationGroup_h */
