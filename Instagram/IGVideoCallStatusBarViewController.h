//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallStatusBarViewController_h
#define IGVideoCallStatusBarViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGMinimizableContext.h"
#include "IGVideoCallSession.h"
#include "IGVideoCallViewControllable-Protocol.h"

@class FBTimer, NSDate, NSString, UILabel;

@interface IGVideoCallStatusBarViewController : IGViewController<IGVideoCallViewControllable> {
  /* instance variables */
  UILabel *_label;
  IGMinimizableContext *_minimizableContext;
  IGVideoCallSession *_videoCallSession;
  FBTimer *_callDurationTimer;
  NSDate *_callConnectedTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoCallSession:(id)session;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)isShowingChrome;
- (void)showChrome;
- (void)setState:(long long)state;
- (void)transitionToError:(id)error;
- (BOOL)isMinimized;
- (void)fetchTargetEffectModel:(id)model;
- (void)toggleVideo:(BOOL)video;
- (void)displayDualButtonToast:(id)toast duration:(double)duration tapDualButtonLeftBlock:(id /* block */)block tapDualButtonRightBlock:(id /* block */)block dismissedHandler:(id /* block */)handler;
- (void)dismissToast;
- (void)setIsOnScreen:(BOOL)screen;
- (void)customizeMinimizedViewAnimationStartPropertiesForState:(unsigned long long)state;
- (void)customizeMinimizedViewAnimationEndPropertiesForState:(unsigned long long)state;
- (void)customizeMinimizedViewAnimationCancelledPropertiesForState:(unsigned long long)state;
- (void)minimizedViewTappedForState:(unsigned long long)state;
- (struct CGSize { double x0; double x1; })preferredContentSizeForMinimizedViewState:(unsigned long long)state;
- (BOOL)shouldSupportMinimizedViewExpandedState;
- (void)minimizedViewSwipedToDismiss;
- (void)minimizableContextDidBegin:(id)begin;
- (BOOL)minimizableContextCanMinimize;
- (BOOL)minimizableContextCanMaximize;
- (void)minimizableContextWillMaximizeWithSharedObject:(id)object;
- (void)minimizableContextWillMinimizeWithSharedObject:(id)object;
- (void)minimizableContextDidMaximizeWithSharedObject:(id)object;
- (void)minimizableContextDidMinimizeWithSharedObject:(id)object;
- (id)minimizableContextSharedObject;
- (void)customizeAnimationStartProperties;
- (void)customizeAnimationEndProperties;
- (void)customizeAnimationCancelledProperties;
@end

#endif /* IGVideoCallStatusBarViewController_h */
