//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef EBStateManager_h
#define EBStateManager_h
@import Foundation;

#include "EBFetchBackupStatusClient.h"
#include "EBStateManagerServicesProvider-Protocol.h"

@interface EBStateManager : NSObject

@property (readonly, nonatomic) struct EBStateManagerConfigurations { int x0; BOOL x1; BOOL x2; BOOL x3; id x4; BOOL x5; } configurations;
@property (retain, nonatomic) EBFetchBackupStatusClient *fetchBackupStatusClient;
@property (readonly) int qplLoggingId;
@property (readonly, nonatomic) NSObject<EBStateManagerServicesProvider> *servicesProvider;

/* instance methods */
- (id)initWithServicesProvider:(id)provider configurations:(struct EBStateManagerConfigurations { int x0; BOOL x1; BOOL x2; BOOL x3; id x4; BOOL x5; })configurations;
- (BOOL)getUseV2FetchStatusApis;
- (void)generateRecoveryCodeWithDeviceType:(int)type completion:(id /* block */)completion;
- (void)generateRecoveryCodeAndVirtualDeviceId:(int)id accountInfo:(id)info completion:(id /* block */)completion;
- (void)generateRecoveryCodeAndVirtualDeviceIdForHSMWithPinNormalizationStatus:(id)status accountInfo:(id)info completion:(id /* block */)completion;
- (void)validateRecoveryCode:(id)code completion:(id /* block */)completion;
- (void)addDevice:(id)device recoveryCode:(id)code deviceType:(id)type completion:(id /* block */)completion;
- (void)debugOnly_RemoveCurrentDeviceWithCompletion:(id /* block */)completion;
- (void)fetchMetadataWithCompletion:(id /* block */)completion;
- (void)deleteBackupsWithCompletion:(id /* block */)completion;
- (void)removeAllDevicesFromBackupWithCompletion:(id /* block */)completion;
- (void)isUserOptedOutWithCompletion:(id /* block */)completion;
- (void)persistOnboardingDecisionWithDecision:(int)decision completion:(id /* block */)completion;
- (void)fetchBackupStatus:(BOOL)status completion:(id /* block */)completion;
- (void)fetchHSMVirtualDeviceId:(id /* block */)id;
- (void)fetchHSMVirtualDeviceInfo:(id /* block */)info;
- (void)createVirtualDevice:(id)device completion:(id /* block */)completion;
- (void)createUniqueVirtualDevice:(id)device completion:(id /* block */)completion;
- (void)removeVirtualDevice:(id)device completion:(id /* block */)completion;
- (void)checkVirtualDeviceTypePresent:(id)present completion:(id /* block */)completion;
- (void)fetchTPID:(id)tpid completion:(id /* block */)completion;
- (void)fetchVirtualDevicesMetadata:(id /* block */)metadata;
- (void)fetchVirtualDeviceTypes:(id /* block */)types;
- (void)hasEligibleOTCDevicesWithCompletion:(id /* block */)completion;
- (void)fetchHsmMigrationStatusWithCompletion:(id /* block */)completion;
@end

#endif /* EBStateManager_h */
