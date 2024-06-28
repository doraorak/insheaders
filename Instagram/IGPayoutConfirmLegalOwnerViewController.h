//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPayoutConfirmLegalOwnerViewController_h
#define IGPayoutConfirmLegalOwnerViewController_h
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
@protocol IGPayoutConfirmLegalOwnerViewControllerDelegate;

@interface IGPayoutConfirmLegalOwnerViewController : IGViewController<UITableViewDataSource, UITableViewDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGPayoutConfirmLegalOwnerViewControllerDelegate> *_delegate;
  IGPayoutOnboardingHeaderView *_headerView;
  UITableView *_tableView;
  UIActivityIndicatorView *_loadingIndicator;
  NSArray *_igPayoutOnboardingLegalOwnerFields;
  NSMutableArray *_formValues;
  NSMutableArray *_formErrors;
  IGKeyboardObserver *_keyboardObserver;
  double _keyboardBottomInset;
  BOOL _areFieldsValidated;
  NSArray *_states;
  NSString *_country;
  IGMonetizationPlatformFinancialEntityDataModel *_dataModel;
  IGMonetizationPlatformAddressDataModel *_addressDataModel;
  IGPayoutHubEditScreenLogging *_editLogger;
  FBPayBusinessLogger *_fbpayLogger;
  long long _productType;
  long long _businessType;
  long long _origin;
  NSString *_errorMessage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session origin:(long long)origin delegate:(id)delegate productType:(long long)type dataModel:(id)model uplSessionId:(id)id;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (void)payoutTextFieldDidUpdateWithText:(id)text identifier:(long long)identifier;
- (void)payoutTextFieldDidEndEditingWithText:(id)text identifier:(long long)identifier;
- (void)payoutSelectorOptionsViewControllerDidSelectOption:(id)option identifier:(long long)identifier index:(long long)index;
- (void)payoutSelectorOptionsViewControllerDidNavigateBackForIdentifier:(long long)identifier;
- (void)keyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)payoutBlurbTableViewCell:(id)cell didTapLink:(id)link;
- (void)keyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)_onBackButtonTapped;
- (void)_onNextButtonTapped;
- (void)setLoading:(BOOL)loading;
@end

#endif /* IGPayoutConfirmLegalOwnerViewController_h */
