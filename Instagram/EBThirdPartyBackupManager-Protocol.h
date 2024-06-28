//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef EBThirdPartyBackupManager_Protocol_h
#define EBThirdPartyBackupManager_Protocol_h
@import Foundation;

@protocol EBThirdPartyBackupManager <NSObject>
/* instance methods */
- (void)checkAvailabilityWithCompletion:(id /* block */)completion;
- (void)checkValidityWithCompletion:(id /* block */)completion;
- (void)setupWithCompletion:(id /* block */)completion;
- (void)restoreWithCompletion:(id /* block */)completion;
- (void)removeAllWithCompletion:(id /* block */)completion;
- (void)synchronize;
@end

#endif /* EBThirdPartyBackupManager_Protocol_h */
