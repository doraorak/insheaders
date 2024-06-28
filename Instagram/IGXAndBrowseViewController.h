//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGXAndBrowseViewController_h
#define IGXAndBrowseViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGALLogContextModelProvider-Protocol.h"
#include "IGBrowserController.h"
#include "IGBrowserViewController.h"
#include "IGBrowserViewControllerDelegate-Protocol.h"
#include "IGXAndBrowseBrowserConfiguration.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGDirectionalPanGestureRecognizer, IGTimeoutTapGestureRecognizer, IGUserSession, NSArray, NSDate, NSString, UIView, UIViewController;
@protocol IGALTrackingModel, IGXAndBrowseViewControllerDelegate;

@interface IGXAndBrowseViewController : IGViewController<UIGestureRecognizerDelegate, IGBrowserViewControllerDelegate, IGALLogContextModelProvider> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  UIViewController *_xViewController;
  UIView *_xView;
  IGBrowserController *_browserController;
  double _currentBrowserY;
  double _prevBrowserY;
  unsigned long long _browserState;
  IGDirectionalPanGestureRecognizer *_browserVerticalPanGesture;
  IGDirectionalPanGestureRecognizer *_browserFullscreenSwipeDownGesture;
  IGTimeoutTapGestureRecognizer *_browserTapGesture;
  IGXAndBrowseBrowserConfiguration *_browserConfiguration;
  unsigned long long _defaultFallbackState;
  unsigned long long _browserColorOption;
  double _minSwipeThreshold;
  double _peekHeightPercentage;
  NSArray *_supportedStates;
  unsigned long long _stateChangeAnimationType;
  double _stateChangeAnimationDuration;
  NSObject<IGALTrackingModel> *_alTrackingModel;
  BOOL _shouldCloseBrowser;
  BOOL _browserEnabled;
  IGBrowserViewController *_browserViewController;
  NSDate *_webViewLoadedTime;
  NSDate *_webViewInteractedTime;
  NSDate *_peekShownTime;
  NSDate *_fullscreenShownTime;
}

@property (weak, nonatomic) NSObject<IGXAndBrowseViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithXViewController:(id)controller userSession:(id)session analyticsModule:(id)module xAndBrowseConfiguration:(id)configuration;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (BOOL)prefersNavigationBarDividerHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersNavigationBarHidden;
- (void)_handlePanGestureRecognizerOnBrowser:(id)browser;
- (void)_handleBrowserFullscreenSwipeDown:(id)down;
- (void)_handleTapGestureRecognizerOnBrowser:(id)browser;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)browserViewControllerDidFinishWithURL:(id)url dismissWithMethod:(unsigned long long)method;
- (void)browserViewControllerDidFinishWithSessionID:(id)id landingPageInteractable:(BOOL)interactable;
- (void)browserViewController:(id)controller loadingProgressChanged:(double)changed;
- (void)browserViewController:(id)controller URLChanged:(id)urlchanged;
- (void)browserViewControllerWillCloseBrowser:(id)browser;
- (id)browserViewControllerPresenter;
- (void)browserViewController:(id)controller didScrollWebViewScrollView:(id)view;
- (void)browserViewController:(id)controller didRequestPopupForNavigationAction:(id)action;
- (void)browserViewControllerDidRequestMinimizeToPeek:(id)peek;
- (void)browserViewControllerDidCompleteInitialLoading;
- (void)browserViewControllerDidBecomeInteractive;
- (id)analyticsModule;
- (id)userSession;
- (id)trackingModel;
@end

#endif /* IGXAndBrowseViewController_h */
