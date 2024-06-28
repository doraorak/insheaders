//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentGroupTextView_IGCommentGroupTextView_h
#define IGCommentGroupTextView_IGCommentGroupTextView_h
@import Foundation;

#include "IGBaseView.h"
#include "IGCommentContentWithLikeViewDelegate-Protocol.h"

@class UIButton, UIView;

@interface IGCommentGroupTextView (IGCommentGroupTextView) <IGCommentGroupTextViewProtocol>
/* class methods */
+ (double)heightForCommentViewModel:(id)model userSession:(id)session useInlineStyle:(BOOL)style removeLikeButtonPadding:(BOOL)padding width:(double)width likeCountAndReplyButtonHidden:(BOOL)hidden;
+ (double)profilePictureColumnWidthWithUseInlineStyle:(BOOL)style useFacebookProfileImageStyle:(BOOL)style;

/* instance methods */
- (void)setCoreTextLinkHandler:(id)handler;
- (void)setShowFanClubBadge:(BOOL)badge;
- (void)updateViewWithCommentViewModel:(id)model mediaOwner:(id)owner;
- (void)updatePinTextAndIconViews:(BOOL)views;
- (void)updateLikeCountButtonWithLikeCount:(long long)count;
- (void)updateLikedByButtonWithLikers:(id)likers module:(id)module;
- (void)updatePrivateReplyText;
- (void)updateFacebookReactionButtonCountWithCommentViewModel:(id)model;
- (void)updateFacebookLikeButtonSelectedWithCommentViewModel:(id)model;
@end

#endif /* IGCommentGroupTextView_IGCommentGroupTextView_h */
