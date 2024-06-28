//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileFollowingLiveNotificationsViewController_h
#define IGProfileFollowingLiveNotificationsViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "IGUser.h"
#include "IGUserSession.h"

@interface IGProfileFollowingLiveNotificationsViewController : IGGroupedTableViewController {
  /* instance variables */
  IGUser *_user;
  IGUserSession *_userSession;
  long long _selectedLiveSubscriptionStatus;
}

/* instance methods */
- (id)initWithUser:(id)user userSession:(id)session;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)titleForFooterInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (BOOL)prefersStatusBarHidden;
- (struct CGSize { double x0; double x1; })preferredContentSize;
@end

#endif /* IGProfileFollowingLiveNotificationsViewController_h */
