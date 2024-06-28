//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTwoFactorBackupCodeViewController_h
#define IGTwoFactorBackupCodeViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGTwoFactorSetupLogger.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGCoreTextView, IGDSHeadlineView, IGTwoFactorStatusInfo, IGUserSession, NSArray, NSString, UIActivityIndicatorView, UILabel, UITableView, UIView;
@protocol IGTwoFactorBackupCodeViewControllerDelegate;

@interface IGTwoFactorBackupCodeViewController : IGViewController<UITableViewDataSource, UITableViewDelegate, IGCoreTextLinkHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGTwoFactorSetupLogger *_setupLogger;
  IGTwoFactorStatusInfo *_statusInfo;
  NSArray *_backupCodes;
  UIActivityIndicatorView *_loadingIndicatorView;
  UIView *_headerContainerView;
  IGDSHeadlineView *_headlineView;
  UILabel *_clarificationView;
  IGCoreTextView *_actionLinkView;
  UITableView *_tableView;
  IGBottomButtonsView *_bottomButtonsView;
  BOOL _isInSetupFlow;
  BOOL _isInSMSSetupFlow;
}

@property (weak, nonatomic) NSObject<IGTwoFactorBackupCodeViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session setupLogger:(id)logger backupCodes:(id)codes statusInfo:(id)info isInSetupFlow:(BOOL)flow isInSMSSetupFlow:(BOOL)flow;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (BOOL)allowsNavigationGestureForGestureOrigin:(struct CGPoint { double x0; double x1; })origin;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (BOOL)tableView:(id)view shouldShowMenuForRowAtIndexPath:(id)path;
- (BOOL)tableView:(id)view canPerformAction:(SEL)action forRowAtIndexPath:(id)path withSender:(id)sender;
- (void)tableView:(id)view performAction:(SEL)action forRowAtIndexPath:(id)path withSender:(id)sender;
- (void)_didTapOnBottomButton;
@end

#endif /* IGTwoFactorBackupCodeViewController_h */