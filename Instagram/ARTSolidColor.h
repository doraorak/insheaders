//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ARTSolidColor_h
#define ARTSolidColor_h
@import Foundation;

#include "ARTBrush.h"

@interface ARTSolidColor : ARTBrush {
  /* instance variables */
  struct CGColor * _color;
}

/* instance methods */
- (id)initWithArray:(id)array;
- (void)dealloc;
- (BOOL)applyFillColor:(struct CGContext *)color;
@end

#endif /* ARTSolidColor_h */