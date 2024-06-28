//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentGroupFetcher_h
#define IGCommentGroupFetcher_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserSession, NSString;

@interface IGCommentGroupFetcher : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_feedItemPK;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session feedItemPK:(id)pk;
- (void)loadMorePreviewCommentsForCommentGroup:(id)group loadMoreDirection:(unsigned long long)direction shouldFetchFromInitialChildComment:(BOOL)comment ignorePreviousPreviewComments:(BOOL)comments numberOfCommentsOnLastLoad:(id)load carouselMentionsEnabled:(BOOL)enabled completionBlock:(id /* block */)block;
- (void)loadMoreCommentRepliesForCommentGroup:(id)group ignorePreviousPreviewComments:(BOOL)comments completionBlock:(id /* block */)block;
@end

#endif /* IGCommentGroupFetcher_h */
