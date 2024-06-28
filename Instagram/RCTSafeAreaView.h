//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTSafeAreaView_h
#define RCTSafeAreaView_h
@import Foundation;

#include "RCTView.h"
#include "RCTBridge.h"

@interface RCTSafeAreaView : RCTView {
  /* instance variables */
  RCTBridge *_bridge;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _currentSafeAreaInsets;
}

/* instance methods */
- (id)initWithBridge:(id)bridge;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)description;
- (void)safeAreaInsetsDidChange;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
@end

#endif /* RCTSafeAreaView_h */
