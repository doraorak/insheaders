//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef EBVestaRegistrationClient_h
#define EBVestaRegistrationClient_h
@import Foundation;

#include "EBStateManager.h"
#include "RegisterQPLLogger.h"

@class NSString, PNPandoGraphQLService;
@protocol OS_dispatch_queue;

@interface EBVestaRegistrationClient : NSObject

@property (readonly) PNPandoGraphQLService *graphql;
@property (readonly) NSString *productUseCase;
@property (readonly) RegisterQPLLogger *qpl;
@property (readonly) EBStateManager *stateManager;
@property (readonly) NSObject<OS_dispatch_queue> *vestaQueue;
@property (readonly) id /* block */ completion;

/* instance methods */
- (id)initWithGraphQL:(id)ql stateManager:(id)manager andProductUseCase:(long long)case;
- (void)registerWithPIN:(id)pin forDeviceId:(id)id completion:(id /* block */)completion andQPL:(id)qpl;
- (void)_generateRecoveryCodeCompletion:(id)completion pin:(id)pin virtualDeviceId:(id)id completion:(id /* block */)completion;
- (void)_handleVestaRegistration:(id)registration recoveryCode:(id)code virtualDeviceId:(id)id completion:(id /* block */)completion;
- (void)_handleCreateVirtualDevice:(id)device completion:(id /* block */)completion;
- (void)_sendRegistrationInitRequestWithPin:(id)pin andVirtualDeviceId:(id)id andRecoveryCode:(id)code;
- (void)_handleRegisterInitResponse:(id)response withPIN:(id)pin andVirtualDeviceId:(id)id andRecoveryCode:(id)code;
- (void)_sendRegisterBeginRequestWithPIN:(id)pin andVirtualDeviceId:(id)id andIslandEdPub:(id)pub andIslandRsaPub:(id)pub andRecoveryCode:(id)code;
- (void)_handleRegisterBeginResponse:(id)response withVirtualDeviceId:(id)id andR1Message:(id)message andClientState:(id)state andIslandEdPub:(id)pub andIslandRsaPub:(id)pub andRecoveryCode:(id)code;
- (void)_sendRegisterFinishRequestWithVdid:(id)vdid andRegistrationPayload:(id)payload;
- (void)_handleRegisterFinishResponse:(id)response;
- (void)_handleVestaError:(long long)error isSet:(BOOL)set;
- (void)_handleInternalError;
- (void)_handleRequestError:(id)error;
@end

#endif /* EBVestaRegistrationClient_h */
