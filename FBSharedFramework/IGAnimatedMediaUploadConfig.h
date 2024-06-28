//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnimatedMediaUploadConfig_h
#define IGAnimatedMediaUploadConfig_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGAnimatedMediaUploadConfig : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *uploadId;
@property (readonly, copy, nonatomic) NSString *waterfallId;
@property (readonly, nonatomic) BOOL renderAsSticker;
@property (readonly, copy, nonatomic) NSArray *threadParticipantIds;
@property (readonly, copy, nonatomic) NSString *stickerTemplate;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithUploadId:(id)id waterfallId:(id)id renderAsSticker:(BOOL)sticker threadParticipantIds:(id)ids stickerTemplate:(id)template;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGAnimatedMediaUploadConfig_h */
