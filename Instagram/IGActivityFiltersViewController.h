//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivityFiltersViewController_h
#define IGActivityFiltersViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGTableLayoutSpec, NSArray, NSMutableSet, NSString, UIButton, UILabel, UITableView;
@protocol IGActivityFiltersViewControllerDelegate;

@interface IGActivityFiltersViewController : UIViewController<UITableViewDelegate, UITableViewDataSource, IGGestureHandler> {
  /* instance variables */
  NSArray *_filterSections;
  NSMutableSet *_selectedFilterIDs;
  UILabel *_titleLabel;
  UIButton *_clearButton;
  UITableView *_tableView;
  IGTableLayoutSpec *_layoutSpec;
  IGBottomButtonsView *_bottomButton;
}

@property (weak, nonatomic) NSObject<IGActivityFiltersViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFilterSections:(id)sections selectedFilterIDs:(id)ids;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_clearButtonTapped;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)tableView:(id)view didDeselectRowAtIndexPath:(id)path;
- (double)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)path;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGActivityFiltersViewController_h */