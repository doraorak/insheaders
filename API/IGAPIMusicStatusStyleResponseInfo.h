//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIMusicStatusStyleResponseInfo_h
#define IGAPIMusicStatusStyleResponseInfo_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIMusicStatusStyleResponseInfo : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithAudioClusterId:(id)id displayArtist:(id)artist musicTitle:(id)title;
@end

#endif /* IGAPIMusicStatusStyleResponseInfo_h */
