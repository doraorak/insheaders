//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemHeaderDelegate_Protocol_h
#define IGFeedItemHeaderDelegate_Protocol_h
@import Foundation;

@protocol IGFeedItemHeaderDelegate <NSObject>
/* instance methods */
- (void)feedItemHeaderDidTapUser:(id)user;
- (void)feedItemHeaderDidTouchdownUser:(id)user;
- (void)feedItemHeaderDidTapSpecificUser:(id)user didTapSpecificUsername:(id)username;
- (void)feedItemHeaderDidTapTransparencyTag:(id)tag;
- (void)feedItemHeaderDidTapPostLocation:(id)location;
- (void)feedItemHeaderDidTapAddLocation:(id)location;
- (void)feedItemHeaderDidTapOnMoreButton:(id)button;
- (void)feedItemHeaderDidTapOnDismissButton:(id)button;
- (void)feedItemHeaderDidTapOnAvatar:(id)avatar;
- (void)feedItemHeaderDidTapOnSponsoredLabel:(id)label;
- (void)feedItemHeaderDidTapOnFollowButton:(id)button withUserAction:(long long)action targetID:(id)id;
- (void)feedItemHeaderDidTapCollabFollowButton:(id)button;
- (void)feedItemHeaderDidTapFavoritesButton:(id)button;
- (void)feedItemHeaderDidTapCloseFriendsButton:(id)button;
- (void)feedItemHeaderDidTapOpalButton:(id)button;
- (void)feedItemHeaderDidTapAddToPostButton:(id)button;
- (void)feedItemHeader:(id)header didTapOnUrl:(id)url;
- (void)feedItemHeader:(id)header didTapOnPartners:(id)partners isEditing:(BOOL)editing;
- (void)feedItemHeader:(id)header didTapHashtag:(id)hashtag;
- (void)feedItemHeader:(id)header didTapViewShopForMerchant:(id)merchant;
- (void)feedItemHeader:(id)header didTapAudioAttributionForMedia:(id)media;
- (void)feedItemHeader:(id)header didTapWearableAttributionForMedia:(id)media;
- (void)feedItemHeader:(id)header didTapGenAIAttributionForMedia:(id)media;
- (void)feedItemHeader:(id)header didTapRemixAttributionForMediaId:(id)id;
- (void)feedItemHeaderDidTapFanClubButton:(id)button withMediaUsername:(id)username;
- (void)feedItemHeader:(id)header showExclusivePreviewAlertWithMediaUsername:(id)username;
- (void)feedItemHeaderDidTapSubscribeButton:(id)button;
- (void)feedItemHeader:(id)header didTapSuggestedTextForMedia:(id)media;
- (void)feedItemHeader:(id)header didTapCyclingSecondaryViewWithRowTypes:(id)types;
- (void)feedItemHeader:(id)header didTapMessageButtonForMedia:(id)media;
- (void)feedItemHeader:(id)header didTapDubbedWithMetaAIAttributionForMedia:(id)media;
@end

#endif /* IGFeedItemHeaderDelegate_Protocol_h */
