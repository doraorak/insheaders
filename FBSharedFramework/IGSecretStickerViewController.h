//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSecretStickerViewController_h
#define IGSecretStickerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGKeyboardObserver.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "IGLabel.h"
#include "IGSecretStickerView.h"
#include "IGStickerEditingHeaderView.h"
#include "IGStickerEditingHeaderViewDismissalDelegate-Protocol.h"
#include "IGStoryStickerEditingViewControllerProtocol-Protocol.h"
#include "IGUserSession.h"

@class NSArray, NSString, UIView;
@protocol IGSecretStickerViewControllerDelegate;

@interface IGSecretStickerViewController : IGViewController<IGStickerEditingHeaderViewDismissalDelegate, IGKeyboardObserverShowDelegate, IGStoryStickerEditingViewControllerProtocol> {
  /* instance variables */
  BOOL _isNewlyCreated;
  IGUserSession *_userSession;
  UIView *_dimmingView;
  IGStickerEditingHeaderView *_headerView;
  IGSecretStickerView *_stickerView;
  UIView *_clippingContainerView;
  IGKeyboardObserver *_keyboardObserver;
  long long _dismissalSource;
  IGLabel *_disclaimerLabel;
  long long _lastPromptIndex;
}

@property (weak, nonatomic) NSObject<IGSecretStickerViewControllerDelegate> *delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRegion;
@property (nonatomic) double contentRegionCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *backgroundViews;
@property (readonly, nonatomic) UIView *editableStickerView;
@property (readonly, nonatomic) double editableStickerScaleWhileEditing;
@property (readonly, nonatomic) BOOL editableStickerViewIsNewlyCreated;
@property (readonly, nonatomic) BOOL shouldDisableZoomTransitionOnEditStart;
@property (readonly, nonatomic) BOOL shouldDiscardStickerOnDismissal;
@property (readonly, nonatomic) NSString *stickerEditSessionLoggingId;
@optional
@property (readonly, nonatomic) NSArray *secondaryEditableStickerViews;

/* instance methods */
- (id)initWithUserSession:(id)session secretStickerView:(id)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)_didTapBackground;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)stickerEditingHeaderViewDidTapToDismiss:(id)dismiss withDismissalSource:(long long)source;
- (void)didTapSecretStickerMessageButton;
- (void)secretSticker:(id)sticker didChangeTextView:(id)view;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
@end

#endif /* IGSecretStickerViewController_h */