//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFullscreenProgressView_h
#define IGStoryFullscreenProgressView_h
@import Foundation;

#include "UIView.h"
#include "IGPanGestureRecognizerStateUpdateDelegate-Protocol.h"
#include "IGRenderingLoggingProviding-Protocol.h"
#include "IGStoryFullscreenProgressViewModel.h"

@class IGPanGestureRecognizer, IGProgressSegmentView, NSMutableArray, NSString, UILabel, UIView;
@protocol IGStoryFullscreenProgressViewScrubbingDelegate;

@interface IGStoryFullscreenProgressView : UIView<IGPanGestureRecognizerStateUpdateDelegate, IGRenderingLoggingProviding> {
  /* instance variables */
  BOOL _shouldAutoLayout;
  long long _selectedSegment;
  IGPanGestureRecognizer *_scrubGesture;
  UILabel *_segmentCountLabel;
  IGProgressSegmentView *_grabberBarSegment;
  UIView *_grabberBarProgressBarContainer;
  NSMutableArray *_recycledSegmentViews;
  long long _segmentStyle;
  NSMutableArray *_previousEllipsesSegmentViews;
  NSMutableArray *_futureEllipsesSegmentViews;
  BOOL _isCurrentlyScrubbing;
  long long _currentIndex;
  NSObject<IGStoryFullscreenProgressViewScrubbingDelegate> *_scrubbingDelegate;
  NSMutableArray *_segmentViews;
}

@property (readonly, nonatomic) IGStoryFullscreenProgressViewModel *viewModel;
@property (nonatomic) unsigned long long numberOfSegments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame recycleSegmentViews:(BOOL)views;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)setProgress:(double)progress forSegmentAtIndex:(unsigned long long)index;
- (void)removeSegmentAtIndex:(long long)index animated:(BOOL)animated;
- (void)panGestureRecognizer:(id)recognizer didUpdateToState:(long long)state;
- (void)_handleScrubGesture:(id)gesture;
- (id)renderedComponentLoggingInfo;
@end

#endif /* IGStoryFullscreenProgressView_h */
