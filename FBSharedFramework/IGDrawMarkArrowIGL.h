//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDrawMarkArrowIGL_h
#define IGDrawMarkArrowIGL_h
@import Foundation;

#include "IGDrawMarkPointIGL.h"

@class NSMutableArray;

@interface IGDrawMarkArrowIGL : IGDrawMarkPointIGL {
  /* instance variables */
  NSMutableArray *_touchPositions;
}

/* instance methods */
- (id)initWithBrush:(id)brush;
- (void)addSample:(struct _IGDrawTouchSample { struct _GLKVector2 { float x0[2] } x0; double x1; double x2; double x3; double x4; })sample;
- (void)endWith:(struct _IGDrawTouchSample { struct _GLKVector2 { float x0[2] } x0; double x1; double x2; double x3; double x4; })with;
@end

#endif /* IGDrawMarkArrowIGL_h */