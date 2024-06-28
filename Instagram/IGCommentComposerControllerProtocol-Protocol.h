//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentComposerControllerProtocol_Protocol_h
#define IGCommentComposerControllerProtocol_Protocol_h
@import Foundation;

@protocol IGCommentComposerControllerProtocol <NSObject>

@property (nonatomic, weak) NSObject<IGCommentComposerControllerDelegate> *delegate;
@property (nonatomic, readonly) UIView<IGCommentTextViewProtocol> *commentTextView;
@property (nonatomic, readonly) IGAutocompleteController *autocompleteController;
@property (nonatomic, readonly) IGCommentModel *replyToComment;
@property (nonatomic, readonly) IGAPICarouselChildCommentMention *selectedCarouselChildMention;

/* instance methods */
- (id)autoCompleteController;
- (id)viewsToMoveWithKeyboard;
- (void)setupTextBeforeCommentComposingBeginWithPrefillText:(id)text;
- (void)setupTextBeforeCommentComposingBeginWithPrefillText:(id)text;
- (void)setupAttributedTextBeforeCommentComposingBeginWithPrefillAttributedText:(id)text;
- (void)setupAttributedTextBeforeCommentComposingBeginWithPrefillAttributedText:(id)text;
- (void)updateWithReplyToComment:(id)comment;
- (void)updateWithReplyToComment:(id)comment;
- (void)updateAutocompleteForCommentThread:(id)thread;
- (void)updateAutocompleteForCommentThread:(id)thread;
- (void)showAudienceControlReminderIfNecessary;
- (void)hideAudienceControlReminder;
- (void)updateGiftButtonVisibility:(BOOL)visibility animationDuration:(double)duration;
- (BOOL)shouldShowSundialVisualCommentReplyCommenterNux;
- (void)showSundialVisualCommentReplyCommenterNux;
- (BOOL)shouldShowCommentShareDisclosureNux;
- (void)showCommentShareDisclosureNux;
- (void)setupDirectButtonOnNavigationBarAfterFetchingCommentThread:(id)thread;
- (void)setupDirectButtonOnNavigationBarAfterFetchingCommentThread:(id)thread;
- (void)hideReplyBannerView;
- (void)hideLightweightNudge;
- (void)hideSimilarCommentsBannerView;
- (void)openShareSheet;
- (void)presentGIFComposerWithInitialQuery:(id)query;
- (void)presentGIFComposerWithInitialQuery:(id)query;
- (void)showCommentTrayNudge:(unsigned long long)nudge user:(id)user isPersistent:(BOOL)persistent;
- (void)prefillTextWithCarouselSlideMention:(id)mention;
- (void)prefillTextWithCarouselSlideMention:(id)mention;
- (void)showAvatarCommentsTooltipIfNeeded;
- (void)setCarouselMentionsEnabled:(BOOL)enabled withMedia:(id)media;
- (void)setCarouselMentionsEnabled:(BOOL)enabled withMedia:(id)media;
- (void)showSimilarCommentsBannerViewForCount:(long long)count actionBlock:(id /* block */)block dismissBlock:(id /* block */)block;
- (void)showSimilarCommentsBannerViewForCount:(long long)count actionBlock:(id /* block */)block dismissBlock:(id /* block */)block;
@end

#endif /* IGCommentComposerControllerProtocol_Protocol_h */
