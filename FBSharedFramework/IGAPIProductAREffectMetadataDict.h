//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIProductAREffectMetadataDict_h
#define IGAPIProductAREffectMetadataDict_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIProductAREffectMetadataDict : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithContainerEffectType:(id)type effectId:(id)id effectParametersData:(id)data effectThumbnailImage:(id)image effectUsesFlmCapability:(id)capability;
@end

#endif /* IGAPIProductAREffectMetadataDict_h */
