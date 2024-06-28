//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPublishedMessageSharedStoryAction_h
#define IGDirectPublishedMessageSharedStoryAction_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectPublishedMessageSharedStoryReply.h"
#include "IGDirectPublishedMessageSharedStoryShareInfo.h"
#include "IGDirectStoryInteraction.h"
#include "IGEmojiModel.h"
#include "IGExpiringMediaPosting-Protocol.h"
#include "IGGiphyGIFModel.h"
#include "NSCoding-Protocol.h"

@class NSString;

@interface IGDirectPublishedMessageSharedStoryAction : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  IGDirectPublishedMessageSharedStoryShareInfo *_share;
  IGDirectPublishedMessageSharedStoryReply *_reply;
  NSObject<IGExpiringMediaPosting> *_interactionReply_storyInteractionReply;
  NSString *_interactionReply_interactionReelId;
  NSString *_interactionReply_interactionReelStringType;
  BOOL _interactionReply_shouldPersistInThread;
  IGDirectStoryInteraction *_interactionReply_interaction;
  NSObject<IGExpiringMediaPosting> *_quickReaction_storyQuickReaction;
  NSString *_quickReaction_quickReactionReelId;
  NSString *_quickReaction_quickReactionReelStringType;
  BOOL _quickReaction_quickReactionShouldPersistInThread;
  IGEmojiModel *_quickReaction_emoji;
  NSObject<IGExpiringMediaPosting> *_animatedMediaReply_storyAnimatedMediaReply;
  NSString *_animatedMediaReply_animatedMediaReplyReelId;
  NSString *_animatedMediaReply_animatedMediaReplyReelStringType;
  BOOL _animatedMediaReply_animatedMediaReplyShouldPersistInThread;
  IGGiphyGIFModel *_animatedMediaReply_giphyModel;
}

/* class methods */
+ (id)animatedMediaReplyWithStoryAnimatedMediaReply:(id)reply animatedMediaReplyReelId:(id)id animatedMediaReplyReelStringType:(id)type animatedMediaReplyShouldPersistInThread:(BOOL)thread giphyModel:(id)model;
+ (id)interactionReplyWithStoryInteractionReply:(id)reply interactionReelId:(id)id interactionReelStringType:(id)type shouldPersistInThread:(BOOL)thread interaction:(id)interaction;
+ (id)quickReactionWithStoryQuickReaction:(id)reaction quickReactionReelId:(id)id quickReactionReelStringType:(id)type quickReactionShouldPersistInThread:(BOOL)thread emoji:(id)emoji;
+ (id)reply:(id)reply;
+ (id)share:(id)share;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectPublishedMessageSharedStoryAction_h */