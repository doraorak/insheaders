//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSettingsAdsViewController_h
#define IGSettingsAdsViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "IGAccountsCenterShouldShowNodeInAccountsCenterHelper.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGSettingsAccountsCenterTransitionBannerHelper.h"
#include "IGSettingsAdsModel.h"

@class IGBloksAsyncActionHandler, NSString;

@interface IGSettingsAdsViewController : IGGroupedTableViewController<IGCoreTextLinkHandler> {
  /* instance variables */
  IGSettingsAdsModel *_adsModel;
  IGBloksAsyncActionHandler *_asyncAdsTopicPreferencesActionHandler;
  IGSettingsAccountsCenterTransitionBannerHelper *_transitionBannerHelper;
  IGAccountsCenterShouldShowNodeInAccountsCenterHelper *_shouldShowSettingNodeInAccountsCenterHelper;
  BOOL _canSeeUTCInAccountsCenter;
  BOOL _canSee3PDInAccountsCenter;
  NSString *_secondaryActionURLTransitionBanner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_handleTapOnLabel:(id)label;
- (id)initWithModel:(id)model;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredMinimizableInsets;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (void)performActionForSearchText:(id)text tableView:(id)view indexPath:(id)path loggerEntrypoint:(id)entrypoint;
@end

#endif /* IGSettingsAdsViewController_h */
