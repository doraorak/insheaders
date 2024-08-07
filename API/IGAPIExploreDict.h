//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIExploreDict_h
#define IGAPIExploreDict_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIExploreDict : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithExplanation:(id)explanation exploreInternalDebugLog:(id)log isExplanationClickable:(id)clickable sourceToken:(id)token title:(id)title titleId:(id)id;
@end

#endif /* IGAPIExploreDict_h */
