//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBFundraiserStickerCreationViewController_h
#define IGFBFundraiserStickerCreationViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGFBFundraiserStickerView.h"
#include "IGKeyboardObserver.h"
#include "IGPassthroughView.h"
#include "IGStoryColorPaletteGradientWheel.h"
#include "IGStoryStickerEditingViewControllerProtocol-Protocol.h"
#include "IGTapButton.h"

@class NSArray, NSString, UIView;
@protocol IGFBFundraiserStickerCreationViewControllerDelegate;

@interface IGFBFundraiserStickerCreationViewController : UIViewController<IGStoryStickerEditingViewControllerProtocol> {
  /* instance variables */
  IGFBFundraiserStickerView *_fundraiserStickerView;
  UIView *_dimmingView;
  IGPassthroughView *_contentWrapperView;
  IGTapButton *_doneButton;
  IGStoryColorPaletteGradientWheel *_colorWheel;
  BOOL _stickerWasNewlyCreated;
  IGKeyboardObserver *_keyboardObserver;
}

@property (weak, nonatomic) NSObject<IGFBFundraiserStickerCreationViewControllerDelegate> *delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRegion;
@property (nonatomic) double contentRegionCornerRadius;
@property (nonatomic) long long editorStyle;
@property (readonly, nonatomic) NSArray *backgroundViews;
@property (readonly, nonatomic) UIView *editableStickerView;
@property (readonly, nonatomic) double editableStickerScaleWhileEditing;
@property (readonly, nonatomic) BOOL editableStickerViewIsNewlyCreated;
@property (readonly, nonatomic) BOOL shouldDisableZoomTransitionOnEditStart;
@property (readonly, nonatomic) BOOL shouldDiscardStickerOnDismissal;
@property (readonly, nonatomic) NSString *stickerEditSessionLoggingId;
@optional
@property (readonly, nonatomic) NSArray *secondaryEditableStickerViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFundraiserStickerView:(id)view;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_colorWheelChanged:(id)changed;
- (void)_didTapDoneButton;
- (void)_didTapBackground;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGFBFundraiserStickerCreationViewController_h */
