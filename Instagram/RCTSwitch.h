//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTSwitch_h
#define RCTSwitch_h
@import Foundation;

#include "UISwitch.h"

@interface RCTSwitch : UISwitch

@property (nonatomic) BOOL wasOn;
@property (copy, nonatomic) id /* block */ onChange;

/* instance methods */
- (void)setOn:(BOOL)on animated:(BOOL)animated;
@end

#endif /* RCTSwitch_h */