//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SRAnimationModelProvidingStateListenerAnnouncer_h
#define SRAnimationModelProvidingStateListenerAnnouncer_h
@import Foundation;

#include "FBAnnouncerBase.h"
#include "SRAnimationModelProvidingStateListener-Protocol.h"

@class BOOL *, NSString;

@interface SRAnimationModelProvidingStateListenerAnnouncer : FBAnnouncerBase<SRAnimationModelProvidingStateListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)modelProviderStartFetchAnimation:(id)animation;
- (void)modelProviderFinishFetchAnimation:(id)animation error:(id)error loadSource:(id)source loggingInfo:(id)info;
- (void)modelProviderStartFetchAllAssets:(id)assets;
- (void)modelProviderFinishFetchAllAssets:(id)assets error:(id)error loadSource:(id)source loggingInfo:(id)info;
- (void)modelProviderStartFetchAllExtraAssets:(id)assets;
- (void)modelProviderFinishFetchAllExtraAssets:(id)assets error:(id)error loadSource:(id)source loggingInfo:(id)info;
- (void)modelProviderDidCancelAllRequests:(id)requests;
- (void)modelProvider:(id)provider detectError:(id)error;
- (void)modelProvider:(id)provider willAttemptRecoveryError:(id)error;
- (void)modelProvider:(id)provider didAttemptRecovery:(BOOL)recovery error:(id)error;
- (void)modelProvider:(id)provider stopAttemptRecoveryError:(id)error;
- (void)modelProvider:(id)provider didTryCustomRecovery:(BOOL *)recovery error:(id)error;
@end

#endif /* SRAnimationModelProvidingStateListenerAnnouncer_h */