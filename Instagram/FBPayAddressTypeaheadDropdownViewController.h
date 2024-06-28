//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayAddressTypeaheadDropdownViewController_h
#define FBPayAddressTypeaheadDropdownViewController_h
@import Foundation;

#include "FBPayFormFieldOverlayViewController.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;
@protocol FBPayAddressTypeaheadDropdownViewControllerDelegate;

@interface FBPayAddressTypeaheadDropdownViewController : FBPayFormFieldOverlayViewController<UITableViewDataSource, UITableViewDelegate> {
  /* instance variables */
  NSArray *_addresses;
  UITableView *_tableView;
  NSObject<FBPayAddressTypeaheadDropdownViewControllerDelegate> *_dropdownDelegate;
  double _dropdownHeight;
  int _tableViewCellCount;
  NSString *_prefix;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAddresses:(id)addresses prefix:(id)prefix;
- (void)setDelegate:(id)delegate;
- (double)getNeccessaryHeight;
- (void)viewDidLoad;
- (void)_setupConstraints;
- (id)_getTableConstraints;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)createBaseCellForTableView:(id)view cellIdentifier:(id)identifier;
- (id)createAddressSuggestionCellForTableView:(id)view atIndex:(long long)index;
- (id)createManualEntryCellForTableView:(id)view;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)_attributionIcon;
- (id)_IconURLWithDarkModeEnabled:(BOOL)enabled;
- (void)_manualInputButtonClick;
@end

#endif /* FBPayAddressTypeaheadDropdownViewController_h */
