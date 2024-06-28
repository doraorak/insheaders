//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectComposerProtocol_Protocol_h
#define IGDirectComposerProtocol_Protocol_h
@import Foundation;

@protocol IGDirectComposerProtocol <NSObject>

@property (weak, nonatomic) NSObject<IGDirectComposerButtonDelegate> *buttonDelegate;
@property (weak, nonatomic) NSObject<IGDirectComposerSizingDelegate> *sizingDelegate;
@property (weak, nonatomic) NSObject<IGDirectComposerMediaPasteDelegate> *mediaPasteDelegate;
@property (weak, nonatomic) NSObject<IGDirectComposerMLSAYTReplyDelegate> *mlSAYTReplyDelegate;
@property (weak, nonatomic) NSObject<IGDirectComposerQuickReplyDelegate> *quickReplyDelegate;
@property (weak, nonatomic) NSObject<IGDirectComposerOverflowButtonMenuDelegate> *overflowButtonMenuDelegate;
@property (weak, nonatomic) NSObject<IGDirectComposerStickerSuggestionsDelegate> *stickerSuggestionsDelegate;
@property (weak, nonatomic) NSObject<IGDirectWriteWithAIContextMenuActionDelegate> *writeWithAIContextMenuActionDelegate;
@property (weak, nonatomic) NSObject<IGDirectWriteWithAIDelegate> *writeWithAIDelegate;
@property (weak, nonatomic) NSObject<IGDirectInlineMediaComposerDelegate> *inlineMediaComposerDelegate;
@property (readonly, nonatomic) IGDirectComposerMode *mode;
@property (retain, nonatomic) IGDirectComposerConfig *config;
@property (nonatomic) BOOL shouldIgnoreKeyboardInput;
@property (readonly, nonatomic) IGDirectKeyboardTextView *textView;
@property (readonly, nonatomic) IGTapButton *plusButton;
@property (readonly, nonatomic) IGTapButton *p2mPaymentRequestButton;
@property (readonly, nonatomic) IGTapButton *highlightedQuickReplyButton;
@property (readonly, nonatomic) IGTapButton *voiceMessageButton;
@property (readonly, nonatomic) IGTapButton *emojiReactionButton;
@property (readonly, nonatomic) IGTapButton *browseSurfaceButton;
@property (readonly, nonatomic) UIView *ovalContainer;
@property (copy, nonatomic) NSArray *textAttributeRanges;
@property (nonatomic) BOOL shouldShowAdditionalReplyTypeButtons;
@property (nonatomic) BOOL animatedEmojiEnabled;
@property (retain, nonatomic) IGGallerySelectionTray *inlineMediaComposerView;
@property (readonly, nonatomic) UIButton *cameraButton;
@property (readonly, nonatomic) UIButton *galleryButton;
@property (readonly, nonatomic) UIButton *stickerButton;
@property (readonly, nonatomic) UIButton *metaAIShortcutButton;

/* instance methods */
- (void)restoreDraftMessage:(id)message animated:(BOOL)animated;
- (void)updateText:(id)text;
- (void)updateCursorPosition:(struct _NSRange { unsigned long long x0; unsigned long long x1; })position;
- (void)updateTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (id)text;
- (void)addTextListener:(id)listener;
- (void)removeTextListener:(id)listener;
- (void)configureWithStyle:(id)style;
- (void)updateText:(id)text mode:(id)mode;
- (void)configureWithLayoutSpecProvider:(id /* block */)provider animated:(BOOL)animated;
- (void)showStickerSuggestionsButtonWithText:(id)text stickerUrl:(id)url;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })composerContentFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })composerInsets;
- (void)expandDirectComposer;
- (void)resetToDefaultMode;
- (unsigned long long)textViewSelectedRangeLocation;
- (id)destinationModeBasedOnText:(id)text config:(id)config quotedContent:(id)content includeGif:(BOOL)gif suggestedStickerUrl:(id)url;
- (void)updateModeBasedOnCurrentTextWithIsAnimated:(BOOL)animated;
- (void)setSendButtonEnabledExternal:(BOOL)external;
- (void)rebuildLayout;
- (BOOL)isEligibleForOverflowButtonMenu;
- (void)updateGif:(id)gif animated:(BOOL)animated;
- (double)ovalHeightForTextViewWidth:(double)width;
- (void)setTopAttachmentViewHidden:(BOOL)hidden animatedWithDuration:(double)duration usingSpringWithDamping:(double)damping initialSpringVelocity:(double)velocity;
- (struct CGPoint { double x0; double x1; })targetLocationOfGifView;
- (void)removeQuotedReply;
- (void)removeEditBar;
- (void)layoutGradientOnButtonsIfNecessaryWithGradientBubbleTracker:(id)tracker;
- (void)setOvalContainerSubviewsHidden:(BOOL)hidden;
@end

#endif /* IGDirectComposerProtocol_Protocol_h */
