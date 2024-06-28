//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTokenlessPromotePro2ProBlockingViewController_h
#define IGTokenlessPromotePro2ProBlockingViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBloksBoostPostEnvironment.h"
#include "IGBoostAccessTokenHelper.h"
#include "IGPromoteDataStore.h"
#include "IGPromoteLoginHelper.h"
#include "NSObject-Protocol.h"

@class IGNavigationController, IGUserSession, NSDictionary, NSString, UIActivityIndicatorView, UIViewController;
@protocol IGTokenlessPromotePro2ProBlockingViewControllerDelegate;

@interface IGTokenlessPromotePro2ProBlockingViewController : IGPromoteViewController<NSObject> {
  /* instance variables */
  UIActivityIndicatorView *_spinner;
  IGUserSession *_session;
  IGPromoteDataStore *_localDataStore;
  IGBoostAccessTokenHelper *_accessTokenHelper;
  IGPromoteLoginHelper *_promoteLoginHelper;
  IGNavigationController *_navigationController;
  UIViewController *_viewController;
  IGBloksBoostPostEnvironment *_bloksBoostPostEnvironment;
  NSDictionary *_bloksParams;
  BOOL _pro2proBloksDidShow;
}

@property (retain, nonatomic) IGPromoteDataStore *dataStore;
@property (weak, nonatomic) NSObject<IGTokenlessPromotePro2ProBlockingViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session dataStore:(id)store navigationController:(id)controller viewController:(id)controller bloksParams:(id)params;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)_exitAndResetLocalDataStore;
- (void)bloksOnSuccess:(id)success withAccessToken:(id)token shouldUseBloksToken:(BOOL)token hasPermission:(BOOL)permission;
- (void)bloksOnDismissOrFailure:(id)failure;
- (void)bloksOpenPromotionPayments;
- (void)bloksOpenPaymentsUnsettled:(id)unsettled withAccessToken:(id)token withAdAccountID:(id)id;
- (void)bloksCollectPaymentInformation:(id)information withAdAccountID:(id)id;
@end

#endif /* IGTokenlessPromotePro2ProBlockingViewController_h */
