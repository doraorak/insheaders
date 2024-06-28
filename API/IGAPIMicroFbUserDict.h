//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIMicroFbUserDict_h
#define IGAPIMicroFbUserDict_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIMicroFbUserDict : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithFbObid:(id)obid fullName:(id)name profileDeeplink:(id)deeplink profilePictureUrl:(id)url profileWwwLink:(id)link username:(id)username;
@end

#endif /* IGAPIMicroFbUserDict_h */