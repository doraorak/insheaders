//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC19IGCommentQuickReply33IGCommentQuickReplyViewController_h
#define _TtC19IGCommentQuickReply33IGCommentQuickReplyViewController_h
@import Foundation;

#include "UIViewController.h"

@class IGCommentModel, IGMedia;

@interface _TtC19IGCommentQuickReply33IGCommentQuickReplyViewController : UIViewController { // (Swift)
  /* instance variables */
   userSession;
   segmentedPillsBarView;
   delegate;
   logger;
   loggingEventConfig;
   quickReplyStrings;
}

@property (nonatomic, retain) IGCommentModel *replyToComment;
@property (nonatomic, retain) IGMedia *media;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate;
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)quickReplyBarDidShow;
- (void)quickReplyBarDidHide;
- (id)initWithNibName:(id)name bundle:(id)bundle;
@end

#endif /* _TtC19IGCommentQuickReply33IGCommentQuickReplyViewController_h */