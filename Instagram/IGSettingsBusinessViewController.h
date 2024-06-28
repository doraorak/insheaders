//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSettingsBusinessViewController_h
#define IGSettingsBusinessViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "FBPayUPLLoggingAPI-Protocol.h"
#include "IGBusinessFacebookConnectOrClaimPageFlowDelegate-Protocol.h"
#include "IGDirectIcebreakersSettingsDataSource.h"
#include "IGScopedListener-Protocol.h"
#include "IGSettingsBusinessModel.h"

@class CallerInfo, IG4BLogger, IGAddAccountManager, IGBloksAsyncActionHandler, IGBusinessConversionFacebookPageDataSource, IGUserSession, NSArray, NSString, UIActivityIndicatorView;
@protocol IGBusinessFacebookConnectOrClaimPageFlowPresenting;

@interface IGSettingsBusinessViewController : IGGroupedTableViewController<IGBusinessFacebookConnectOrClaimPageFlowDelegate, IGScopedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGBusinessFacebookConnectOrClaimPageFlowPresenting> *_connectPageFlow;
  IGBusinessConversionFacebookPageDataSource *_facebookPageDataSource;
  IGSettingsBusinessModel *_businessModel;
  UIActivityIndicatorView *_loadingSpinner;
  IGBloksAsyncActionHandler *_asyncAgeGatingHandler;
  IGDirectIcebreakersSettingsDataSource *_icebreakersSettingsDataSource;
  IGBloksAsyncActionHandler *_asyncActionHandler;
  NSObject<FBPayUPLLoggingAPI> *_fbpayUPLLogger;
  IG4BLogger *_switchBackLogger;
  BOOL _isSwitchingToBusinessAccount;
  BOOL _isSwitchingToCreatorAccount;
  BOOL _isSwitchingToPersonalAccount;
  BOOL _isFetchingDecisionComplete;
  BOOL _isMV4BUser;
  NSString *_searchEntrypointRowTitle;
  IGAddAccountManager *_addAccountManager;
  CallerInfo *_callerInfo;
  NSArray *_decisions;
  BOOL _isDataSharingEnabled;
  BOOL _isDataSharingRowVisible;
  BOOL _isCreatorMarketplaceFiredImpression;
  IG4BLogger *_pageClaimLogger;
}

@property (copy, nonatomic) id /* block */ onSettingsChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredMinimizableInsets;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)performActionForSearchText:(id)text tableView:(id)view indexPath:(id)path loggerEntrypoint:(id)entrypoint;
- (void)_performActionForSearchPostGatingFetch;
- (void)_openEditProfile;
- (void)_presentXPostingNUXSettingsController;
- (void)_presentDataSharingSettingsController;
- (void)businessFacebookConnectPageFlow:(id)flow didFailWithError:(id)error;
- (void)businessFacebookConnectPageFlow:(id)flow didFinishAction:(long long)action;
- (void)businessFacebookConnectPageFlowDidDismiss:(id)dismiss;
- (void)_updatePageIdWithConnectPageFlow:(id)flow;
- (void)inAppBadgeManagerRequiredActionCountDidUpdate;
- (void)didFinishSyncingWithIcebreakersSettings:(id)settings;
- (void)didFailSyncingWithError:(id)error;
- (void)_fetchMV4BData;
@end

#endif /* IGSettingsBusinessViewController_h */
