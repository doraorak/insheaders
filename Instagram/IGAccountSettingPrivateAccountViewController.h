//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAccountSettingPrivateAccountViewController_h
#define IGAccountSettingPrivateAccountViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "IGAccountPrivacyChangeListener-Protocol.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGScopedListener-Protocol.h"
#include "_TtC40IGDirectYouthMessagingDefaultsController40IGDirectYouthMessagingDefaultsController.h"

@class IGUserSession, NSMutableArray, NSString, UIView;

@interface IGAccountSettingPrivateAccountViewController : IGGroupedTableViewController<IGAccountPrivacyChangeListener, IGPartialModalSheetListener, IGCoreTextLinkHandler, IGScopedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  _TtC40IGDirectYouthMessagingDefaultsController40IGDirectYouthMessagingDefaultsController *_youthMessagingDefaultsController;
  NSMutableArray *_sections;
  UIView *_privacySettingChangePendingRequestBannerView;
  id /* block */ _onPrivacyStatusChange;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredMinimizableInsets;
- (long long)preferredTabBarBehavior;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)settingsIconSwitchViewProvider:(id)provider switchIsOn:(BOOL)on;
- (void)userSession:(id)session didChangeToPrivacyStatus:(long long)status;
- (void)settingChangePermissionRequested:(id)requested;
- (void)didAcknowledgePrivacyToggleWarning;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGAccountSettingPrivateAccountViewController_h */
