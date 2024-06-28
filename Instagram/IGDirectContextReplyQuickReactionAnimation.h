//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectContextReplyQuickReactionAnimation_h
#define IGDirectContextReplyQuickReactionAnimation_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class IGEmojiModel;

@interface IGDirectContextReplyQuickReactionAnimation : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGEmojiModel *_emojiReaction_emoji;
}

/* class methods */
+ (id)avatarReaction;
+ (id)emojiReactionWithEmoji:(id)emoji;
+ (id)none;
+ (id)selfieReaction;

/* instance methods */
@end

#endif /* IGDirectContextReplyQuickReactionAnimation_h */
