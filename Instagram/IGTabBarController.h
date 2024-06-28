//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTabBarController_h
#define IGTabBarController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAccountSwitcherPresenting-Protocol.h"
#include "IGActivityToastListener-Protocol.h"
#include "IGBadgeListener-Protocol.h"
#include "IGNavigationControllerDelegate-Protocol.h"
#include "IGNewsPresentationDelegate-Protocol.h"
#include "IGPanoramaNuxController.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGSwitchUsersViewControllerDelegate-Protocol.h"
#include "IGTabBarControllerType-Protocol.h"
#include "IGTabBarTooltipPresentationManager.h"
#include "IGTabBarViewControllerManager.h"
#include "IGUserUpdatedListener-Protocol.h"
#include "IGWarmStartListener-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGActivityToastData, IGBadgeImpressionManager, IGMainAppSurfaceIntent, IGNavigationController, IGOneTapLoginSwitchErrorManager, IGPartialModalSheetViewController, IGRapidFeedbackController, IGSwitchUsersViewController, IGTabBar, IGTabBarButton, IGUserSession, NSArray, NSString, UIView, UIViewController;
@protocol IGTabBarControllerDelegate;

@interface IGTabBarController : UIViewController<IGBadgeListener, IGNavigationControllerDelegate, IGPartialModalSheetListener, IGSwitchUsersViewControllerDelegate, IGUserUpdatedListener, UIGestureRecognizerDelegate, IGActivityToastListener, IGWarmStartListener, IGTabBarControllerType> {
  /* instance variables */
  long long _accountSwitchEntryPoint;
  IGMainAppSurfaceIntent *_selectedTabBarSurface;
  IGMainAppSurfaceIntent *_lastSelectedTabBarSurface;
  NSArray *_tabBarSurfaces;
  NSArray *_viewControllers;
  IGRapidFeedbackController *_rapidFeedbackController;
  IGTabBarButton *_homeButton;
  IGTabBarButton *_exploreButton;
  IGTabBarButton *_discoverVideoButton;
  IGTabBarButton *_cameraButton;
  IGTabBarButton *_newsButton;
  IGTabBarButton *_profileButton;
  IGTabBarButton *_directInboxButton;
  NSArray *_buttons;
  IGTabBarViewControllerManager *_viewControllerManager;
  IGActivityToastData *_activityToastData;
  BOOL _waitingForLongPressEnd;
  NSObject<IGAccountSwitcherPresenting> *_accountSwitcherPresenter;
  IGOneTapLoginSwitchErrorManager *_accountSwitcherErrorManager;
  IGPanoramaNuxController *_panoramaNuxController;
  BOOL _showSecurityCheckupUpsell;
  BOOL _didMarkUserAccessed;
  UIViewController *_lastPoppedViewController;
  BOOL _swipeToExploreTabEnabled;
  BOOL _swipeToDirectTabEnabled;
  long long _initMode;
  IGBadgeImpressionManager *_badgeImpressionManager;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (nonatomic) BOOL isPerformingTabBarAction;
@property (retain, nonatomic) IGSwitchUsersViewController *switchUsersController;
@property (retain, nonatomic) IGPartialModalSheetViewController *halfSheetViewController;
@property (nonatomic) BOOL isDisplayingSwitchUsersTableView;
@property (retain, nonatomic) NSString *previousUserPk;
@property (weak, nonatomic) NSObject<IGTabBarControllerDelegate> *delegate;
@property (readonly, nonatomic) NSObject<IGNewsPresentationDelegate> *tooltipManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGNavigationController *selectedViewController;
@property (readonly, nonatomic) UIView *tabBar;
@property (readonly, nonatomic) BOOL isTabBarVisible;

/* instance methods */
- (id)initWithUserSession:(id)session tabBarSurfaces:(id)surfaces accountSwitcherPresenter:(id)presenter initMode:(long long)mode;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)forceInitializeViewControllersIfNeeded;
- (BOOL)areViewControllersInitialized;
- (void)_initializeViewControllers;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)_updateTabBarDirection;
- (void)_layoutTabBar;
- (void)_initializeBarButtons;
- (BOOL)containsSurface:(id)surface;
- (id)navigationViewControllerForAppSurfaceIntent:(id)intent;
- (id)profileViewController;
- (id)activityFeedViewController;
- (id)exploreViewController;
- (id)feedViewController;
- (id)inboxViewController;
- (id)directInboxNavigationController;
- (id)discoverVideoNavigationController;
- (id)_feedViewController;
- (void)tabBarControllerTypeConformanceTag;
- (void)setSelectedTabBarSurface:(id)surface animated:(BOOL)animated;
- (id)_analyticsModuleForTopViewController;
- (BOOL)_maybeHandleHomeFeedHoistingWithSurface:(id)surface;
- (void)_setSelectedTabBarSurface:(id)surface isTabBarAction:(BOOL)action animated:(BOOL)animated;
- (void)_handleExploreTabButtonTapOnRootExploreViewController:(id)controller;
- (id)selectedTabBarSurface;
- (id)buttonForTabBarSurface:(id)surface;
- (void)popAllNonVisibleNavigationControllersToRoot;
- (void)hideToastsAnimated:(BOOL)animated;
- (void)moveDownTabBarToOffset:(double)offset;
- (void)setBarButtonAlpha:(double)alpha;
- (BOOL)isDefaultState;
- (void)resetToDefaultState;
- (long long)tabBarAppearance;
- (void)setTabBarAppearance:(long long)appearance;
- (void)setButtonDimmingEnabled:(BOOL)enabled;
- (void)setTabBarDividerLineVisible:(BOOL)visible;
- (void)_homeButtonPressed;
- (void)_resetHomeTabBadgeIfPreviouslyInactive;
- (void)_homeButtonLongPressed:(id)pressed;
- (void)_exploreButtonPressed;
- (void)_exploreButtonLongPressed:(id)pressed;
- (void)_discoverVideoButtonPressed;
- (void)_panoramaCameraButtonPressed;
- (void)_panoramaCameraButtonLongPressed:(id)pressed;
- (void)_newsButtonPressed;
- (void)_profileButtonPressed;
- (void)_profileButtonLongPressed:(id)pressed;
- (void)_profileButtonDoubleTapped;
- (void)_accountSwitcherDoubleTapped;
- (void)_doubleTapSwitchAccounts;
- (void)_directInboxButtonPressed;
- (void)_handleUserSwitchLongPress:(id)press;
- (void)_openMultiAccountSwitcher;
- (void)_dismissSwitchUsersTable;
- (void)_displaySwitchUsersTableView:(BOOL)view animated:(BOOL)animated completion:(id /* block */)completion;
- (void)_displaySwitchUsersTableView:(BOOL)view animated:(BOOL)animated transitionDuration:(double)duration completion:(id /* block */)completion;
- (id)_getSwitcherLoggingData:(id)data isDoubleTap:(BOOL)tap;
- (void)_logNavigationEventForClickPoint:(id)point;
- (BOOL)_clickPointShouldLogMediaId:(id)id;
- (void)switchUsersController:(id)controller tableViewDidSelectRowWithUser:(id)user;
- (void)switchUsersController:(id)controller tableViewDidSelectRowWithOneTapLoginSwitchAccount:(id)account;
- (void)switchUsersControllerDidSelectAddAccountRow:(id)row completion:(id /* block */)completion;
- (void)switchUsersControllerDidSelectRowWithCurrentUser:(id)user;
- (void)didUpdateMultipleAccounts;
- (void)didSwitchToAccountWithUserPk:(id)pk;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (BOOL)_shouldTabBarBeHiddenForController:(id)controller;
- (void)setNeedsAttention:(BOOL)attention forSurface:(id)surface;
- (BOOL)_surfaceNeedsAttention:(id)attention;
- (void)navigationController:(id)controller willNavigateToViewController:(id)controller animated:(BOOL)animated;
- (void)navigationController:(id)controller didNavigateToViewController:(id)controller animated:(BOOL)animated;
- (void)navigationController:(id)controller didPopViewController:(id)controller animated:(BOOL)animated;
- (void)didUpdateDirectUnseenCount:(id)count;
- (void)inAppBadgeManagerRequiredActionCountDidUpdate;
- (void)userWasUpdated:(id)updated;
- (void)shoppingCartBadgingService:(id)service primaryEntryPointBadgingStateChanged:(BOOL)changed;
- (void)shoppingCartBadgingService:(id)service didUpdateTotalCartItemCount:(unsigned long long)count;
- (void)_updateDirectBadgeWithValue:(id)value;
- (void)_userAccountSwitched;
- (void)_tryToShowSelfProfileBounceSurvey;
- (long long)_badgeCountForValue:(id)value;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)orientation;
- (void)didUpdateBadge:(id)badge;
- (void)_updateProfileBadge;
- (void)_didReceiveCopyrightViolation:(id)violation;
- (void)_didTapNonProfileButtonArea;
- (BOOL)_shouldDelayAnyToastPopup;
- (BOOL)canCurrentlyDisplayTabBarTooltipType:(long long)type;
- (id)tooltipConfigForTabBarTooltipType:(long long)type;
- (void)willDisplayTabBarTooltipType:(long long)type;
- (void)didEndDisplayingTabBarTooltipType:(long long)type;
- (void)didTapTabBarTooltipType:(long long)type;
- (id)collapsibleViewForTabBarTooltipType:(long long)type;
- (void)receivedActivityToastData:(id)data;
- (void)_impressionDebugging:(id)debugging;
- (void)_tryToShowAccountSwitcherTooltipIfEligible;
- (BOOL)_eligibleForLongPressTooltip:(id)tooltip tooltipLastCheckDateKey:(id)key tooltipTimesCheckedKey:(id)key checkGapWithLastShownTooltip:(BOOL)tooltip;
- (void)_showLongPressTooltip:(id)tooltip tooltipTimesCheckedKey:(id)key;
- (BOOL)_eligibleForDoubleTapTooltip;
- (void)_showDoubleTapTooltip;
- (void)_tryToShowSecurityCheckupUpsellIfEligible;
- (BOOL)_shouldPanoramaButtonDefaultMediaAudienceToOpal;
- (id)_mainAppControllerStoryCreationItemForPanoramaButton;
- (BOOL)_tabBarHasDirectInbox;
- (BOOL)_tabBarHasActivity;
- (BOOL)_tabBarHasProfile;
- (id)_buttonForTabBarSurface:(id)surface;
- (void)_tabBarIsHiding;
- (long long)tabBarStateForChildViewController:(id)controller;
- (void)newPromotionCreated;
- (void)newPromotionSuccessDialogOkActionClick;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)openURLInNewsTab:(id)tab sourceURL:(id)url;
- (void)showSecurityCheckupUpsell:(BOOL)upsell;
- (BOOL)isOnMainFeed;
- (BOOL)isOnExplore;
- (BOOL)isOnDiscoverVideo;
- (BOOL)isOnPostCreation;
- (BOOL)isOnNews;
- (BOOL)isOnProfile;
- (BOOL)isOnDirectInbox;
- (void)ig_resetAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)_logActivityFeedBadgeImpressionWithDisplayStyle:(long long)style;
- (void)_logActivityFeedBadgeClickWithDisplayStyle:(long long)style;
- (void)_logProfileBadgeImpression;
- (void)_logDirectBadgeImpressionWithBadgeCount:(long long)count;
- (void)_logDirectBadgeClickWithBadgeCount:(long long)count;
- (void)_logProfileBadgeClick;
- (void)_logHomeBadgeImpression;
- (void)_logHomeBadgeClick;
- (void)_logTabImpressions;
- (long long)_getCurrentSurface;
- (void)applicationWillWarmStartWithTimeIntervalSinceBackgrounded:(double)backgrounded;
- (void)willSendEvent:(id)event;
- (void)didSendEvent:(id)event;
- (void)interopUpgradeStatusDidChange:(long long)change;
- (BOOL)canProvideInteractivePushViewControllerForNavigationController:(id)controller;
- (id)interactivePushViewControllerForNavigationController:(id)controller;
- (void)interactionDidBeginForViewController:(id)controller;
@end

#endif /* IGTabBarController_h */