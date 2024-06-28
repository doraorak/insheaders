//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayTableViewController_h
#define FBPayTableViewController_h
@import Foundation;

#include "UITableViewController.h"
#include "FBPayTableViewConfiguration.h"
#include "FBPayTableViewDataSource.h"
#include "FBPayTableViewModel.h"
#include "UITableViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIBarButtonItem, UITableView;
@protocol FBPayTableViewControllerDelegate, FBPayUIBaseCoreTableViewLifeCycleDelegate;

@interface FBPayTableViewController : UITableViewController<UITableViewDelegate> {
  /* instance variables */
  FBPayTableViewModel *_viewModel;
  UITableView *_tableView;
  FBPayTableViewDataSource *_dataSource;
  FBPayTableViewConfiguration *_configuration;
  UIActivityIndicatorView *_loadingIndicator;
  UIBarButtonItem *_backItem;
}

@property (weak, nonatomic) NSObject<FBPayTableViewControllerDelegate> *delegate;
@property (nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBPayUIBaseCoreTableViewLifeCycleDelegate> *lifeCycleDelegate;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (void)_configureHeaderView:(id)view;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForFooterInSection:(long long)section;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (void)didTapCTA:(id)cta;
- (void)showError:(id)error;
- (void)reloadWithViewModel:(id)model;
- (void)registerReuseIdentifiers;
- (id)navigationItem;
- (void)_setupViews;
- (id)_backItem;
@end

#endif /* FBPayTableViewController_h */
