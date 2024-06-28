//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTAlertController_h
#define RCTAlertController_h
@import Foundation;

#include "UIAlertController.h"

@class UIWindow;

@interface RCTAlertController : UIAlertController

@property (retain, nonatomic) UIWindow *alertWindow;

/* instance methods */
- (void)show:(BOOL)show completion:(id /* block */)completion;
- (void)hide;
@end

#endif /* RCTAlertController_h */