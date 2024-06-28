//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP17IGStoryItemAction25IGStoryItemActionDelegate__Protocol_h
#define _TtP17IGStoryItemAction25IGStoryItemActionDelegate__Protocol_h
@import Foundation;

@protocol _TtP17IGStoryItemAction25IGStoryItemActionDelegate_ 
/* instance methods */
- (void)storyItemActionDidFinish;
- (void)storyItemActionDidFinishWithNextActions:(id)actions;
- (void)storyItemActionPresentViewController:(id)controller;
- (void)storyItemActionPresentBrowser;
- (void)storyItemActionDismissViewControllerWithCompletion:(id /* block */)completion;
- (void)storyItemActionDidTapSaveButton;
- (void)storyItemDidTapViewPromotionInsights;
- (void)storyItemActionDisablePanGesture;
- (void)storyItemActionDidMuteUnmute:(BOOL)unmute didChangeStoryMuteStatus:(BOOL)status didChangePostsMuteStatus:(BOOL)status;
- (void)storyItemActionDidMuteFanClubStoriesTeaser;
- (void)storyItemActionDidTapUnfollow:(BOOL)unfollow;
- (void)storyItemActionDidTapCancelUploadButton;
- (void)storyItemActionDidTapAddHighlight;
- (void)storyItemActionDidTapEditHighlightButton;
- (void)storyItemActionDidTapPauseStory;
- (void)storyItemActionWillSharePostAsDirect;
- (void)storyItemDidRemoveStoryAdFromAdActivity;
- (void)storyItemShouldPresentAdsMoreOptionController:(id)controller;
- (void)storyItemDidTapPromote;
- (void)storyItemDidTapViewPromotions;
- (id)storyItemExtraLoggingInfo;
- (void)storyItemDidTapShareToFacebookStory;
- (void)storyItemDidTapArchiveReshare;
- (id)storyItemBrandedContentProvider;
- (void)storyItemActionDidArchiveNow:(id)now;
@end

#endif /* _TtP17IGStoryItemAction25IGStoryItemActionDelegate__Protocol_h */