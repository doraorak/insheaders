//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentOrderSummaryDetailedViewController_h
#define FBPayComponentOrderSummaryDetailedViewController_h
@import Foundation;

#include "FBPayComponentExpandedCellDetailedViewController.h"
#include "FBPayExpressCheckoutContext.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;
@protocol FBPayComponentOrderSummaryDetailedViewControllerDelegate, FBPayViewStyleConfiguring;

@interface FBPayComponentOrderSummaryDetailedViewController : FBPayComponentExpandedCellDetailedViewController<UITableViewDelegate, UITableViewDataSource> {
  /* instance variables */
  UITableView *_tableView;
  NSArray *_tableViewCells;
  FBPayExpressCheckoutContext *_context;
  NSObject<FBPayViewStyleConfiguring> *_viewStyleConfiguration;
}

@property (weak, nonatomic) NSObject<FBPayComponentOrderSummaryDetailedViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOrderSummaryCells:(id)cells ecpContext:(id)context;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (long long)numberOfSectionsInTableView:(id)view;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
@end

#endif /* FBPayComponentOrderSummaryDetailedViewController_h */
