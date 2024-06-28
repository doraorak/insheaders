//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPayoutOnboardingBusinessInfoViewController_h
#define IGPayoutOnboardingBusinessInfoViewController_h
@import Foundation;

#include "IGViewController.h"
#include "FBPayBusinessLogger.h"
#include "IGMonetizationPlatformAddressDataModel.h"
#include "IGMonetizationPlatformFinancialEntityDataModel.h"
#include "IGPayoutHubEditScreenLogging.h"
#include "IGPayoutOnboardingHeaderView.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class IGKeyboardObserver, IGUserSession, NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UITableView;
@protocol IGPayoutOnboardingBusinessInfoViewControllerDelegate;

@interface IGPayoutOnboardingBusinessInfoViewController : IGViewController<UITableViewDataSource, UITableViewDelegate> {
  /* instance variables */
  long long _ownerType;
  IGPayoutOnboardingHeaderView *_headerView;
  UITableView *_tableView;
  IGUserSession *_userSession;
  NSMutableArray *_formValues;
  NSMutableArray *_formErrors;
  BOOL _areFieldsValidated;
  UIActivityIndicatorView *_loadingIndicator;
  NSArray *_igPayoutOnboardingBusinessOwnerFields;
  NSArray *_igPayoutOnboardingBusinessOwnerAsIndividualFields;
  NSArray *_igPayoutOnboardingCurrentFields;
  IGKeyboardObserver *_keyboardObserver;
  double _keyboardBottomInset;
  NSString *_encryptedTaxIDNumber;
  long long _productType;
  long long _businessType;
  NSString *_country;
  NSArray *_states;
  NSArray *_taxTypes;
  NSArray *_nonSensitiveTaxTypes;
  IGMonetizationPlatformFinancialEntityDataModel *_dataModel;
  IGMonetizationPlatformAddressDataModel *_addressDataModel;
  IGPayoutHubEditScreenLogging *_logger;
  FBPayBusinessLogger *_fbpayLogger;
  long long _origin;
  BOOL _needsEditLegalNameAndTaxID;
  NSString *_errorMessage;
}

@property (weak, nonatomic) NSObject<IGPayoutOnboardingBusinessInfoViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session origin:(long long)origin productType:(long long)type dataModel:(id)model uplSessionId:(id)id;
- (void)_onBackButtonTapped;
- (void)_onSaveButtonTapped:(id)tapped;
- (void)setLoading:(BOOL)loading;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (void)payoutSelectorOptionsViewControllerDidSelectOption:(id)option identifier:(long long)identifier index:(long long)index;
- (void)payoutSelectorOptionsViewControllerDidNavigateBackForIdentifier:(long long)identifier;
- (void)payoutBlurbTableViewCell:(id)cell didTapLink:(id)link;
- (void)payoutTextFieldDidUpdateWithText:(id)text identifier:(long long)identifier;
- (void)payoutTextFieldDidEndEditingWithText:(id)text identifier:(long long)identifier;
- (void)keyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)payoutOnboardingHeaderView:(id)view didTapLink:(id)link;
@end

#endif /* IGPayoutOnboardingBusinessInfoViewController_h */