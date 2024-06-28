//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMPCameraUserInterfaceView_h
#define FBMPCameraUserInterfaceView_h
@import Foundation;

#include "UIView.h"

@class CAShapeLayer;

@interface FBMPCameraUserInterfaceView : UIView {
  /* instance variables */
  CAShapeLayer *_poiLayer;
}

/* instance methods */
- (void)render:(id)render;
- (void)setNeedsLayout;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* FBMPCameraUserInterfaceView_h */
