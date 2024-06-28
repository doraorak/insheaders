//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoTrimViewController_h
#define IGVideoTrimViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGVideoTrimView.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGVideoClip, NSString;
@protocol IGVideoTrimControllerDelegate;

@interface IGVideoTrimViewController : UIViewController<UIScrollViewDelegate> {
  /* instance variables */
  BOOL _alwaysClampsTrimmedRange;
  BOOL _clampTrimmedRange;
  BOOL _pendingTrimHandleJustification;
  NSObject<IGVideoTrimControllerDelegate> *_trimRangeDelegate;
  double _timeScale;
  double _minClipLength;
  double _maxClipLength;
  IGVideoTrimView *_trimView;
  double _fixedPlaybackSpeed;
  double _dynamicPlaybackSpeed;
  double _previousContentOffset;
  struct _IGRange { double location; double length; } _workingTrimmedRange;
  struct _IGRange { double location; double length; } _committedTrimmedRange;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _trimViewContentInsets;
}

@property (retain, nonatomic) IGVideoClip *videoClip;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } clipDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)updatePlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)trimViewWillBeginUpdatingTrimmedRange:(id)range;
- (void)trimView:(id)view didUpdateTrimmedRange:(struct _IGRange { double x0; double x1; })range;
- (void)trimViewDidEndUpdatingTrimmedRange:(id)range;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
@end

#endif /* IGVideoTrimViewController_h */