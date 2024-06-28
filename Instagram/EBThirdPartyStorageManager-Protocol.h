//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef EBThirdPartyStorageManager_Protocol_h
#define EBThirdPartyStorageManager_Protocol_h
@import Foundation;

@protocol EBThirdPartyStorageManager <NSObject>
/* instance methods */
- (void)checkAvailabilityWithCompletion:(id /* block */)completion;
- (void)saveRecoveryCode:(id)code forIdentifier:(id)identifier withFlowID:(int)id completion:(id /* block */)completion;
- (void)fetchRecoveryCodeForIdentifier:(id)identifier withFlowID:(int)id completion:(id /* block */)completion;
- (void)deleteRecoveryCodeForIdentifier:(id)identifier withFlowID:(int)id completion:(id /* block */)completion;
- (void)synchronizeWithCompletion:(id /* block */)completion;
@end

#endif /* EBThirdPartyStorageManager_Protocol_h */
