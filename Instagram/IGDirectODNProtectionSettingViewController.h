//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectODNProtectionSettingViewController_h
#define IGDirectODNProtectionSettingViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "IGAttributedStringTextViewDelegate-Protocol.h"

@class IGAttributedStringTextView, IGAttributedStringTextViewConfiguration, IGUserSession, NSAttributedString, NSString;

@interface IGDirectODNProtectionSettingViewController : IGGroupedTableViewController<IGAttributedStringTextViewDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSAttributedString *_footerText;
  IGAttributedStringTextView *_footerTextView;
  IGAttributedStringTextViewConfiguration *_footerTextViewConfig;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (double)tableView:(id)view heightForFooterInSection:(long long)section;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)switchProvider:(id)provider switchToggled:(BOOL)toggled;
- (void)attributedStringTextView:(id)view didTapLink:(id)link;
@end

#endif /* IGDirectODNProtectionSettingViewController_h */
