//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainFeedAppHeaderController_h
#define IGMainFeedAppHeaderController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAccountSwitcherPresenting-Protocol.h"
#include "IGBadgeListener-Protocol.h"
#include "IGEDRViewType-Protocol.h"
#include "IGMainAppHeaderView.h"
#include "IGMainFeedReelsCreationHeaderView.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGProDashLogger.h"
#include "IGProDashNetworker.h"
#include "IGSwitchUsersViewControllerDelegate-Protocol.h"
#include "IGUserUpdatedListener-Protocol.h"

@class IGDirectBadgeCounts, IGOneTapLoginSwitchErrorManager, IGPartialModalSheetViewController, IGSwitchUsersViewController, IGUserSession, NSString, UINavigationController;
@protocol IGMainFeedAppHeaderControllerDelegate, IGMainFeedAppHeaderControllerFeedPickerMenuDelegate;

@interface IGMainFeedAppHeaderController : UIViewController<IGBadgeListener, IGPartialModalSheetListener, IGSwitchUsersViewControllerDelegate, IGUserUpdatedListener, IGEDRViewType> {
  /* instance variables */
  long long _accountSwitchEntryPoint;
  IGUserSession *_userSession;
  UINavigationController *_navController;
  BOOL _isDisplayingSwitchUsersTableView;
  IGSwitchUsersViewController *_switchUsersController;
  IGPartialModalSheetViewController *_halfSheetViewController;
  NSObject<IGAccountSwitcherPresenting> *_accountSwitcherPresenter;
  IGOneTapLoginSwitchErrorManager *_accountSwitcherErrorManager;
  BOOL _shouldShowFeedPickerEntryPoint;
  IGProDashLogger *_professionalDashboardLogger;
  IGProDashNetworker *_professionalDashboardNetworker;
  IGDirectBadgeCounts *_lastUpdatedBadgeCount;
  BOOL _hasFetchedProfessionalDashboardBadging;
  IGMainAppHeaderView *_mainAppHeaderView;
  IGMainFeedReelsCreationHeaderView *_reelsCreationHeaderView;
  NSObject<IGMainFeedAppHeaderControllerFeedPickerMenuDelegate> *_feedPickerDelegate;
}

@property (weak, nonatomic) NSObject<IGMainFeedAppHeaderControllerDelegate> *delegate;
@property (readonly, nonatomic) long long viewMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session navigationController:(id)controller transparency:(long long)transparency;
- (void)setEDR:(BOOL)edr;
- (void)navigationController:(id)controller didUpdateInteractivePopToRootWithProgress:(double)progress;
- (void)navigationControllerDidPerformNonAnimatedChange:(id)change;
- (void)navigationControllerDidEndTransition:(id)transition;
- (void)headerDidTapDirect:(id)direct;
- (void)headerDidTapActivity:(id)activity;
- (void)headerDidTapMenu:(id)menu;
- (void)headerDidTapProfessionalDashboard:(id)dashboard isBadged:(BOOL)badged;
- (void)headerDidTapSearch:(id)search;
- (void)headerDidLongTapSearch:(id)search;
- (void)headerDidTapProfile:(id)profile;
- (void)headerDidLongTapProfile:(id)profile;
- (void)headerDidTapCamera:(id)camera;
- (void)headerDidTapDiscoveryMap:(id)map;
- (void)headerCreateMenuDidTapPost:(id)post;
- (void)headerCreateMenuDidTapStory:(id)story;
- (void)headerCreateMenuDidTapReel:(id)reel;
- (void)headerCreateMenuDidTapLive:(id)live;
- (void)headerDidTapLogo:(id)logo;
- (void)headerDidTapCreate:(id)create;
- (void)didUpdateBadge:(id)badge;
- (void)inAppBadgeManagerRequiredActionCountDidUpdate;
- (void)userWasUpdated:(id)updated;
- (void)shoppingCartBadgingService:(id)service primaryEntryPointBadgingStateChanged:(BOOL)changed;
- (void)shoppingCartBadgingService:(id)service didUpdateTotalCartItemCount:(unsigned long long)count;
- (void)didUpdateDirectUnseenCount:(id)count;
- (void)switchUsersControllerDidSelectRowWithCurrentUser:(id)user;
- (void)switchUsersController:(id)controller tableViewDidSelectRowWithUser:(id)user;
- (void)switchUsersController:(id)controller tableViewDidSelectRowWithOneTapLoginSwitchAccount:(id)account;
- (void)switchUsersControllerDidSelectAddAccountRow:(id)row completion:(id /* block */)completion;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)interopUpgradeStatusDidChange:(long long)change;
- (void)headerFeedPickerMenuDidTapFeedPicker:(id)picker selectedFeed:(id)feed;
- (void)headerFeedPickerMenuDidTapManageFavorites:(id)favorites;
- (void)headerFeedPickerMenuDidOpenFeedPicker:(id)picker;
- (void)reelsCreationHeaderView:(id)view didTapCameraButton:(id)button;
@end

#endif /* IGMainFeedAppHeaderController_h */