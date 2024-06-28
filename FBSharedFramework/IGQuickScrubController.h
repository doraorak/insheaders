//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuickScrubController_h
#define IGQuickScrubController_h
@import Foundation;

#include "IGPanGestureRecognizer.h"
#include "IGQuickScrubDataSource-Protocol.h"
#include "IGScrubberAnnotationState.h"
#include "POPAnimationDelegate-Protocol.h"
#include "POPDecayAnimation.h"
#include "POPSpringAnimation.h"

@class NSString, UIScrollView, UIView;
@protocol UIView<IGQuickScrubAnnotation;

@interface IGQuickScrubController : NSObject<POPAnimationDelegate> {
  /* instance variables */
  IGScrubberAnnotationState *_displayState;
  UIView *_scrollIndicator;
  UIScrollView *_scrollView;
  UIView<IGQuickScrubAnnotation> *_scrubber;
  struct { BOOL allowScrubbing; BOOL isScrubbing; struct CGPoint { double x; double y; } originalOffset; } _scrubbingState;
  IGPanGestureRecognizer *_scrubRecognizer;
  long long _delayedFadeToken;
  POPDecayAnimation *_decelerationAnimation;
  POPSpringAnimation *_bounceAnimation;
  BOOL _alignDisplayStringToScrubber;
  BOOL _inertialScrollingEnabled;
}

@property (weak, nonatomic) NSObject<IGQuickScrubDataSource> *dataSource;
@property (readonly, nonatomic) BOOL scrubbing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCollectionViewLayout:(id)layout scrubber:(id)scrubber scrollView:(id)view launcherSet:(id)set;
- (void)dealloc;
- (BOOL)isScrubbing;
- (void)_handleScrubberPan:(id)pan;
- (void)scrollViewDidScroll;
- (void)viewDidDisappear;
- (void)pop_animationDidStop:(id)stop finished:(BOOL)finished;
- (id)displayStringForItemAtIndexPath:(id)path;
- (void)annotationStateDidUpdate:(id)update;
@end

#endif /* IGQuickScrubController_h */