//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSettingsCallingViewController_h
#define IGSettingsCallingViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"

@class IGUserSession;

@interface IGSettingsCallingViewController : IGGroupedTableViewController {
  /* instance variables */
  IGUserSession *_userSession;
}

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (double)tableView:(id)view heightForFooterInSection:(long long)section;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)_fetchCallSettings;
- (void)_logSettingTappedForRowType:(unsigned long long)type;
@end

#endif /* IGSettingsCallingViewController_h */
