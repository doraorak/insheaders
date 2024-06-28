//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveCuratorContainerView_h
#define IGLiveCuratorContainerView_h
@import Foundation;

#include "UIControl.h"
#include "IGLiveIndicatorView.h"
#include "IGProfilePictureImageView.h"
#include "IGProfilePictureImageViewLoadDelegate-Protocol.h"
#include "IGRingViewSpecFactory.h"
#include "IGStoryAvatarRippleEffectView.h"
#include "IGStoryGradientRingView.h"

@class NSString, UILongPressGestureRecognizer, UIView;

@interface IGLiveCuratorContainerView : UIControl<IGProfilePictureImageViewLoadDelegate> {
  /* instance variables */
  IGRingViewSpecFactory *_ringViewSpecFactory;
  IGStoryGradientRingView *_ringView;
  IGStoryAvatarRippleEffectView *_rippleView;
  IGProfilePictureImageView *_curatorView;
  UIView *_dimmerView;
  IGLiveIndicatorView *_liveLabel;
  long long _highlightStyle;
  BOOL _grayed;
  long long _labelContentType;
  UILongPressGestureRecognizer *_longPressGestureRecognizer;
  id _longPressTarget;
  SEL _longPressAction;
  BOOL _isAnimating;
  BOOL _isPrismAvatarRingEnabled;
  long long _profilePhotoSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame highlightStyle:(long long)style ringViewSpecFactory:(id)factory profilePhotoSize:(long long)size;
- (void)layoutSubviews;
- (id)curatorView;
- (void)setHighlighted:(BOOL)highlighted;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)hidden;
- (void)configureWithCurators:(id)curators labelContentType:(long long)type colorType:(long long)type hasBorder:(BOOL)border module:(id)module isImmersiveView:(BOOL)view;
- (void)setLongPressTarget:(id)target action:(SEL)action;
- (void)profilePictureImageViewImageDidLoad:(id)load profileImage:(id)image;
- (void)profilePictureImageViewImageFailedToLoad:(id)load withURL:(id)url;
- (void)profilePictureImageView:(id)view willRequestImageWithURL:(id)url;
- (void)_longPressGestureRecognizerDidChange:(id)change;
- (void)_updateAnimationIfNeeded;
- (BOOL)_shouldAnimate;
@end

#endif /* IGLiveCuratorContainerView_h */