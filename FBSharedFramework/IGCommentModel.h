//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentModel_h
#define IGCommentModel_h
@import Foundation;

#include "IGAPICommentDict.h"
#include "IGAvatarStickerLoggingInfo.h"
#include "IGCommentAttachment.h"
#include "IGCommentMusicAttachmentMetadata.h"
#include "IGContentWarningModel.h"
#include "IGDate.h"
#include "IGListDiffable-Protocol.h"
#include "IGSimpleTrackableObject-Protocol.h"
#include "IGUser.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSObject, NSString;
@protocol IGCommentModelUpdateAnnouncer;

@interface IGCommentModel : NSObject<NSCoding, IGListDiffable, IGSimpleTrackableObject, NSCopying> {
  /* instance variables */
  NSObject *_commentLock;
  IGAPICommentDict *_internalApiCommentDict;
  BOOL _wasMarkedAsSpam;
  BOOL _isTruncatedComment;
  BOOL _shouldShowCreatorsReshareNudge;
  NSString *_truncatedText;
  NSString *_avatarStickerSurface;
  IGAvatarStickerLoggingInfo *_avatarStickerLoggingInfo;
  NSString *_imagineCreateEntId;
  NSString *_imagineCreateImageURL;
  NSString *_mediaCode;
  unsigned long long _errorCause;
  NSArray *_violatingUsers;
  NSString *_replyToCommentPK;
  NSObject<IGCommentModelUpdateAnnouncer> *_commentUpdateAnnouncer;
  IGContentWarningModel *_contentWarningModel;
  NSArray *_facebookTaggedUserInfo;
  IGCommentMusicAttachmentMetadata *_musicAttachmentMetadata;
  NSArray *_distinctEmojis;
}

@property (readonly) IGAPICommentDict *apiCommentDict;
@property (copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) IGDate *createdAt;
@property (readonly, nonatomic) NSString *idempotenceToken;
@property (readonly, nonatomic) BOOL hideUsername;
@property (copy, nonatomic) NSString *gifMediaId;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isPinned;
@property (nonatomic) BOOL isCreatedByMediaOwner;
@property (readonly, nonatomic) IGUser *user;
@property (nonatomic) long long type;
@property (nonatomic) long long postedState;
@property (nonatomic) BOOL didReportAsSpam;
@property (nonatomic) long long likeCount;
@property (nonatomic) BOOL hasLiked;
@property (readonly, nonatomic) BOOL showFanClubBadge;
@property (retain, nonatomic) NSArray *e2EeMentionedUserList;
@property (readonly, nonatomic) NSArray *mentionedUsers;
@property (readonly, nonatomic) NSArray *fbMentionedUsers;
@property (readonly, copy, nonatomic) NSArray *socialContextLikers;
@property (copy, nonatomic) NSString *failureReason;
@property (copy, nonatomic) NSString *commentPostError;
@property (nonatomic) unsigned long long mitigationAction;
@property (nonatomic) long long childCommentCount;
@property (readonly, nonatomic) BOOL hasTranslation;
@property (copy, nonatomic) NSString *translation;
@property (nonatomic) long long translationState;
@property (nonatomic) long long translateAllButtonState;
@property (readonly, nonatomic) long long inlineComposerDisplayCondition;
@property (nonatomic) BOOL canShowInlineComposer;
@property (nonatomic) long long restrictStatus;
@property (readonly, nonatomic) BOOL isNew;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isCovered;
@property (nonatomic) BOOL canViewerUnhide;
@property (nonatomic) long long privateReplyStatus;
@property (nonatomic) BOOL isLimited;
@property (nonatomic) BOOL likedByMediaOwner;
@property (nonatomic) long long reactionCount;
@property (copy, nonatomic) NSString *feedbackId;
@property (readonly, nonatomic) IGCommentAttachment *commentAttachment;
@property (retain, nonatomic) NSString *reactionText;
@property (nonatomic) BOOL isHidden;
@property (copy, nonatomic) NSArray *carouselChildMentions;
@property (nonatomic) long long replyStrokeState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)valueWithIGAPICommentDict:(id)dict dictionary:(id)dictionary;
+ (id)valueWithDictionary:(id)dictionary objectStores:(id)stores;

/* instance methods */
- (id)_initWithAPICommentDict:(id)dict replyToCommentPK:(id)pk commentAttachment:(id)attachment idempotenceToken:(id)token reactionText:(id)text musicAttachmentMetadata:(id)metadata;
- (id)initWithText:(id)text parentCommentPK:(id)pk replyToCommentPK:(id)pk user:(id)user showFanClubBadge:(BOOL)badge commentAttachment:(id)attachment;
- (id)initWithText:(id)text user:(id)user;
- (id)initWithText:(id)text parentCommentPK:(id)pk replyToCommentPK:(id)pk user:(id)user;
- (id)initWithText:(id)text user:(id)user createdAt:(id)at;
- (id)initWithText:(id)text user:(id)user createdAt:(id)at type:(long long)type pk:(id)pk;
- (id)initWithText:(id)text user:(id)user pk:(id)pk;
- (id)initWithText:(id)text user:(id)user createdAt:(id)at reactionText:(id)text reactionCount:(long long)count feedbackId:(id)id parentCommentPK:(id)pk replyToCommentPK:(id)pk commentAttachment:(id)attachment facebookTaggedUser:(id)user;
- (id)initWithPK:(id)pk;
- (void)updateWithIGAPICommentDict:(id)dict;
- (void)_updateAPICommentDictWithChanges:(id /* block */)changes;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGCommentModel_h */