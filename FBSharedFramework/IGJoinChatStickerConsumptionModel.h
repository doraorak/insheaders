//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGJoinChatStickerConsumptionModel_h
#define IGJoinChatStickerConsumptionModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGJoinChatStickerBackgroundJoinConsumptionModel.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSNumber, NSString, NSURL;

@interface IGJoinChatStickerConsumptionModel : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *existingChatHash;
@property (readonly, nonatomic) long long chatStickerType;
@property (readonly, nonatomic) long long chatStickerStickerType;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) NSString *threadId;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long memberCount;
@property (readonly, nonatomic) long long activeMemberCount;
@property (readonly, nonatomic) long long connectedMemberCount;
@property (readonly, copy, nonatomic) NSNumber *audienceType;
@property (readonly, copy, nonatomic) NSString *messageId;
@property (readonly, copy, nonatomic) NSString *clientId;
@property (readonly, nonatomic) BOOL isClipsMedia;
@property (readonly, copy, nonatomic) NSString *deeplinkUrl;
@property (readonly, copy, nonatomic) IGJoinChatStickerBackgroundJoinConsumptionModel *backgroundJoinModel;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithPk:(id)pk title:(id)title existingChatHash:(id)hash chatStickerType:(long long)type chatStickerStickerType:(long long)type imageURL:(id)url threadId:(id)id status:(long long)status memberCount:(long long)count activeMemberCount:(long long)count connectedMemberCount:(long long)count audienceType:(id)type messageId:(id)id clientId:(id)id isClipsMedia:(BOOL)media deeplinkUrl:(id)url backgroundJoinModel:(id)model;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGJoinChatStickerConsumptionModel_h */