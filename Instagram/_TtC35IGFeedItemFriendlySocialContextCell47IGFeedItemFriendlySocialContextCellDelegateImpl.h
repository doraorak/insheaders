//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC35IGFeedItemFriendlySocialContextCell47IGFeedItemFriendlySocialContextCellDelegateImpl_h
#define _TtC35IGFeedItemFriendlySocialContextCell47IGFeedItemFriendlySocialContextCellDelegateImpl_h
@import Foundation;

#include "_TtP35IGFeedItemFriendlySocialContextCell43IGFeedItemFriendlySocialContextCellDelegate_-Protocol.h"

@interface _TtC35IGFeedItemFriendlySocialContextCell47IGFeedItemFriendlySocialContextCellDelegateImpl : NSObject<_TtP35IGFeedItemFriendlySocialContextCell43IGFeedItemFriendlySocialContextCellDelegate_> { // (Swift)
  /* instance variables */
   userSession;
   media;
   feedConfiguration;
   navigationHelper;
   loggingProvider;
   floatingSocialContextActionHandler;
   previewCommentLikeHandler;
}

/* instance methods */
- (void)feedItemFriendlySocialContextCellDidTapContextWith:(id)with bubblePosition:(long long)position;
- (void)feedItemFriendlySocialContextCellDidLongPressContextWithAction:(unsigned long long)action with:(id)with bubblePosition:(long long)position;
- (void)feedItemFriendlySocialContextCellDidRegisterSocialContextViewImpressionWith:(id)with bubblePosition:(long long)position viewpointContext:(id)context;
- (void)feedItemFriendlySocialContextCellDidTapOnCommentString:(id)string url:(id)url;
- (void)feedItemFriendlySocialContextCellDidTapOnLikeButton:(id)button viewModel:(id)model;
- (id)init;
@end

#endif /* _TtC35IGFeedItemFriendlySocialContextCell47IGFeedItemFriendlySocialContextCellDelegateImpl_h */
