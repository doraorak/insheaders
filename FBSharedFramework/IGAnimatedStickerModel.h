//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnimatedStickerModel_h
#define IGAnimatedStickerModel_h
@import Foundation;

#include "IGAnimatedStickerAvatarDataModel.h"
#include "IGAnimatedStickerGifDataModel.h"
#include "IGListDiffable-Protocol.h"
#include "IGStickerModelType-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface IGAnimatedStickerModel : NSObject<IGListDiffable, IGStickerModelType, NSCopying, NSSecureCoding> {
  /* instance variables */
  BOOL _isBoundingBoxEnabled;
  IGAnimatedStickerAvatarDataModel *_avatarStickerDataModel;
  IGAnimatedStickerGifDataModel *_gifStickerDataModel;
}

@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) BOOL includeInRecent;
@property (readonly, nonatomic) BOOL isSticker;
@property (readonly, nonatomic) long long stickerType;
@property (readonly, nonatomic) double minimumScale;
@property (readonly, nonatomic) double maximumScale;
@property (readonly, nonatomic) double imageWidthRatio;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL isBoostEligible;
@property (copy, nonatomic) NSString *stickerSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPk:(id)pk url:(id)url width:(double)width height:(double)height includeInRecent:(BOOL)recent isSticker:(BOOL)sticker stickerType:(long long)type isBoundingBoxEnabled:(BOOL)enabled minimumScale:(double)scale maximumScale:(double)scale imageWidthRatio:(double)ratio accessibilityLabel:(id)label avatarStickerDataModel:(id)model gifStickerDataModel:(id)model userId:(id)id;
- (id)initWithPk:(id)pk URL:(id)url width:(double)width height:(double)height isSticker:(BOOL)sticker stickerType:(long long)type;
- (id)initWithURL:(id)url width:(double)width height:(double)height isSticker:(BOOL)sticker stickerType:(long long)type;
- (id)initWithDict:(id)dict;
- (id)diffIdentifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGAnimatedStickerModel_h */