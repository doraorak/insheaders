//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef EBThirdPartyVirtualDeviceManager_h
#define EBThirdPartyVirtualDeviceManager_h
@import Foundation;

#include "EBThirdPartyBackupManager-Protocol.h"
#include "EBThirdPartyStorageManager-Protocol.h"

@class MBAMailbox, NSString;

@interface EBThirdPartyVirtualDeviceManager : NSObject<EBThirdPartyBackupManager>

@property (retain, nonatomic) MBAMailbox *mailbox;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSObject<EBThirdPartyStorageManager> *storageManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMailbox:(id)mailbox type:(unsigned long long)type storageManager:(id)manager;
- (void)checkAvailabilityWithCompletion:(id /* block */)completion;
- (void)checkValidityWithCompletion:(id /* block */)completion;
- (void)setupWithCompletion:(id /* block */)completion;
- (void)restoreWithCompletion:(id /* block */)completion;
- (void)removeAllWithCompletion:(id /* block */)completion;
- (void)synchronize;
@end

#endif /* EBThirdPartyVirtualDeviceManager_h */
