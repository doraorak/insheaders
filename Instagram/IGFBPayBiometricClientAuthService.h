//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBPayBiometricClientAuthService_h
#define IGFBPayBiometricClientAuthService_h
@import Foundation;

#include "AuthTicketManager.h"
#include "FBPayServerKeyManager.h"
#include "IGFBDeactivateBioAuthService.h"
#include "IGFBPayActivateBioAuthService.h"
#include "IGFBPayPINAPIService.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGFBPayBiometricClientAuthService : NSObject<NSObject> {
  /* instance variables */
  FBPayServerKeyManager *_serverKeyManager;
  IGFBPayPINAPIService *_pinAPIService;
  AuthTicketManager *_authTicketManager;
  IGFBDeactivateBioAuthService *_deactivateBiometricService;
  IGFBPayActivateBioAuthService *_activateBiometricService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session paymentType:(id)type logger:(id)logger fbpayUPLLogger:(id)upllogger capabilities:(id)capabilities;
- (void)authenticationStatusWithCompletion:(id /* block */)completion;
- (void)activateWithAuthTicket:(id)ticket paymentType:(id)type loggingSessionID:(id)id authenticateUseKeySignDelegate:(id /* block */)delegate completion:(id /* block */)completion;
- (void)deactivateWithAuthTicket:(id)ticket paymentType:(id)type loggingSessionID:(id)id authenticateUseKeySignDelegate:(id /* block */)delegate completion:(id /* block */)completion;
@end

#endif /* IGFBPayBiometricClientAuthService_h */
