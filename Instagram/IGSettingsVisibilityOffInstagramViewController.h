//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSettingsVisibilityOffInstagramViewController_h
#define IGSettingsVisibilityOffInstagramViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "IGCoreTextLinkHandler-Protocol.h"

@class IGUserSession, NSMutableArray, NSString, UIActivityIndicatorView;

@interface IGSettingsVisibilityOffInstagramViewController : IGGroupedTableViewController<IGCoreTextLinkHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  BOOL _isError;
  BOOL _isEmbedsSectionLoading;
  BOOL _isSeoIndexingSectionLoading;
  BOOL _isEmbedsEnabled;
  UIActivityIndicatorView *_spinner;
  NSMutableArray *_sections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (void)settingsIconSwitchViewProvider:(id)provider switchIsOn:(BOOL)on;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGSettingsVisibilityOffInstagramViewController_h */