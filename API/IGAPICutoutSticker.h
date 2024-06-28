//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPICutoutSticker_h
#define IGAPICutoutSticker_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPICutoutSticker : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithGraphQLID:(id)qlid isSaveAllowed:(id)allowed isSaved:(id)saved mediaUrl:(id)url sourceMediaId:(id)id sourceMediaOwner:(id)owner sourceMediaUsername:(id)username stickerCreator:(id)creator stickerCreatorUsername:(id)username stickerType:(id)type;
@end

#endif /* IGAPICutoutSticker_h */