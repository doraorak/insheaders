//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPinchToZoomOverlayView_h
#define FBPinchToZoomOverlayView_h
@import Foundation;

#include "UIView.h"
#include "FBPinchToZoomOverlayViewModel.h"
#include "NSObject-Protocol.h"

@class NSString, UIButton, UIFont;
@protocol FBPinchToZoomOverlayViewActiveGesturesDelegate, FBPinchToZoomOverlayViewZoomResetDelegate;

@interface FBPinchToZoomOverlayView : UIView<NSObject> {
  /* instance variables */
  NSString *_resetText;
  UIButton *_zoomIndicator;
  UIFont *_font;
  double _zoom;
  BOOL _gesturesActive;
  FBPinchToZoomOverlayViewModel *_viewModel;
  NSObject<FBPinchToZoomOverlayViewZoomResetDelegate> *_zoomResetDelegate;
  NSObject<FBPinchToZoomOverlayViewActiveGesturesDelegate> *_activeGesturesDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithResetText:(id)text font:(id)font;
- (void)layoutSubviews;
- (void)setViewModel:(id)model;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)updateZoomOverlayWithZoom:(double)zoom gesturesActive:(BOOL)active;
- (void)_zoomIndicatorTapped;
@end

#endif /* FBPinchToZoomOverlayView_h */