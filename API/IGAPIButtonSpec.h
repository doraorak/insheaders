//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIButtonSpec_h
#define IGAPIButtonSpec_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIButtonSpec : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithAction:(id)action actionUrl:(id)url buttonType:(id)type hasChevron:(id)chevron headlineText:(id)text icon:(id)icon isTextCentered:(id)centered secondaryText:(id)text shouldUseFullWidthLineView:(id)view text:(id)text textColor:(id)color;
@end

#endif /* IGAPIButtonSpec_h */