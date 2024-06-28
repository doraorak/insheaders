//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialMediaGestureController_h
#define IGSundialMediaGestureController_h
@import Foundation;

#include "IGSundialViewerControlsOverlayController.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGDirectionalPanGestureRecognizer, IGSwipeLocationInfo, IGTimeoutTapGestureRecognizer, NSString, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UIView;
@protocol IGSundialMediaGestureControllerDelegate;

@interface IGSundialMediaGestureController : NSObject<UIGestureRecognizerDelegate> {
  /* instance variables */
  UILongPressGestureRecognizer *_longPressRecognizer;
  IGTimeoutTapGestureRecognizer *_singleTapRecognizer;
  IGTimeoutTapGestureRecognizer *_doubleTapRecognizer;
  IGDirectionalPanGestureRecognizer *_directionalPanRecognizer;
  IGSwipeLocationInfo *_swipeLocationInfo;
  UIPinchGestureRecognizer *_pinchGesture;
  IGSundialViewerControlsOverlayController *_overlayController;
  NSObject<IGSundialMediaGestureControllerDelegate> *_delegate;
  UIView *_sourceView;
  struct { BOOL disableSingleTapGesture; } _options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithView:(id)view overlayController:(id)controller delegate:(id)delegate;
- (void)prepareForReuse;
- (void)disableGesturesExceptForSingleTap;
- (void)_observeSingleTap:(id)tap;
- (void)_observeDoubleTap:(id)tap;
- (void)_observeLongPress:(id)press;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)_directionalSwipe:(id)swipe;
- (void)_pinchToZoom:(id)zoom;
@end

#endif /* IGSundialMediaGestureController_h */
