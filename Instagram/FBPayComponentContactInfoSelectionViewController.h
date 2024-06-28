//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentContactInfoSelectionViewController_h
#define FBPayComponentContactInfoSelectionViewController_h
@import Foundation;

#include "FBPayExpressCheckoutBaseViewController.h"
#include "FBPayExpressCheckoutNavigationBarConfig.h"
#include "FBPayExpressCheckoutOneTimeCheckoutModel.h"
#include "FBPayFormField.h"
#include "FBPayUPLLoggingAPI-Protocol.h"
#include "FBPaymentsContactInfoEmailDataModel.h"
#include "FBPaymentsContactInfoPhoneNumberDataModel.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UITableView;
@protocol FBPayComponentContactInfoSelectionViewControllerDelegate;

@interface FBPayComponentContactInfoSelectionViewController : FBPayExpressCheckoutBaseViewController<UITableViewDelegate, UITableViewDataSource> {
  /* instance variables */
  BOOL _didRequestPayerName;
  BOOL _didRequestEmail;
  BOOL _didRequestPhone;
  FBPayExpressCheckoutNavigationBarConfig *_editModeNavBarConfig;
  FBPayExpressCheckoutNavigationBarConfig *_doneModeNavBarConfig;
  FBPayExpressCheckoutNavigationBarConfig *_noneModeNavBarConfig;
  BOOL _isRadioButtonsMode;
  NSString *_payerName;
  FBPaymentsContactInfoEmailDataModel *_selectedEmail;
  FBPaymentsContactInfoPhoneNumberDataModel *_selectedPhone;
  NSMutableArray *_allEmails;
  NSMutableArray *_allPhones;
  FBPayFormField *_payerNameFormFieldConfig;
  FBPayFormField *_emailFormFieldConfig;
  FBPayFormField *_phoneFormFieldConfig;
  UITableView *_contactInfoSelectionTableView;
  NSMutableArray *_contactInfoSections;
  NSMutableArray *_contactInfoTableViewSectionNumberOfRows;
  NSIndexPath *_indexPathBeingEdited;
  NSObject<FBPayUPLLoggingAPI> *_logger;
  FBPayExpressCheckoutOneTimeCheckoutModel *_oneTimeCheckoutModel;
  double _maxContentHeight;
  BOOL _shouldEnableOSAutofill;
}

@property (weak, nonatomic) NSObject<FBPayComponentContactInfoSelectionViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFBPayExpressNavigationBarConfig:(id)config didRequestPayerName:(BOOL)name didRequestEmail:(BOOL)email didRequestPhone:(BOOL)phone payerName:(id)name selectedEmail:(id)email selectedPhone:(id)phone allEmails:(id)emails allPhones:(id)phones payerNameFormFieldConfig:(id)config emailFormFieldConfig:(id)config phoneFormFieldConfig:(id)config logger:(id)logger oneTimeCheckoutModel:(id)model maxContentHeight:(double)height shouldEnableOSAutofill:(BOOL)osautofill;
- (void)viewWillAppear:(BOOL)appear;
- (void)userDidTapLeftBarButtonItem;
- (void)userDidTapRightBarButtonItem;
- (void)userDidTapUIElementToPushNewVC:(id)vc heightChangingOption:(long long)option;
- (void)updateNavigationBarConfig:(id)config;
- (void)tableView:(id)view willDisplayHeaderView:(id)view forSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (double)tableView:(id)view heightForFooterInSection:(long long)section;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (void)fbpayComponentFormViewController:(id)controller didHaveComponentDataMutatingRequest:(id)request mutatingCallback:(id /* block */)callback;
- (double)totalViewHeight;
@end

#endif /* FBPayComponentContactInfoSelectionViewController_h */