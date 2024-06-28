//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSettingsAccessibilityViewController_h
#define IGSettingsAccessibilityViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "FBAnalyticsLogging-Protocol.h"
#include "IGSettingsAccessibilityModel.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGSettingsAccessibilityViewController : IGGroupedTableViewController<NSObject> {
  /* instance variables */
  IGSettingsAccessibilityModel *_accessibilityModel;
  NSObject<FBAnalyticsLogging> *_structuredLogger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithModel:(id)model;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredMinimizableInsets;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)performActionForSearchText:(id)text tableView:(id)view indexPath:(id)path loggerEntrypoint:(id)entrypoint;
- (void)switchProvider:(id)provider switchToggled:(BOOL)toggled;
@end

#endif /* IGSettingsAccessibilityViewController_h */
