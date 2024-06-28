//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBusinessConversionAddressViewController_h
#define IGBusinessConversionAddressViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "IG4BLogger.h"
#include "IGBottomButtonsView.h"
#include "IGBusinessAddress.h"
#include "IGBusinessConversionAddressViewControllerDelegate-Protocol.h"
#include "IGDismissableViewController-Protocol.h"
#include "IGUserSession.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"
#include "_TtC17IGBusinessAddress23IGMultipleAddressLogger.h"

@class NSArray, NSString;

@interface IGBusinessConversionAddressViewController : IGGroupedTableViewController<UITableViewDataSource, UITableViewDelegate, IGDismissableViewController> {
  /* instance variables */
  IGBottomButtonsView *_continueButton;
  BOOL _useBottomContinueButton;
  BOOL _shouldDisableBusinessAddressEdit;
  IGBusinessAddress *_originalAddress;
  NSString *_street;
  NSString *_postalCode;
  NSString *_cityName;
  NSString *_cityId;
  NSString *_editingLockedMessage;
  BOOL _shouldDisableDelete;
  _TtC17IGBusinessAddress23IGMultipleAddressLogger *_multipleAddressLogger;
  BOOL _isSingleAddressFlow;
  BOOL _forcePrimary;
  BOOL _hideDelete;
  long long _editingCellIndex;
}

@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL ignoreCancelEventLogging;
@property (readonly, nonatomic) IG4BLogger *logger;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (retain, nonatomic) NSArray *rows;
@property (weak, nonatomic) NSObject<IGBusinessConversionAddressViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPageInfo:(id)info logger:(id)logger userSession:(id)session shouldDisableBusinessAddressEdit:(BOOL)edit useBottomContinueButton:(BOOL)button;
- (id)initWithBusinessAddress:(id)address logger:(id)logger userSession:(id)session shouldDisableBusinessAddressEdit:(BOOL)edit useBottomContinueButton:(BOOL)button showPrimaryHeader:(BOOL)header editingLockedMessage:(id)message shouldDisableDelete:(BOOL)delete;
- (void)didDismissViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)_saveChanges;
- (void)_dismiss;
- (void)_backgroundViewTapped:(id)tapped;
- (void)_continueButtonTapped:(id)tapped;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForFooterInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)_localizedExplanationText;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (id)titleForHeaderInSection:(long long)section;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (void)editableCell:(id)cell didUpdateValue:(id)value forDataKey:(id)key;
- (void)editableCellBeganEditing:(id)editing;
- (BOOL)editableCellWantsReturn:(id)return withValue:(id)value forKey:(id)key;
- (void)editableCellDidEndEditing:(id)editing;
- (void)cityViewController:(id)controller dismissWithCity:(id)city;
@end

#endif /* IGBusinessConversionAddressViewController_h */