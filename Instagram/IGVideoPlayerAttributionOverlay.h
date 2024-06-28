//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoPlayerAttributionOverlay_h
#define IGVideoPlayerAttributionOverlay_h
@import Foundation;

#include "IGVideoPlayerOverlay.h"
#include "IGUserLauncherSet-Protocol.h"
#include "_TtC24IGMediaAttributionShared34IGMediaAttributionOpenCarouselView.h"
#include "_TtP24IGMediaAttributionShared42IGMediaAttributionOpenCarouselViewDelegate_-Protocol.h"

@class IGMediaAttributionConfiguration;
@protocol IGVideoPlayerAttributionOverlayDelegate;

@interface IGVideoPlayerAttributionOverlay : IGVideoPlayerOverlay<_TtP24IGMediaAttributionShared42IGMediaAttributionOpenCarouselViewDelegate_> {
  /* instance variables */
  NSObject<IGUserLauncherSet> *_launcherSetProvider;
  _TtC24IGMediaAttributionShared34IGMediaAttributionOpenCarouselView *_openCarouselAttributionView;
  IGMediaAttributionConfiguration *_attributionConfiguration;
  double _bottomInset;
}

@property (weak, nonatomic) NSObject<IGVideoPlayerAttributionOverlayDelegate> *delegate;

/* instance methods */
- (id)initWithStatusAdapter:(id)adapter launcherSet:(id)set;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredFrameInsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect leftToolbarItemsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame rightToolbarItemsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutOverlayViews;
- (void)_layoutAttributionView;
- (void)overlayWasAddedToContext:(id)context;
- (void)overlayWillBeRemovedFromContext:(id)context;
- (void)overlayStatusAdapterDidUpdatePlaybackEligibility:(id)eligibility;
- (void)overlayStatusAdapterDidLoadVideo:(id)video;
- (void)overlayStatusAdapter:(id)adapter didToggleAudioStatusWithReason:(long long)reason;
- (void)overlayStatusAdapterDidUpdatePlaybackProgress:(id)progress;
- (void)overlayStatusAdapterDidPlayThroughToCompletion:(id)completion;
- (void)overlayStatusAdapterDidStopVideo:(id)video withMediaViewReference:(id)reference;
- (void)didTapLikeButtonWithAttributionView:(id)view isLiked:(BOOL)liked tapSource:(id)source containerModule:(id)module;
- (void)showProfilePageWithUserUrl:(id)url;
@end

#endif /* IGVideoPlayerAttributionOverlay_h */
