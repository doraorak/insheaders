//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileFollowingNotificationsViewController_h
#define IGProfileFollowingNotificationsViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "FBKVOController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGInfoView.h"
#include "IGUser.h"
#include "IGUserSession.h"

@class NSArray, NSString;

@interface IGProfileFollowingNotificationsViewController : IGGroupedTableViewController<IGGestureHandler> {
  /* instance variables */
  IGUser *_user;
  IGUserSession *_userSession;
  NSString *_clickPoint;
  NSArray *_rowValues;
  FBKVOController *_kvoController;
  BOOL _shouldShowFooter;
  IGInfoView *_loadingView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_rowValuesForUser:(id)user userSession:(id)session;

/* instance methods */
- (id)initWithUser:(id)user userSession:(id)session clickPoint:(id)point shouldShowFooter:(BOOL)footer;
- (id)initWithUser:(id)user userSession:(id)session clickPoint:(id)point shouldShowFooter:(BOOL)footer shouldFetchUserAdditionalInfo:(BOOL)info;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)titleForFooterInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)_fetchAdditionalUserData:(id)data;
- (BOOL)canRespondToGesture:(id)gesture;
- (BOOL)prefersStatusBarHidden;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_stopLoading;
- (void)_startLoading;
@end

#endif /* IGProfileFollowingNotificationsViewController_h */
