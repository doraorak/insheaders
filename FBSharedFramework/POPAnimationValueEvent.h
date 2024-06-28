//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef POPAnimationValueEvent_h
#define POPAnimationValueEvent_h
@import Foundation;

#include "POPAnimationEvent.h"

@interface POPAnimationValueEvent : POPAnimationEvent

@property (retain, nonatomic) id velocity;
@property (readonly, nonatomic) id value;

/* instance methods */
- (id)initWithType:(unsigned long long)type time:(double)time value:(id)value;
- (void)_appendDescription:(id)description;
@end

#endif /* POPAnimationValueEvent_h */
