//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIActionButtonPartner_h
#define IGAPIActionButtonPartner_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIActionButtonPartner : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithAppId:(id)id appLogoUrl:(id)url buttonLabel:(id)label categoryType:(id)type displayCategoryName:(id)name partnerName:(id)name partnerType:(id)type url:(id)url;
@end

#endif /* IGAPIActionButtonPartner_h */
