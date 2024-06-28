//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPISetiProfileConfig_h
#define IGAPISetiProfileConfig_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPISetiProfileConfig : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithBackgroundImageUrl:(id)url emoji:(id)emoji emojiColor:(id)color gradient:(id)gradient isBackgroundImageBlurred:(id)blurred mode:(id)mode selfieSticker:(id)sticker selfieUrl:(id)url;
@end

#endif /* IGAPISetiProfileConfig_h */
