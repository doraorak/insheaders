//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ExpressoAvatarModelProvider_h
#define ExpressoAvatarModelProvider_h
@import Foundation;

#include "AEAvatarLiveEditingDelegate-Protocol.h"
#include "ExpressoPerformanceLogger.h"

@class FBARAvatarLiveEditing, NSString;
@protocol AEAvatarLiveEditingInterface, AEContentDeliveryLibraryInterface, AEEmbodimentCachingConfig><AEEmbodimentCDLConfig><AEEmbodimentCDLPrefetchConfig;

@interface ExpressoAvatarModelProvider : NSObject<AEAvatarLiveEditingDelegate> {
  /* instance variables */
  NSObject<AEEmbodimentCachingConfig><AEEmbodimentCDLConfig><AEEmbodimentCDLPrefetchConfig> *_sharedCDLConfig;
  ExpressoPerformanceLogger *_performanceLogger;
  BOOL _isALEEnabled;
  BOOL _isLowNetworkPriorityEnabled;
  long long _maxCDLParallelRequests;
  NSString *_currentRequestID;
  NSObject<AEContentDeliveryLibraryInterface> *_currentCDL;
  NSObject<AEAvatarLiveEditingInterface> *_currentALE;
  id /* block */ _currentAvatarModelProviderCompletion;
}

@property (readonly, nonatomic) FBARAvatarLiveEditing *pluginRequestsAle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWith:(id)with performanceLogger:(id)logger isALEEnabled:(BOOL)aleenabled isLowNetworkPriorityEnabled:(BOOL)enabled maxCDLParallelRequests:(long long)requests;
- (void)_requestAvatarModelWithCDLForUserAvatarInfo:(id)info requestID:(id)id withCompletion:(id /* block */)completion;
- (void)_requestAvatarModelWithALEForUserAvatarInfo:(id)info requestID:(id)id withCompletion:(id /* block */)completion;
- (void)avatarLiveEditingDidStartUpdatingAvatarWithId:(id)id;
- (void)avatarLiveEditingDidCompleteUpdatingAvatarWithId:(id)id error:(id)error;
- (void)avatarLiveEditingDidStartGeneratingAvatarWithId:(id)id;
- (void)avatarLiveEditingDidCompleteGeneratingAvatarWithId:(id)id fromCache:(BOOL)cache error:(id)error;
- (void)avatarLiveEditingDidStartParametersUpdateWithId:(id)id;
- (void)avatarLiveEditingDidCompleteParametersUpdateWithId:(id)id error:(id)error;
- (void)avatarLiveEditingDidStartRenderUpdateWithId:(id)id;
- (void)avatarLiveEditingDidCompleteRenderUpdateWithId:(id)id error:(id)error;
@end

#endif /* ExpressoAvatarModelProvider_h */