//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGViewController_h
#define IGViewController_h
@import Foundation;

#include "IGBaseViewController.h"
#include "FBViewpointAction.h"
#include "IGALLogContextModelProvider-Protocol.h"
#include "IGActionableConfirmationToastPresenting-Protocol.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGCollectionViewDelegatePreviewingProxy.h"
#include "IGKeyboardObserver.h"
#include "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "IGLastActionTracker.h"
#include "IGPerformanceNavigationAppearListener-Protocol.h"
#include "IGScreenshotObserver.h"
#include "IGViewControllerFocusItem.h"
#include "IGViewControllerPresentQueue.h"
#include "IGViewControllerType-Protocol.h"

@class NSMutableArray, NSString, UIBarButtonItem, UILongPressGestureRecognizer;

@interface IGViewController : IGBaseViewController<IGActionableConfirmationToastPresenting, IGAnalyticsModule, IGALLogContextModelProvider, IGKeyboardObserverFrameChangeDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGViewControllerType> {
  /* instance variables */
  NSString *_analyticsModule;
  UIBarButtonItem *_backItem;
  FBViewpointAction *_occlusionViewpointDummyAction;
  NSObject<IGPerformanceNavigationAppearListener> *_perfListener;
  IGCollectionViewDelegatePreviewingProxy *_previewingProxy;
  IGViewControllerPresentQueue *_presentQueue;
}

@property (retain, nonatomic) UIBarButtonItem *loadingBarButtonItem;
@property (nonatomic) long long cancelButtonSide;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (retain, nonatomic) NSMutableArray *previewingContexts;
@property (retain, nonatomic) IGViewControllerFocusItem *lastFocusedItem;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredContentInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredMinimizableInsets;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } safeAreaContentFrame;
@property (nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) IGScreenshotObserver *screenshotObserver;
@property (readonly, nonatomic) IGKeyboardObserver *ig_keyboardObserver;
@property (readonly, nonatomic) double statusBarHeight;
@property (retain, nonatomic) IGLastActionTracker *lastActionTracker;
@property (nonatomic) BOOL shouldUseBackButtonWithLargeTitle;
@property (readonly, nonatomic) NSString *simulatorUpButtonAccessibilityLabel;
@property (readonly, nonatomic) NSString *simulatorDownButtonAccessibilityLabel;
@property (readonly, nonatomic) NSString *simulatorLeftButtonAccessibilityLabel;
@property (readonly, nonatomic) NSString *simulatorRightButtonAccessibilityLabel;
@property (readonly, nonatomic) unsigned long long ig_viewState;
@property (readonly, nonatomic) BOOL ig_isPresentedModally;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isDisplayedInPopover;

/* class methods */
+ (BOOL)isNavigationGestureOriginNearScreenEdge:(struct CGPoint { double x0; double x1; })edge;

/* instance methods */
- (id)init;
- (id)initWithPerformanceListener:(id)listener;
- (id)initWithAnalyticsModuleFromClassName;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
- (id)analyticsModule;
- (id)trackingModel;
- (id)userSession;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (long long)tabBarStateForChildViewController:(id)controller;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (id)keyCommands;
- (id)_backItem;
- (id)navigationItem;
- (void)setModalPresentationStyle:(long long)style;
- (void)onCancelModal;
- (BOOL)prefersNavigationBarDividerHidden;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredTabBarBehavior;
- (long long)preferredBarAppearance;
- (BOOL)allowsNavigationGestureForGestureOrigin:(struct CGPoint { double x0; double x1; })origin;
- (BOOL)allowsEnterNavigationGestureForGestureOrigin:(struct CGPoint { double x0; double x1; })origin;
- (BOOL)wantsLayoutOnKeyboardChanges;
- (id)igTabBarController;
- (void)showModalDismissButtonWithTitle:(id)title side:(long long)side;
- (id)_cancelButtonWithTitle:(id)title;
- (void)setLeftBarButtonItem:(id)item;
- (void)setRightBarButtonItem:(id)item;
- (void)keyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (double)actionableConfirmationToastBottomPadding;
- (double)actionableConfirmationToastTopPadding;
- (BOOL)_isInIos13Modal;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)_setNeedsStatusBarAppearanceUpdateOnlyIfNeeded;
- (void)setHidesBottomBarWhenPushed:(BOOL)pushed;
- (BOOL)hidesBottomBarWhenPushed;
- (void)_updateNavBarOnAppearanceIfNeeded;
- (void)_updateTabBarOnAppearanceIfNeeded;
- (void)setTitle:(id)title;
- (void)_hideModalDismissButton;
- (void)_updateBackButtonWithLargeTitleIfNeeded;
- (id)registerForPreviewingWithDelegate:(id)delegate sourceView:(id)view;
- (void)registerForPreviewingWithDelegate:(id)delegate sourceView:(id)view collectionViewDelegate:(id)delegate listAdapter:(id)adapter;
- (void)unregisterForPreviewingWithContext:(id)context;
- (void)didLongPress:(id)press;
- (void)presentViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)_superPresentViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)dismissViewControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)_popViewControllerWithAnimation;
- (void)navigationLatencyLogging:(id)logging didStartTracking:(id)tracking;
- (void)_scrollUp;
- (void)_scrollDown;
- (void)_scrollLeft;
- (void)_scrollRight;
- (BOOL)isStatusBarHidden;
@end

#endif /* IGViewController_h */
