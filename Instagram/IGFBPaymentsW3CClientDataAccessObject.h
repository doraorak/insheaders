//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBPaymentsW3CClientDataAccessObject_h
#define IGFBPaymentsW3CClientDataAccessObject_h
@import Foundation;

#include "FBPayAccountContext.h"
#include "FBPayFormFieldsForCountry.h"
#include "FBPayPTTStringService.h"
#include "IGFBPaySecurityAPIServiceContext.h"
#include "IGIABAutofillFetchDataHelper.h"
#include "NSObject-Protocol.h"
#include "_TtC15IGAutofillSwift12IGAutofillMC.h"

@class IGUserSession, NSArray, NSString;
@protocol FBPaymentsW3CClientDataAccessObjectDelegate;

@interface IGFBPaymentsW3CClientDataAccessObject : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  FBPayAccountContext *_context;
  NSArray *_cachedCards;
  FBPayFormFieldsForCountry *_fieldsForCountry;
  IGIABAutofillFetchDataHelper *_fetchDataHelper;
  FBPayPTTStringService *_pttStringService;
  IGFBPaySecurityAPIServiceContext *_securityServiceContext;
  NSString *_uplSessionId;
  NSArray *_autofillBindingPaymentTypes;
  _TtC15IGAutofillSwift12IGAutofillMC *_autofillMC;
}

@property (weak, nonatomic) NSObject<FBPaymentsW3CClientDataAccessObjectDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session logger:(id)logger;
- (void)getCreditCardNumberForCredentialId:(id)id cardSecurityCode:(id)code publicEncryptionKey:(id)key latestBoundDeviceKey:(id)key completionHandler:(id /* block */)handler;
- (void)fetchCards:(id)cards;
- (void)addNewCard:(id)card billingAddress:(id)address completionhandler:(id /* block */)completionhandler;
- (void)deleteCard:(id)card;
- (void)getShippingAddresses:(id /* block */)addresses;
- (void)provideAutofillProof:(id)proof cardNumber:(id)number isSilent:(BOOL)silent completionHandler:(id /* block */)handler;
- (void)fetchAutofillData:(id /* block */)data;
- (id)deviceKey;
@end

#endif /* IGFBPaymentsW3CClientDataAccessObject_h */
