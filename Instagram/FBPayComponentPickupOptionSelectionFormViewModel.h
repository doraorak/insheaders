//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentPickupOptionSelectionFormViewModel_h
#define FBPayComponentPickupOptionSelectionFormViewModel_h
@import Foundation;

#include "FBPayFormViewModel.h"
#include "FBPayExpressCheckoutPickupFulfillmentOption.h"
#include "FBPayFormUSZipCodeCellViewModel.h"
#include "FBPayFormViewLifeCycleDelegate-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView, UIView;
@protocol FBPayComponentPickupOptionSelectionFormViewModelDelegate, FBPayViewStyleConfiguring;

@interface FBPayComponentPickupOptionSelectionFormViewModel : FBPayFormViewModel<FBPayFormViewLifeCycleDelegate, UITableViewDelegate, UITableViewDataSource> {
  /* instance variables */
  NSObject<FBPayViewStyleConfiguring> *_viewStyleConfiguring;
  FBPayExpressCheckoutPickupFulfillmentOption *_selectedPickupOption;
  NSArray *_pickupOptions;
  NSString *_pickupRadiusZipCode;
  id _locationAccessManager;
  BOOL _shouldShowPrice;
  FBPayFormUSZipCodeCellViewModel *_zipCodeField;
  UITableView *_tableView;
  UIView *_tableViewContainerView;
}

@property (weak, nonatomic) NSObject<FBPayComponentPickupOptionSelectionFormViewModelDelegate> *selectionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSelectedPickupOption:(id)option pickupOptionsList:(id)list pickupRadiusZipCode:(id)code shouldShowPrice:(BOOL)price;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (void)setViewController:(id)controller;
- (void)fbpayFormViewControllerViewDidLoad:(id)load;
- (void)fbpayFormViewControllerViewDidAppear:(id)appear;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)dealloc;
@end

#endif /* FBPayComponentPickupOptionSelectionFormViewModel_h */