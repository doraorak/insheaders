//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoPlayerVideoIndicatorOverlay_h
#define IGVideoPlayerVideoIndicatorOverlay_h
@import Foundation;

#include "IGVideoPlayerOverlay.h"
#include "IGVideoIndicatorView.h"

@interface IGVideoPlayerVideoIndicatorOverlay : IGVideoPlayerOverlay {
  /* instance variables */
  IGVideoIndicatorView *_indicatorView;
}

@property (nonatomic) BOOL enabled;

/* instance methods */
- (id)initWithStatusAdapter:(id)adapter;
- (BOOL)isEnabled;
- (void)setStyle:(long long)style;
- (void)loadView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredFrameInsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect leftToolbarItemsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame rightToolbarItemsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)reset;
- (void)overlayStatusAdapterDidBeginPlayingVideo:(id)video withMediaViewReference:(id)reference;
- (void)overlayStatusAdapterDidPlayThroughToCompletion:(id)completion;
- (void)overlayStatusAdapter:(id)adapter didReceiveError:(id)error;
@end

#endif /* IGVideoPlayerVideoIndicatorOverlay_h */