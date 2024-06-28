//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTagPosition_h
#define IGTagPosition_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "NSCoding-Protocol.h"

@interface IGTagPosition : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  struct CGPoint { double x; double y; } _coordinates_coordinates;
}

/* class methods */
+ (id)coordinatesWithCoordinates:(struct CGPoint { double x0; double x1; })coordinates;
+ (id)none;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGTagPosition_h */
