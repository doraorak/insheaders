//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSettingsPaymentsViewController_h
#define IGSettingsPaymentsViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "IGAccountSettingsPaymentsUnavailableView.h"
#include "IGSettingsPaymentsModel.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString, UIActivityIndicatorView, UIView;

@interface IGSettingsPaymentsViewController : IGGroupedTableViewController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSettingsPaymentsModel *_paymentsModel;
  NSString *_sessionId;
  UIView *_loadingView;
  UIActivityIndicatorView *_loadingIndicator;
  IGAccountSettingsPaymentsUnavailableView *_settingsUnavailableView;
  unsigned long long _disabledPaymentsStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session sessionId:(id)id;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredMinimizableInsets;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)performActionForSearchText:(id)text tableView:(id)view indexPath:(id)path loggerEntrypoint:(id)entrypoint;
- (void)accountSettingsPaymentsEligibilityDecider:(id)decider hasDeterminedEligibility:(BOOL)eligibility disabledPaymentsStatus:(unsigned long long)status;
- (void)accountSettingsPaymentsEligibilityDecider:(id)decider didFailWithError:(id)error;
- (void)paymentsUnavailableViewDidTapPrimaryButton:(id)button;
@end

#endif /* IGSettingsPaymentsViewController_h */