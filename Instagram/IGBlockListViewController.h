//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBlockListViewController_h
#define IGBlockListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGBlockListDataSource.h"
#include "IGBlockListFailedLoadStateViewDelegate-Protocol.h"

@class IGBasicListViewController, IGBottomButtonsView, IGUserSession, NSString, UILabel;
@protocol IGBlockListViewControllerDelegate;

@interface IGBlockListViewController : IGViewController<IGBlockListFailedLoadStateViewDelegate> {
  /* instance variables */
  UILabel *_bcnExplanationLabel;
  IGBasicListViewController *_blockListViewController;
  IGBlockListDataSource *_dataSource;
  IGUserSession *_userSession;
  IGBottomButtonsView *_blockAllButtonView;
  BOOL _blockAllEnabled;
  BOOL _shouldLogBlockAllFailure;
  NSString *_failureRequestID;
  NSString *_blockAllTitle;
  NSString *_blockAllError;
  NSObject<IGBlockListViewControllerDelegate> *_suggestedBlockAllDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataSource:(id)source userSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (void)_proceedWithBlockSearch;
- (void)dataSourceDidFailLoad:(id)load withErrorMessage:(id)message;
- (void)dataSourceDidEnterEmptyState:(id)state;
- (void)dataSourceDidSyncWithServer:(id)server;
- (void)dataSourceDidFailBlockStatusUpdate:(id)update withErrorMessage:(id)message;
- (void)dataSourceDidUpdateBlockedUsersList:(id)list;
- (void)dataSourceDidUpdateBlockedStatusForUser:(id)user user:(id)user;
- (void)dataSource:(id)source presentViewController:(id)controller;
- (void)failedLoadStateViewDidTapRetry;
@end

#endif /* IGBlockListViewController_h */