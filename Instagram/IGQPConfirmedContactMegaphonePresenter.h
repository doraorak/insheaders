//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPConfirmedContactMegaphonePresenter_h
#define IGQPConfirmedContactMegaphonePresenter_h
@import Foundation;

#include "IGQPMegaphoneView.h"
#include "IGQPMegaphoneViewDelegate-Protocol.h"

@class IGConfirmPhoneHelper, IGQPMegaphone, IGUserSession, NSString;
@protocol IGQPViewPresenterDelegate;

@interface IGQPConfirmedContactMegaphonePresenter : NSObject<IGQPMegaphoneViewDelegate> {
  /* instance variables */
  IGQPMegaphone *_megaphone;
  IGQPMegaphoneView *_megaphoneView;
  NSString *_phoneNumber;
  IGUserSession *_userSession;
  IGConfirmPhoneHelper *_confirmPhoneHelper;
}

@property (weak, nonatomic) NSObject<IGQPViewPresenterDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)_buttonActionFromString:(id)string;

/* instance methods */
- (id)initWithMegaphone:(id)megaphone userSession:(id)session;
- (id)viewForMegaphone;
- (void)qpMegaphoneView:(id)view didTapButton:(id)button extraQPInfo:(id)qpinfo completion:(id /* block */)completion;
- (void)qpMegaphoneViewDidDismiss:(id)dismiss;
- (void)qpMegaphoneViewDidTapNotNow:(id)now;
- (void)qpMegaphoneViewNeedsResize:(id)resize;
- (void)qpMegaphoneView:(id)view didTapURL:(id)url;
- (void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)number withResponse:(id)response;
- (void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)resent;
- (void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)number;
- (void)changePhoneNumberViewController:(id)controller doneEditingWithCountryNumber:(id)number phoneNumber:(id)number contactPreference:(unsigned long long)preference;
- (void)changePhonenumberViewController:(id)controller willPresentCountryCodeViewController:(id)controller;
- (void)changePhonenumberViewController:(id)controller didSelectCountryCode:(id)code;
- (void)changePhoneNumberViewController:(id)controller didChangeTwoFactorPhoneNumber:(id)number;
- (void)qpMegaphoneViewDidTapCountryButton:(id)button;
@end

#endif /* IGQPConfirmedContactMegaphonePresenter_h */
