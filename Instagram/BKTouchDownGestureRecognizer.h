//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKTouchDownGestureRecognizer_h
#define BKTouchDownGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"

@interface BKTouchDownGestureRecognizer : UIGestureRecognizer
/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

#endif /* BKTouchDownGestureRecognizer_h */