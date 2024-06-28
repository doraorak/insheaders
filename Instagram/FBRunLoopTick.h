//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBRunLoopTick_h
#define FBRunLoopTick_h
@import Foundation;

#include "FBRunLoopTickPoint.h"

@interface FBRunLoopTick : NSObject

@property (readonly, nonatomic) FBRunLoopTickPoint *start;
@property (readonly, nonatomic) FBRunLoopTickPoint *end;
@property (readonly, nonatomic) double duration;

/* instance methods */
- (id)initWithStartTickPoint:(id)point endTickPoint:(id)point;
- (BOOL)isForeground;
@end

#endif /* FBRunLoopTick_h */
