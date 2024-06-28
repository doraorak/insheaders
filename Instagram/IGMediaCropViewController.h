//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaCropViewController_h
#define IGMediaCropViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAssetPlayerViewDelegate-Protocol.h"
#include "IGAudioStatusChangeListener-Protocol.h"
#include "IGCropView.h"
#include "IGCropViewUserInteractionDelegate-Protocol.h"
#include "IGPhotoLibraryLimitedAccessHeaderViewDelegate-Protocol.h"

@class IGAssetPlayerView, IGCircularProgressView, IGLabel, IGPhotoLibraryEmptyStateView, IGPillButton, IGTapButton, IGUserSession, IGVideoPlayButton, NSString, UIImageView, UITapGestureRecognizer, UIView;
@protocol IGMediaCropViewDelegate;

@interface IGMediaCropViewController : IGViewController<IGAudioStatusChangeListener, IGAssetPlayerViewDelegate, IGCropViewUserInteractionDelegate, IGPhotoLibraryLimitedAccessHeaderViewDelegate> {
  /* instance variables */
  BOOL _aspectRatioLocked;
  IGUserSession *_userSession;
  long long _soundBehavior;
  BOOL _didEnableAudioFromVolumeButton;
  BOOL _livePhotoPickerVisible;
  long long _currentLivePhotoSelection;
  double _imageAspectRatio;
  BOOL _shouldUseFirstInformedRatio;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _firstInformedRect;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalImageRect;
  BOOL _shouldAutoPlayVideo;
  BOOL _nonSquareEnabled;
  UIView *_underlappingView;
  UIView *_cropContainerBottomBorder;
  IGCropView *_videoCoverFrameImageView;
  UIView *_loadingOverlayView;
  UIImageView *_loadingThumbnailView;
  id _previewAsset;
  IGTapButton *_aspectRatioToggleButton;
  IGPillButton *_labeledAspectRatioToggleButton;
  IGPillButton *_livePhotoSelectionButton;
  IGVideoPlayButton *_playButton;
  IGLabel *_unsupportedVideoLabel;
  IGPhotoLibraryEmptyStateView *_noMediaView;
  UITapGestureRecognizer *_cropDoubleTap;
  UIView *_cropOverlayView;
  double _startCropPanTouchInsetY;
  long long _cropMaskStyle;
}

@property (retain, nonatomic) id selectedAsset;
@property (retain, nonatomic) UIView *cropContentsContainer;
@property (retain, nonatomic) IGCropView *cropView;
@property (retain, nonatomic) IGCircularProgressView *progressView;
@property (retain, nonatomic) IGAssetPlayerView *playerView;
@property (nonatomic) long long cropMode;
@property (nonatomic) long long cropState;
@property (nonatomic) long long aspectRatioState;
@property (weak, nonatomic) NSObject<IGMediaCropViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNonSquareEnabled:(BOOL)enabled cropMaskStyle:(long long)style userSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)updateWithImage:(id)image;
- (void)assetPlayerViewAssetLoaded:(id)loaded;
- (void)assetPlayerViewPlayStateDidChange:(id)change;
- (void)assetPlayerView:(id)view didPlayToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)assetPlayerViewDidPlayToEnd:(id)end;
- (void)assetPlayerView:(id)view effectivePlaybackRateDidChange:(double)change;
- (void)assetPlayerView:(id)view readyToSyncAndPlay:(BOOL)play;
- (void)setAspectRatio:(double)ratio;
- (void)setShouldUseFirstInformedRatio:(BOOL)ratio;
- (id)_titleForAspectRatioState:(long long)state;
- (void)setAspectRatioToggleTitle:(id)title;
- (void)_onCropViewSingleTap;
- (void)_toggleCropperCropModeFromButton;
- (void)_changeCropperAspectRatio;
- (void)_toggleCropperCropMode;
- (void)_showLivePhotoConversionMenu;
- (void)cropView:(id)view didFinishAnimationWithCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withZoomVelocity:(double)velocity;
- (void)audioStatusDidChangeIsAudioEnabled:(BOOL)enabled forReason:(long long)reason;
- (id)_imageForAspectRatioState;
- (void)photoLibraryLimitedAccessHeaderViewDidTapManage:(id)manage;
@end

#endif /* IGMediaCropViewController_h */
