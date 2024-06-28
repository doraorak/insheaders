//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoAdFullScreenCell_h
#define IGVideoAdFullScreenCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGFullscreenAdsCTAButton.h"
#include "IGHeartAnimatable-Protocol.h"
#include "IGSundialViewerUFITypeDelegate-Protocol.h"
#include "IGSundialViewerVerticalUFI.h"
#include "IGVideoAdControlsView.h"
#include "IGVideoAdDescriptionView.h"
#include "IGVideoAdHeaderView.h"
#include "IGVideoAdItem.h"
#include "IGVideoAdOptionsView.h"
#include "IGVideoAdViewerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGALButton, NSString, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol IGVideoAdFullScreenCellVideoPlayingDelegate;

@interface IGVideoAdFullScreenCell : UICollectionViewCell<IGSundialViewerUFITypeDelegate, UIGestureRecognizerDelegate, IGHeartAnimatable> {
  /* instance variables */
  UIView *_videoView;
  UIView *_videoContainerView;
  UIView *_overlayContentView;
  UIView *_backgroundView;
  UIView *_dimmerView;
  UIView *_gestureRecognizerView;
  IGVideoAdHeaderView *_headerView;
  IGVideoAdDescriptionView *_captionView;
  IGVideoAdOptionsView *_optionsView;
  IGFullscreenAdsCTAButton *_ctaButton;
  IGALButton *_reelsStyleCTAButton;
  IGVideoAdItem *_videoAdItem;
  IGSundialViewerVerticalUFI *_ufi;
  double _swipeAreaWidthRatio;
  double _swipeAreaHeightRatio;
  BOOL _swipeAreaShouldExcludeControlsBar;
  BOOL _shouldUseTappableCTA;
  BOOL _shouldAlignMetadata;
  BOOL _shouldShowCaption;
  BOOL _isChromeFadingEnabled;
  BOOL _isUFIEnabled;
  UITapGestureRecognizer *_singleTapGestureRecognizer;
  UITapGestureRecognizer *_doubleTapGestureRecognizer;
  long long _chromeFadeAnimationToken;
  IGVideoAdControlsView *_controlsView;
  NSObject<IGVideoAdFullScreenCellVideoPlayingDelegate> *_videoPlayingDelegate;
  UISwipeGestureRecognizer *_swipeUpGestureRecognizer;
}

@property (weak, nonatomic) NSObject<IGVideoAdViewerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)sundialViewerUFI:(id)ufi didReceiveTap:(unsigned long long)tap;
- (void)sundialViewerUFI:(id)ufi didLongPressSendButtonWithGesture:(id)gesture;
- (void)sundialViewerUFI:(id)ufi didLongPressSaveButtonWithGesture:(id)gesture;
- (void)sundialViewerUFI:(id)ufi didLongPressLikeButtonWithGesture:(id)gesture;
- (void)sundialViewerUFI:(id)ufi didScrubPageControlToIndex:(unsigned long long)index;
- (void)sundialViewerUFI:(id)ufi didRegisterImpression:(unsigned long long)impression;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)contentViewForHeartAnimation;
- (void)_ctaButtonTapped:(id)tapped;
- (void)_handleSwipeUpGesture:(id)gesture;
- (void)_handleDoubleTap:(id)tap;
- (void)_toggleChromeVisibility;
- (void)_didTapCollapseDescriptionView:(id)view;
@end

#endif /* IGVideoAdFullScreenCell_h */
