//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectOutgoingMessageSharedStoryAction_h
#define IGDirectOutgoingMessageSharedStoryAction_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGAvatarGridSticker.h"
#include "IGCommentModel.h"
#include "IGDirectOutgoingMediaUploadConfig.h"
#include "IGDirectOutgoingStoryInteraction.h"
#include "IGEmojiModel.h"
#include "IGGiphyGIFModel.h"
#include "NSCoding-Protocol.h"

@class NSString;

@interface IGDirectOutgoingMessageSharedStoryAction : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_share_containerModule;
  unsigned long long _share_shareType;
  IGDirectOutgoingStoryInteraction *_interactionReply_interaction;
  IGEmojiModel *_quickReaction_emoji;
  IGGiphyGIFModel *_animatedMediaReply_giphyModel;
  IGAvatarGridSticker *_avatarQuickReaction_avatar;
  IGDirectOutgoingMediaUploadConfig *_avatarQuickReaction_mediaUploadConfig;
  BOOL _mention_mentionSharingEnabled;
  NSString *_mention_mentionedUserUsername;
  IGCommentModel *_hype_commentModel;
}

/* class methods */
+ (id)animatedMediaReplyWithGiphyModel:(id)model;
+ (id)avatarQuickReactionWithAvatar:(id)avatar mediaUploadConfig:(id)config;
+ (id)hypeWithCommentModel:(id)model;
+ (id)interactionReplyWithInteraction:(id)interaction;
+ (id)mentionWithMentionSharingEnabled:(BOOL)enabled mentionedUserUsername:(id)username;
+ (id)quickReactionWithEmoji:(id)emoji;
+ (id)reply;
+ (id)shareWithContainerModule:(id)module shareType:(unsigned long long)type;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectOutgoingMessageSharedStoryAction_h */
