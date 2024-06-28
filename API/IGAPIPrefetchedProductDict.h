//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIPrefetchedProductDict_h
#define IGAPIPrefetchedProductDict_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIPrefetchedProductDict : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithCheckoutStyle:(id)style currentPrice:(id)price externalUrl:(id)url fullPrice:(id)price merchant:(id)merchant name:(id)name productId:(id)id;
@end

#endif /* IGAPIPrefetchedProductDict_h */