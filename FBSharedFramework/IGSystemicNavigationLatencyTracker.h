//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSystemicNavigationLatencyTracker_h
#define IGSystemicNavigationLatencyTracker_h
@import Foundation;

#include "IGBaseViewController.h"
#include "IGSystemicNavigationLatencyDataLoad.h"
#include "IGSystemicNavigationLatencyIdleScheduler.h"
#include "IGSystemicNavigationLatencyMediaRender.h"
#include "IGSystemicNavigationLatencyNavigationHolder.h"
#include "IGSystemicNavigationLatencyViewControllerTracking-Protocol.h"
#include "IGUser.h"
#include "IGUserFlowAnnotations-Protocol.h"
#include "IGUserFlowMarker.h"
#include "IGUserFlowStateSet.h"
#include "IGViewAppearListener-Protocol.h"
#include "IGViewLoadListener-Protocol.h"

@class NSMutableSet, NSSet, NSString;
@protocol IGSystemicNavigationLatencyTrackerDelegate, IGUserFlowStateSet<IGUserFlowNestableStateSet;

@interface IGSystemicNavigationLatencyTracker : NSObject<IGSystemicNavigationLatencyViewControllerTracking, IGViewLoadListener, IGViewAppearListener> {
  /* instance variables */
  IGUser *_user;
  Class _viewControllerClass;
  NSString *_viewControllerDescription;
  NSMutableSet *_finishedStates;
  NSSet *_allComponentStates;
  double _lastEventTimestamp;
  IGSystemicNavigationLatencyDataLoad *_dataLoad;
  IGUserFlowStateSet *_networkStates;
  BOOL _viewDidAppear;
  double _lastTouchTimestamp;
  long long _touchDownCount;
  BOOL _didRequestToCancelWithReasonNavigatedAway;
  IGSystemicNavigationLatencyIdleScheduler *_idleScheduler;
  unsigned long long _options;
  double _finishMarkerTimestamp;
  BOOL _isDestroyed;
}

@property (weak, nonatomic) NSObject<IGSystemicNavigationLatencyTrackerDelegate> *delegate;
@property (readonly, weak, nonatomic) IGBaseViewController *viewController;
@property (readonly, nonatomic) IGUserFlowMarker *marker;
@property (readonly, nonatomic) IGSystemicNavigationLatencyMediaRender *mediaRender;
@property (copy, nonatomic) IGSystemicNavigationLatencyNavigationHolder *navigationHolder;
@property (readonly, copy, nonatomic) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (nonatomic) BOOL compatability_shouldSkipNavigationChainCheckForMarker;
@property (readonly, nonatomic) NSObject<IGUserFlowAnnotations> *annotations;
@property (copy, nonatomic) NSString *state;
@property (readonly, nonatomic) IGUserFlowStateSet *states;

/* instance methods */
- (id)initWithUser:(id)user viewpointManager:(id)manager viewController:(id)controller marker:(id)marker idleScheduler:(id)scheduler options:(unsigned long long)options;
- (void)dealloc;
- (void)handleTouch:(id)touch;
- (void)toastWillShowEphemeralAlertWithViewModel:(id)model;
- (void)destroy;
- (id)_viewControllerUserPK;
- (void)_endMarkerWithReason:(long long)reason cancelReason:(long long)reason error:(id)error atTimestamp:(double)timestamp;
- (void)_advanceLastEventTimestampWithTimestamp:(double)timestamp;
- (void)_requestMarkerToEndWithSuccessAtTimestamp:(double)timestamp;
- (void)_requestMarkerToCancelWithReason:(long long)reason atTimestamp:(double)timestamp;
- (void)_requestMarkerToEndWithError:(id)error atTimestamp:(double)timestamp;
- (void)_requestMarkerToEndWithReason:(long long)reason cancelReason:(long long)reason error:(id)error atTimestamp:(double)timestamp;
- (void)_idleSchedulerCompletedForMarkerToEndWithReason:(long long)reason cancelReason:(long long)reason error:(id)error atTimestamp:(double)timestamp;
- (void)_beginState:(id)state atTimestamp:(double)timestamp;
- (void)_endState:(id)state withAction:(unsigned long long)action atTimestamp:(double)timestamp;
- (BOOL)_allComponentsFinished;
- (BOOL)_succeedIfPossible;
- (void)_cancelWithReason:(long long)reason atTimestamp:(double)timestamp;
- (void)_significantEventWillOccurAtTimestamp:(double)timestamp;
- (void)_succeedIfPossibleOtherwiseCancelWithReason:(long long)reason atTimestamp:(double)timestamp;
- (void)compatibility_addActivityIndicationState:(id)state;
- (void)compatibility_viewAnimationWillBegin;
- (void)compatibility_viewAnimationDidFinish;
- (void)compatibility_unregisterFromViewDissapearanceUpdates;
- (void)compatibility_cancelMarker;
- (void)marker:(id)marker addedPoint:(id)point atTimestamp:(double)timestamp;
- (void)marker:(id)marker willFinishWithReason:(long long)reason;
- (void)marker:(id)marker didFinishWithReason:(long long)reason;
- (void)marker:(id)marker applicationDidEnterBackgroundAtTimestamp:(double)timestamp;
- (void)marker:(id)marker applicationWillResignActiveAtTimestamp:(double)timestamp;
- (void)viewControllerViewDidLoad:(id)load;
- (void)viewController:(id)controller viewDidLoadAtTimestamp:(double)timestamp;
- (void)viewController:(id)controller viewWillAppearAnimated:(BOOL)animated;
- (void)viewController:(id)controller viewWillAppearAnimated:(BOOL)animated atTimestamp:(double)timestamp;
- (void)viewController:(id)controller viewDidAppearAnimated:(BOOL)animated;
- (void)viewController:(id)controller viewDidAppearAnimated:(BOOL)animated atTimestamp:(double)timestamp;
- (void)viewController:(id)controller viewWillDisappearAnimated:(BOOL)animated;
- (void)viewController:(id)controller viewWillDisappearAnimated:(BOOL)animated atTimestamp:(double)timestamp;
- (void)viewController:(id)controller viewDidDisappearAnimated:(BOOL)animated;
- (void)viewController:(id)controller viewDidDisappearAnimated:(BOOL)animated atTimestamp:(double)timestamp;
- (void)viewControllerWillDealloc;
- (void)dataLoadDidStart:(id)start atTimestamp:(double)timestamp;
- (void)dataLoad:(id)load willObserveEvent:(unsigned long long)event atTimestamp:(double)timestamp;
- (void)dataLoadDidFinish:(id)finish atTimestamp:(double)timestamp withError:(id)error;
- (void)mediaRenderDidStart:(id)start atTimestamp:(double)timestamp;
- (void)mediaRender:(id)render willObserveEvent:(unsigned long long)event atTimestamp:(double)timestamp;
- (void)mediaRenderDidFinish:(id)finish atTimestamp:(double)timestamp withError:(id)error;
- (void)didObserveRequestStartWithURLString:(id)urlstring atTimestamp:(double)timestamp;
- (void)didObserveResponseEndWithURLString:(id)urlstring atTimestamp:(double)timestamp withSuccess:(BOOL)success cache:(BOOL)cache error:(id)error;
@end

#endif /* IGSystemicNavigationLatencyTracker_h */