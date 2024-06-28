//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrowserViewController_h
#define IGBrowserViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IABAdsContext.h"
#include "IABBuyWithPrimeAuthDelegate-Protocol.h"
#include "IABLoggingContext.h"
#include "IABLoggingCoordinator.h"
#include "IABPerfAnalytics.h"
#include "IGActionableConfirmationToastPresenting-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGBrowserChromeViewController.h"
#include "IGBrowserFullscreenTransitioningDelegate.h"
#include "IGBrowserOverflowMenuController.h"
#include "IGBrowserViewControllerDelegate-Protocol.h"
#include "IGBrowserViewControllerProtocol-Protocol.h"
#include "IGDirectFullScreenWarningViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGIABScreenshotCoordinator.h"
#include "IGIABScreenshotViewController.h"
#include "IGLinkHistoryOptInStatusHelper.h"
#include "IGNavigationControllerDelegate-Protocol.h"
#include "IGTransitionAnimatableDelegate-Protocol.h"
#include "IGViewControllerDoesNotSupportPush-Protocol.h"
#include "IGWebViewController.h"
#include "_TtC27IGIABSafeBrowsingController27IGIABSafeBrowsingController.h"
#include "_TtP14IABLauncherAPI19IABReusableInstance_-Protocol.h"
#include "_TtP27IGIABSafeBrowsingController35IGIABSafeBrowsingControllerDelegate_-Protocol.h"

@class FBPolicyZoneZonedValue, IGBrowserSession, IGUserSession, NSDate, NSMutableArray, NSString, NSURL, UIViewController;
@protocol IGBrowserSharing, UIView<FBWebView;

@interface IGBrowserViewController : IGViewController<IGNavigationControllerDelegate, IGTransitionAnimatableDelegate, _TtP27IGIABSafeBrowsingController35IGIABSafeBrowsingControllerDelegate_, IGActionableConfirmationToastPresenting, _TtP14IABLauncherAPI19IABReusableInstance_, IGGestureHandler, IGViewControllerDoesNotSupportPush, IGBrowserViewControllerProtocol> {
  /* instance variables */
  IGBrowserChromeViewController *_browserChromeViewController;
  UIView<FBWebView> *_webView;
  BOOL _hasDisplayedWebView;
  IGUserSession *_userSession;
  IGBrowserOverflowMenuController *_overflowMenuController;
  NSObject<IGBrowserSharing> *_directSharer;
  IGBrowserFullscreenTransitioningDelegate *_fullscreenTransitioningDelegate;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  IABLoggingCoordinator *_loggingCoordinator;
  NSDate *_browserStartInitializationTime;
  long long _numberOfCloses;
  long long _numberOfActualLaunches;
  NSString *_currentDisplayedWebPageTitle;
  NSDate *_browserOpenedTime;
  NSDate *_browserVisibleTime;
  BOOL _browserPreservationEnabled;
  BOOL _applicationDidReceiveMemoryWarning;
  BOOL _preserveOnForceQuit;
  BOOL _shouldDisableSwipeBackIfLaunchedFromSwipeLeft;
  IABLoggingContext *_loggingContext;
  BOOL _isCheckingURLSafety;
  BOOL _forceURLSafetyCheck;
  _TtC27IGIABSafeBrowsingController27IGIABSafeBrowsingController *_safeBrowsingController;
  IGDirectFullScreenWarningViewController *_fullScreenWarningViewController;
  NSURL *_mostRecentBadURL;
  NSURL *_mostRecentUserSpecifiedSafeURL;
  BOOL _linkshimRedirect;
  FBPolicyZoneZonedValue *_internalZonedInitialURL;
  FBPolicyZoneZonedValue *_zonedCurrentDisplayedURL;
  IABPerfAnalytics *_perfAnalytics;
  BOOL _isLoadingSafeBrowsingHelpCenterArticle;
  NSString *_overrideBrowserTitle;
  id /* block */ _onFailureCallback;
  id /* block */ _onDismissCallback;
  IGLinkHistoryOptInStatusHelper *_linkHistoryOptInStatusHelper;
  BOOL _isBuyWithPrime;
  BOOL _isBuyWithPrime1P;
  BOOL _isBuyWithPrime3P;
  IABAdsContext *_adsContext;
  BOOL _isBrowserNonViewable;
  BOOL _initialURLCompletedLoading;
  NSMutableArray *_viewModeTimePairs;
  IGIABScreenshotViewController *_screenshotViewController;
  IGIABScreenshotCoordinator *_screenshotCoordinator;
  BOOL _isNavigationOptimizationAllowed;
  BOOL _shouldShowTopRoundCorners;
  BOOL _showBarButtons;
  BOOL _canShowMinimizeToPeekButton;
  BOOL _userWebInteractionEnabled;
  BOOL _isBrowserPreloadForSwipeToLeftEnabled;
  BOOL _isBrowserPreloadLoggingFixForSwipeToLeftEnabled;
  BOOL _navigationControllerPanGestureEnabled;
  BOOL _subtitleHidden;
  BOOL _isPartialScreenBrowserExperience;
  BOOL _solidLoadingBackgroundEnabled;
  long long _prefersStatusBarStyle;
  unsigned long long _launchMethod;
  unsigned long long _interactivePresentationState;
  NSString *_customSubtitlePrefix;
  id /* block */ _onPresentOverflowMenuBlock;
  unsigned long long _dismissMethod;
  NSString *_linkHistoryEntryID;
}

@property (retain, nonatomic) IGWebViewController *webViewController;
@property (weak, nonatomic) NSObject<IGBrowserViewControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<IABBuyWithPrimeAuthDelegate> *authDelegate;
@property (retain, @dynamic, nonatomic) FBPolicyZoneZonedValue *zonedInitialURL;
@property (readonly, nonatomic) BOOL prefersNavigationBarHidden;
@property (retain, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) unsigned long long viewMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGBrowserSession *browserSession;
@property (readonly, nonatomic) UIViewController *browserViewControllerForPush;
@property (nonatomic) BOOL fullscreenExperienceEnabled;

/* instance methods */
- (id)initWithBrowserSession:(id)session;
- (id)initWithBrowserSession:(id)session launchMethod:(unsigned long long)method;
- (id)initWithBrowserSession:(id)session launchMethod:(unsigned long long)method privacyPolicy:(unsigned long long)policy privacyContext:(id)context;
- (void)dealloc;
- (BOOL)isPushNotSupportedByViewController;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (BOOL)prefersStatusBarHidden;
- (long long)statusBarStyle;
- (long long)preferredTabBarBehavior;
- (double)actionableConfirmationToastBottomPadding;
- (double)actionableConfirmationToastTopPadding;
- (void)viewDidLayoutSubviews;
- (void)handleAuthURL:(id)url;
- (void)shouldPresentScanCreditCardFooter:(BOOL)footer withUserInfo:(id)info;
- (void)_footerViewTapped;
- (void)becomeNonViewableWithReason:(unsigned long long)reason;
- (void)becomeViewable;
- (BOOL)isFullscreenExperienceEnabled;
- (void)_updateBrowserWithViewMode:(unsigned long long)mode;
- (id)analyticsModuleUri;
- (BOOL)webViewController:(id)controller shouldStartNavigationRequest:(id)request;
- (void)webViewController:(id)controller didChangeActiveWebView:(id)view;
- (void)webViewController:(id)controller didStartNavigationRequest:(id)request;
- (void)webViewController:(id)controller progressChanged:(double)changed;
- (void)webViewController:(id)controller titleChanged:(id)changed;
- (void)webViewController:(id)controller URLChanged:(id)urlchanged;
- (void)webViewController:(id)controller didFinishNavigationRequestWithWebview:(id)webview;
- (void)webViewController:(id)controller didCommitNavigationRequestWithWebview:(id)webview forInitialNavigation:(BOOL)navigation;
- (void)webViewController:(id)controller didFailNavigationRequest:(id)request withError:(id)error;
- (void)webViewController:(id)controller didRetryLoadRequest:(id)request;
- (void)webViewControllerWillDismiss:(id)dismiss completion:(id /* block */)completion;
- (id)browserStartInitializationTime;
- (void)webViewController:(id)controller setExtendedViewToFooter:(id)footer shouldStickToBottom:(BOOL)bottom;
- (void)webViewController:(id)controller didRequestPopupForNavigationAction:(id)action;
- (void)webViewControllerDidBecomeInteractive;
- (void)browserChromeViewController:(id)controller didTapTitleBarButton:(id)button withType:(unsigned long long)type;
- (void)browserChromeViewController:(id)controller didTapWebViewToolbarButtonWithType:(unsigned long long)type;
- (void)browserChromeViewController:(id)controller didScrollWebViewScrollView:(id)view;
- (void)browserChromeViewController:(id)controller didUpdateWebviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)canRespondToGesture:(id)gesture;
- (BOOL)_isBrowserTitleRotationEnabledForURLSource:(unsigned long long)urlsource;
- (void)_configurePartialScreenBrowser;
- (unsigned long long)_browserDismissMethod:(unsigned long long)method;
- (void)didPresentAsReusedInstance;
- (void)didDismissAsReusedInstance;
- (void)_logIABUnifiedEventWithEventName:(id)name category:(unsigned long long)category;
- (void)updateUserActivityState:(id)state;
- (void)_handleApplicationDidReceiveMemoryWarningNotification:(id)notification;
- (void)_handleApplicationWillTerminateNotification:(id)notification;
- (void)_userDidTakeScreenshot;
- (void)openIABWithURL:(id)url adTrackingToken:(id)token linkHistoryEntryID:(id)id;
- (void)navigationController:(id)controller didPopViewController:(id)controller animated:(BOOL)animated;
- (void)navigationController:(id)controller willNavigateToViewController:(id)controller animated:(BOOL)animated;
- (void)navigationController:(id)controller didNavigateToViewController:(id)controller animated:(BOOL)animated;
- (void)safeBrowsingController:(id)controller didUpdateSafeBrowsingSettingTo:(BOOL)to;
- (void)ignoreWarning;
- (void)dismissWarning;
- (void)didTapOnLearnMoreButton;
- (void)transitionAnimatableWillCancelAnimation:(id)animation isForwardTransition:(BOOL)transition;
- (void)_addScreenshotViewController;
- (void)_removeScreenshotViewController;
- (void)removeScreenshot:(id)screenshot;
@end

#endif /* IGBrowserViewController_h */
