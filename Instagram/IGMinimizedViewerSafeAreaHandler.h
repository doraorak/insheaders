//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMinimizedViewerSafeAreaHandler_h
#define IGMinimizedViewerSafeAreaHandler_h
@import Foundation;

#include "IGNavigationEventListener-Protocol.h"
#include "IGViewAppearListener-Protocol.h"

@class NSHashTable, NSString, UIViewController;
@protocol IGMinimizedViewerSafeAreaAnnouncer;

@interface IGMinimizedViewerSafeAreaHandler : NSObject<IGNavigationEventListener, IGViewAppearListener> {
  /* instance variables */
  NSObject<IGMinimizedViewerSafeAreaAnnouncer> *_announcer;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _safeArea;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _keyboardInsets;
  BOOL _needsKeyboardAnimation;
  UIViewController *_transitioningViewController;
  NSHashTable *_trackedViewControllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)minimizableViewController:(id)controller willMinimizeAnimated:(BOOL)animated;
- (void)minimizableViewController:(id)controller didMinimizeAnimated:(BOOL)animated;
- (void)minimizableViewController:(id)controller willMaximizeAnimated:(BOOL)animated;
- (void)minimizableViewControllerIsMaximizingAnimated:(id)animated;
- (void)minimizableViewController:(id)controller didMaximizeAnimated:(BOOL)animated;
- (void)minimizableViewControllerIsMinimizingAnimated:(id)animated;
- (void)viewControllerWillAppear:(id)appear;
- (void)viewControllerDidAppear:(id)appear withEventData:(id)data;
- (void)viewControllerWillDisappear:(id)disappear;
- (void)viewControllerDidDisappear:(id)disappear withEventData:(id)data;
- (void)viewControllerDidDeallocWithAnalyticsModule:(id)module;
- (void)viewControllerDidUpdate:(id)update updateExtras:(id)extras;
- (void)sharedKeyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)sharedKeyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)viewController:(id)controller viewDidAppearAnimated:(BOOL)animated;
- (void)viewController:(id)controller viewWillAppearAnimated:(BOOL)animated;
@end

#endif /* IGMinimizedViewerSafeAreaHandler_h */
