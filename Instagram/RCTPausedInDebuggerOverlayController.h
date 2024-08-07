//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTPausedInDebuggerOverlayController_h
#define RCTPausedInDebuggerOverlayController_h
@import Foundation;

@class UIWindow;

@interface RCTPausedInDebuggerOverlayController : NSObject

@property (retain, nonatomic) UIWindow *alertWindow;

/* instance methods */
- (void)showWithMessage:(id)message onResume:(id /* block */)resume;
- (void)hide;
@end

#endif /* RCTPausedInDebuggerOverlayController_h */
