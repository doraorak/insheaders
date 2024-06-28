//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentThreadReplyInfo_h
#define IGCommentThreadReplyInfo_h
@import Foundation;

@class IGCommentModel, NSString;

@interface IGCommentThreadReplyInfo : NSObject {
  /* instance variables */
  NSString *_parentCommentPK;
}

@property (readonly, nonatomic) IGCommentModel *replyToComment;

/* class methods */
+ (id)newWithReplyToComment:(id)comment parentCommentPK:(id)pk;

/* instance methods */
@end

#endif /* IGCommentThreadReplyInfo_h */
