//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraHandIndicatorView_h
#define IGCameraHandIndicatorView_h
@import Foundation;

#include "UIView.h"

@class KeyframesView;

@interface IGCameraHandIndicatorView : UIView {
  /* instance variables */
  KeyframesView *_keyFramesView;
}

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (void)stopAnimation;
@end

#endif /* IGCameraHandIndicatorView_h */
