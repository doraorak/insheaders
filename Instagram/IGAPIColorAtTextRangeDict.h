//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIColorAtTextRangeDict_h
#define IGAPIColorAtTextRangeDict_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIColorAtTextRangeDict : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithHexRgbColor:(id)color hexRgbColorDark:(id)dark length:(id)length offset:(id)offset;
@end

#endif /* IGAPIColorAtTextRangeDict_h */