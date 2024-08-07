//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromotePrevalidationViewController_h
#define IGPromotePrevalidationViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBloksBoostPostEnvironment.h"
#include "IGBoostBloksContextManager.h"
#include "IGBoostPostLogger.h"
#include "IGBusinessErrorView.h"
#include "IGNavigationControllerDelegate-Protocol.h"
#include "IGPromoteDataStore.h"
#include "IGPromoteErrorDataModel.h"
#include "IGPromoteFlowManagerNavigationProtocol-Protocol.h"
#include "IGPromoteLoginHelper.h"
#include "IGScopedListener-Protocol.h"

@class BusinessAuthConfig, CallerInfo, IGAsyncTask, IGAudioUploadMetadata, IGBottomButtonsView, IGNavigationController, IGUserSession, METAInAppPurchaseStoreManager, NSString, UIActivityIndicatorView, UIViewController;
@protocol IGPromotePrevalidationViewControllerDelegate;

@interface IGPromotePrevalidationViewController : IGPromoteViewController<IGNavigationControllerDelegate, IGPromoteFlowManagerNavigationProtocol, IGScopedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGPromoteDataStore *_dataStore;
  IGBoostPostLogger *_logger;
  IGPromoteErrorDataModel *_promoteError;
  IGPromoteLoginHelper *_promoteLoginHelper;
  IGBusinessErrorView *_prevalidationErrorView;
  IGBottomButtonsView *_bottomButtonsView;
  UIActivityIndicatorView *_spinner;
  long long _viewState;
  long long _currentSubflow;
  IGAsyncTask *_whatsAppAccountTask;
  CallerInfo *_callerInfo;
  BusinessAuthConfig *_authConfig;
  IGAudioUploadMetadata *_selectedAudioUploadMetadata;
  IGNavigationController *_navigationController;
  UIViewController *_viewController;
  IGBloksBoostPostEnvironment *_bloksBoostPostEnvironment;
  METAInAppPurchaseStoreManager *_storeManager;
  IGBoostBloksContextManager *_boostBloksContextManager;
  BOOL _noCachePrevalidationBloksDidShow;
  NSString *_appStoreCurrencyCode;
  NSString *_appStoreCountryCode;
}

@property (weak, nonatomic) NSObject<IGPromotePrevalidationViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session dataStore:(id)store selectedAudioUploadMetadata:(id)metadata navigationController:(id)controller viewController:(id)controller logger:(id)logger;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillLayoutSubviews;
- (void)errorViewDidTapButton:(id)button;
- (void)errorView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)_onCancelBarButtonTapped;
- (void)_onBackBarButtonTapped;
- (BOOL)shouldPopViewControllerWithDismissViewControllers;
- (void)boostASLViewControllerDidTapCancelButton:(id)button;
- (void)bloksOnSuccess:(id)success withAccessToken:(id)token shouldUseBloksToken:(BOOL)token hasPermission:(BOOL)permission;
- (void)bloksOnDismissOrFailure:(id)failure;
- (void)bloksOpenPromotionPayments;
- (void)bloksOpenPaymentsUnsettled:(id)unsettled withAccessToken:(id)token withAdAccountID:(id)id;
- (void)bloksCollectPaymentInformation:(id)information withAdAccountID:(id)id;
- (void)billingWizardDidReturnWithWizardName:(id)name returnCode:(id)code;
- (void)navigationController:(id)controller didPopViewController:(id)controller animated:(BOOL)animated;
- (void)navigationController:(id)controller willNavigateToViewController:(id)controller animated:(BOOL)animated;
- (void)navigationController:(id)controller didNavigateToViewController:(id)controller animated:(BOOL)animated;
@end

#endif /* IGPromotePrevalidationViewController_h */
