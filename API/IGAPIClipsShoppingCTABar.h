//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIClipsShoppingCTABar_h
#define IGAPIClipsShoppingCTABar_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIClipsShoppingCTABar : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithAnimationTimeSec:(id)sec ctaBarType:(id)type destination:(id)destination dominantColor:(id)color dwellTimeSec:(id)sec productNames:(id)names subtitle:(id)subtitle title:(id)title toggledDestination:(id)destination toggledTitle:(id)title;
@end

#endif /* IGAPIClipsShoppingCTABar_h */
