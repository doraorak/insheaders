//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18BCNFeedItemUFICellP33_A6511A8500558E17A73574DB4535726711UFIDelegate_h
#define _TtC18BCNFeedItemUFICellP33_A6511A8500558E17A73574DB4535726711UFIDelegate_h
@import Foundation;

#include "IGUFIButtonBarViewDelegate-Protocol.h"

@interface _TtC18BCNFeedItemUFICellP33_A6511A8500558E17A73574DB4535726711UFIDelegate : NSObject<IGUFIButtonBarViewDelegate> { // (Swift)
  /* instance variables */
   onLike;
   onComment;
   onShare;
   onShareLongTap;
   onRepost;
   onRepostLongTap;
}

/* instance methods */
- (void)UFIButtonBarDidTapOnLike:(id)like;
- (void)UFIButtonBarDidTapOnComment:(id)comment;
- (void)UFIButtonBarDidTapOnSend:(id)send;
- (void)UFIButtonBarDidTapOnRepost:(id)repost;
- (void)UFIButtonBarDidLongPressOnSend:(id)send;
- (void)UFIButtonBarDidLongPressOnSend:(id)send withGestureRecognizer:(id)recognizer;
- (void)UFIButtonBarDidLongPressOnLike:(id)like withGestureRecognizer:(id)recognizer;
- (void)UFIButtonBarDidLongPressOnRepost:(id)repost;
- (void)UFIButtonBarDidTapOnSave:(id)save;
- (void)UFIButtonBarDidLongPressOnSave:(id)save;
- (void)UFIButtonBarDidTapOnLikeCount:(id)count;
- (void)UFIButtonBarDidTapOnAddContentNote:(id)note;
- (id)init;
@end

#endif /* _TtC18BCNFeedItemUFICellP33_A6511A8500558E17A73574DB4535726711UFIDelegate_h */
