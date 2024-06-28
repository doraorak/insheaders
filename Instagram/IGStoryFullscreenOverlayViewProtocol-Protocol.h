//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFullscreenOverlayViewProtocol_Protocol_h
#define IGStoryFullscreenOverlayViewProtocol_Protocol_h
@import Foundation;

@protocol IGStoryFullscreenOverlayViewProtocol 

@property (retain, nonatomic) IGTapButton *promptButton;
@property (readonly, nonatomic) IGTapButton *retryButton;
@property (readonly, nonatomic) IGStoryFullscreenProgressView *progressView;
@property (weak, nonatomic) NSObject<IGStoryFullscreenGestureDelegate> *gestureDelegate;
@property (weak, nonatomic) NSObject<IGStoryFullscreenRetryDelegate> *retryDelegate;
@property (readonly, nonatomic) UISwipeGestureRecognizer *swipeUpGesture;
@property (readonly, nonatomic) UIPanGestureRecognizer *panUpGesture;
@property (nonatomic) BOOL isSponsored;
@property (readonly, nonatomic) IGStoryGradientRingView *loadingView;
@property (weak, nonatomic) NSObject<IGStoryFullscreenTappableOverlayDelegate> *tappableOverlayDelegate;
@property (weak, nonatomic) NSObject<IGMediaOverlayDelegate> *mediaOverlayDelegate;
@property (retain, nonatomic) UIView<IGDirectComposerProtocol> *inputView;

/* instance methods */
- (id)igFOAPollStickerVoteView;
- (void)setStickerVoteViewModelRef:(id)ref;
- (void)setIsComposingMessage:(BOOL)message shouldCoverUnderlyingItems:(BOOL)items;
- (void)setMediaOverlayShown:(BOOL)shown;
- (void)configureOverlayWithContentGateableMediaItem:(id)item;
- (void)configureWithTappableOverlays:(id)overlays mediaSize:(struct CGSize { double x0; double x1; })size isCurrentUser:(BOOL)user module:(id)module container:(id)container shouldShowManageStoryMentionToolTip:(BOOL)tip shouldShowResharedMediaToolTip:(BOOL)tip;
- (id)uploadFooterView;
- (void)setChromeHidden:(BOOL)hidden;
- (void)prepareForReuse;
@end

#endif /* IGStoryFullscreenOverlayViewProtocol_Protocol_h */