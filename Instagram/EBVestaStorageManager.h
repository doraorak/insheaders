//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef EBVestaStorageManager_h
#define EBVestaStorageManager_h
@import Foundation;

#include "EBStateManager.h"
#include "EBVestaRegistrationClient.h"

@class MBAMailbox, PNPandoGraphQLService;

@interface EBVestaStorageManager : NSObject

@property (retain) PNPandoGraphQLService *graphql;
@property (retain) MBAMailbox *mailbox;
@property long long productUseCase;
@property (retain) EBStateManager *ebStateManager;
@property (retain) EBVestaRegistrationClient *registrationClient;
@property BOOL registerV2Enabled;
@property BOOL loginV2Enabled;

/* instance methods */
- (id)initWithGraphQL:(id)ql productUseCase:(long long)case loginV2Enabled:(BOOL)enabled registerV2Enabled:(BOOL)enabled ebStateManager:(id)manager;
- (void)loginWithPin:(id)pin clientType:(int)type deviceId:(id)id completion:(id /* block */)completion;
- (void)registerWithPin:(id)pin clientType:(int)type deviceId:(id)id completion:(id /* block */)completion;
- (void)_loginWithPin:(id)pin deviceId:(id)id clientType:(int)type mailbox:(id)mailbox qpl:(id)qpl completion:(id /* block */)completion;
- (void)verifyPin:(id)pin deviceId:(id)id completion:(id /* block */)completion;
- (void)_loginWithPinOverGraphQL:(id)ql virtualDeviceId:(id)id shouldNormalizePin:(BOOL)pin deviceId:(id)id successCompletion:(id /* block */)completion failureCompletion:(id /* block */)completion qpl:(id)qpl;
- (void)_addDevice:(id)device recoveryCode:(id)code completion:(id /* block */)completion qpl:(id)qpl;
@end

#endif /* EBVestaStorageManager_h */
