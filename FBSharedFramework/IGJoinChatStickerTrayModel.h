//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGJoinChatStickerTrayModel_h
#define IGJoinChatStickerTrayModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"
#include "IGSmartStickerModelType-Protocol.h"
#include "IGStickerModelType-Protocol.h"
#include "NSCoding-Protocol.h"

@class NSNumber, NSString, NSURL;

@interface IGJoinChatStickerTrayModel : NSObject<IGListDiffable, IGStickerModelType, IGSmartStickerModelType, NSCoding> {
  /* instance variables */
  NSString *_chatName;
}

@property (readonly, nonatomic) NSURL *profilePictureURL;
@property (readonly, nonatomic) long long chatStickerType;
@property (readonly, nonatomic) NSNumber *audienceType;
@property (readonly, nonatomic) long long memberCount;
@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, nonatomic) BOOL includeInRecent;
@property (nonatomic) BOOL isBoostEligible;
@property (copy, nonatomic) NSString *stickerSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDict:(id)dict;
- (id)initWithProfilePictureURLAndChatName:(id)name chatStickerType:(long long)type chatName:(id)name audienceType:(id)type memberCount:(long long)count;
- (id)initWithProfilePictureURL:(id)url chatStickerType:(long long)type audienceType:(id)type;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (unsigned long long)smartStickerType;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGJoinChatStickerTrayModel_h */
