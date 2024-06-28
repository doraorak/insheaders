//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIStoryTemplateAssetDict_h
#define IGAPIStoryTemplateAssetDict_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIStoryTemplateAssetDict : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithBackgroundPk:(id)pk backgroundVersions2:(id)versions2 imageVersions2:(id)versions2 pk:(id)pk templateStickerId:(id)id zIndex:(id)index;
@end

#endif /* IGAPIStoryTemplateAssetDict_h */