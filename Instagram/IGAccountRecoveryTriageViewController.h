//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAccountRecoveryTriageViewController_h
#define IGAccountRecoveryTriageViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAPIClient-Protocol.h"
#include "IGAccountRecoveryTriageContext.h"
#include "IGAccountRecoveryTriageTableController.h"
#include "IGAccountRecoveryTriageView.h"
#include "IGAccountRecoveryTriageViewControllerDelegate-Protocol.h"
#include "IGAssistedAccountRecoveryManager.h"
#include "IGAssistedAccountRecoveryManagerDelegate-Protocol.h"
#include "IGNUXLayoutSpec.h"

@class IGAccessLoginCodeSendingManager, IGRegistrationLogger, NSString;

@interface IGAccountRecoveryTriageViewController : IGViewController<IGAssistedAccountRecoveryManagerDelegate> {
  /* instance variables */
  IGAccountRecoveryTriageContext *_context;
  NSObject<IGAPIClient> *_networker;
  IGRegistrationLogger *_logger;
  IGNUXLayoutSpec *_layoutSpec;
  IGAccountRecoveryTriageView *_accountRecoveryTriageView;
  IGAccountRecoveryTriageTableController *_accountRecoveryTriageTableController;
  IGAccessLoginCodeSendingManager *_codeSendingManager;
  IGAssistedAccountRecoveryManager *_assistedAccountRecoveryManager;
  BOOL _isSubmitting;
}

@property (weak, nonatomic) NSObject<IGAccountRecoveryTriageViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context deviceSession:(id)session networker:(id)networker logger:(id)logger layoutSpec:(id)spec;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)accountRecoveryTriageViewDidTapBackButton:(id)button;
- (void)accountRecoveryTriageViewDidRequestSupport:(id)support;
- (void)accountRecoveryTriageView:(id)view didTapSendButtonWithAccountRecoveryType:(long long)type;
- (void)accountRecoveryTriageTableControllerDidTapEmailRow:(id)row;
- (void)accountRecoveryTriageTableControllerDidTapPhoneRow:(id)row;
- (void)assistedAccountRecoveryManagerDidBackToLogin:(id)login;
@end

#endif /* IGAccountRecoveryTriageViewController_h */
