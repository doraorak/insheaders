//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksComponentsTooltipRootView_h
#define BKBloksComponentsTooltipRootView_h
@import Foundation;

#include "UIView.h"
#include "BKBloksComponentsTooltipViewController.h"

@interface BKBloksComponentsTooltipRootView : UIView

@property (weak, nonatomic) BKBloksComponentsTooltipViewController *parentViewController;

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
@end

#endif /* BKBloksComponentsTooltipRootView_h */
