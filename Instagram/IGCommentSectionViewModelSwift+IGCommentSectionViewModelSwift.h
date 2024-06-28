//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentSectionViewModelSwift_IGCommentSectionViewModelSwift_h
#define IGCommentSectionViewModelSwift_IGCommentSectionViewModelSwift_h
@import Foundation;

#include "IGCommentMusicAttachmentType.h"
#include "IGCommentSectionViewModelProtocol-Protocol.h"
#include "IGCommentTruncateConfiguration.h"

@class IGCommentAttachment, IGMedia, IGRingViewSpec, IGStyledString, IGUser, IGUserSession, NSArray, NSString, NSURL;

@interface IGCommentSectionViewModelSwift (IGCommentSectionViewModelSwift)
/* class methods */
+ (id)commentViewModelFromComment:(id)comment isChildComment:(BOOL)comment style:(long long)style hideReplyButton:(BOOL)button useInlineStyle:(BOOL)style likeButtonPosition:(long long)position module:(id)module canShowCheckmarkButton:(BOOL)button showUnhideButton:(BOOL)button showHideButton:(BOOL)button privateReplyEnabled:(BOOL)enabled hidePinnedAndReplyButton:(BOOL)button hideTimestamp:(BOOL)timestamp showMessageButton:(BOOL)button limitStatus:(long long)status replyCommentMedia:(id)media carouselChildMentionThumbnailURL:(id)url carouselChildMentionDeeplinkURL:(id)url isBroadcastChannelReply:(BOOL)reply commentPostedByMediaOwner:(BOOL)owner likedByMediaOwnerViewText:(id)text showLikedByMediaOwnerBadge:(BOOL)badge showLikedByMediaOwnerFacepile:(BOOL)facepile showMediaOwnerUsername:(BOOL)username musicAttachmentType:(id)type ringViewSpec:(id)spec showFollowerCount:(BOOL)count moreButtonEnabled:(BOOL)enabled showCommentOPBadge:(BOOL)opbadge showPinnedIcon:(BOOL)icon commentTruncateConfig:(id)config isInEditMode:(BOOL)mode shouldShowBottomSeparator:(BOOL)separator showCommentPromptAuthorLabel:(BOOL)label userSession:(id)session;
@end

#endif /* IGCommentSectionViewModelSwift_IGCommentSectionViewModelSwift_h */