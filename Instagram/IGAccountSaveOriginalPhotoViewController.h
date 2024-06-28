//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAccountSaveOriginalPhotoViewController_h
#define IGAccountSaveOriginalPhotoViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "NSObject-Protocol.h"

@class IGTableLayoutSpec, IGUserSession, NSString;

@interface IGAccountSaveOriginalPhotoViewController : IGGroupedTableViewController<NSObject> {
  /* instance variables */
  BOOL _initialPhotoSetting;
  IGTableLayoutSpec *_layoutSpec;
  IGUserSession *_userSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (long long)preferredTabBarBehavior;
- (void)viewDidDisappear:(BOOL)disappear;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)switchProvider:(id)provider switchToggled:(BOOL)toggled;
@end

#endif /* IGAccountSaveOriginalPhotoViewController_h */
