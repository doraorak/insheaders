//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPassthroughWindow_h
#define IGPassthroughWindow_h
@import Foundation;

#include "UIWindow.h"

@interface IGPassthroughWindow : UIWindow
/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)motionBegan:(long long)began withEvent:(id)event;
- (void)motionCancelled:(long long)cancelled withEvent:(id)event;
- (void)motionEnded:(long long)ended withEvent:(id)event;
@end

#endif /* IGPassthroughWindow_h */
