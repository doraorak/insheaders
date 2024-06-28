//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC10BCNProfile24BCNProfileViewController_h
#define _TtC10BCNProfile24BCNProfileViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"

@interface _TtC10BCNProfile24BCNProfileViewController : IGViewController<IGGestureHandler> { // (Swift)
  /* instance variables */
   userSession;
   isSelfProfile;
   isMainSelfProfileTab;
   initialTab;
   userTask;
   userReference;
   defaultShowAYMF;
   hasTriedShowingAymfForEmptyProfileUser;
   isC18Profile;
   isGated;
   attributionModel;
   loggingAttribution;
   didExpandBio;
   $__lazy_storage_$_analyticsLogger;
   $__lazy_storage_$_loggingConfig;
   cancellables;
   $__lazy_storage_$_toastPresenter;
   $__lazy_storage_$_followController;
   $__lazy_storage_$_pageViewController;
   $__lazy_storage_$_postsViewController;
   $__lazy_storage_$_repliesViewController;
   $__lazy_storage_$_repostsViewController;
   $__lazy_storage_$_tabViewControllers;
   $__lazy_storage_$_scrollAnnouncer;
   $__lazy_storage_$_appSwitcherButton;
   $__lazy_storage_$_settingsButton;
   $__lazy_storage_$_moreButton;
   $__lazy_storage_$_notifButton;
   $__lazy_storage_$_privacyButton;
   $__lazy_storage_$_followNavButton;
   $__lazy_storage_$_navButtonContainer;
   $__lazy_storage_$_customNavigationBar;
   headerCoordinator;
   hackyCustomNavigationBarBackdrop;
   $__lazy_storage_$_emptyViewBeforeUserHasLoaded;
   $__lazy_storage_$_profilePictureUpdater;
   profilePicker;
   chainingDataSource;
   $__lazy_storage_$_headerView;
   $__lazy_storage_$_tabControl;
   $__lazy_storage_$_metricsUpdater;
   profileEnterDate;
   showFollowAlertIfNeeded;
   hasInitiallyConfiguredViewControllerForOnboardedUser;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredContentInsets;

/* instance methods */
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (BOOL)prefersNavigationBarDividerHidden;
- (BOOL)prefersNavigationBarHidden;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)didEnterBackground;
- (void)updateUserActivityState:(id)state;
- (void)onAppSwitcherButtonTap;
- (void)didTapSettingsButton;
- (void)onMoreButtonTap;
- (void)onNotificationButtonTap:(id)tap;
- (void)didTapBack;
- (void)handleThreeFingerPan:(id)pan;
- (void)onTapNavFollowButton;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC10BCNProfile24BCNProfileViewController_h */