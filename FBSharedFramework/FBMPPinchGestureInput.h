//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMPPinchGestureInput_h
#define FBMPPinchGestureInput_h
@import Foundation;

#include "FBMPGestureInput.h"

@class UIPinchGestureRecognizer;

@interface FBMPPinchGestureInput : FBMPGestureInput

@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;

/* instance methods */
- (id)_gestureData;
- (id)initWithPinchGestureRecognizer:(id)recognizer screenScale:(double)scale;
@end

#endif /* FBMPPinchGestureInput_h */
