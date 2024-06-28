//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTRedBoxExtraDataViewController_h
#define RCTRedBoxExtraDataViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;
@protocol RCTRedBoxExtraDataActionDelegate;

@interface RCTRedBoxExtraDataViewController : UIViewController<UITableViewDelegate, UITableViewDataSource> {
  /* instance variables */
  UITableView *_tableView;
  NSMutableArray *_extraDataTitle;
  NSMutableArray *_extraData;
}

@property (weak, nonatomic) NSObject<RCTRedBoxExtraDataActionDelegate> *actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)viewDidAppear:(BOOL)appear;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (long long)numberOfSectionsInTableView:(id)view;
- (void)addExtraData:(id)data forIdentifier:(id)identifier;
- (void)dismiss;
- (void)reload;
- (id)keyCommands;
@end

#endif /* RCTRedBoxExtraDataViewController_h */