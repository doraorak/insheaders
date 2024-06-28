//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGScalingTransitionImageView_h
#define IGScalingTransitionImageView_h
@import Foundation;

#include "UIView.h"

@class NSMutableOrderedSet, NSMutableSet, NSString, UIImageView, UIViewPropertyAnimator;
@protocol IGScalingTransitionImageViewDelegate;

@interface IGScalingTransitionImageView : UIView {
  /* instance variables */
  NSMutableOrderedSet *_queuedImageURLs;
  NSMutableSet *_pendingImageDownloads;
  NSMutableOrderedSet *_availableImages;
  NSString *_module;
  UIViewPropertyAnimator *_primaryAnimator;
  NSMutableSet *_allAnimators;
  NSMutableSet *_animatedViews;
  UIImageView *_orphanImageView;
  unsigned long long _currentIndex;
  BOOL _wantsPlaybackOnImageLoad;
  BOOL _shouldShowBorder;
  double _imageZoomMultiplier;
  double _imageTransitionDuration;
  double _imageFadeDuration;
}

@property (weak, nonatomic) NSObject<IGScalingTransitionImageViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame imageZoomMultiplier:(double)multiplier imageTransitionDuration:(double)duration imageFadeDuration:(double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)willMoveToWindow:(id)window;
- (void)dealloc;
- (void)preparePlayback;
- (void)startPlayback;
- (void)pausePlayback;
- (void)stopPlayback;
- (void)_beginNewAnimationPhase;
@end

#endif /* IGScalingTransitionImageView_h */
