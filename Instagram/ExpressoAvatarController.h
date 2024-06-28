//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ExpressoAvatarController_h
#define ExpressoAvatarController_h
@import Foundation;

#include "ExpressoAvatarModelProvider.h"
#include "ExpressoPerformanceLogger.h"
#include "NSObject-Protocol.h"

@class FBARAvatarGltfModel, FBARAvatarsGltfTransferDataProviderDelegateWrapper, NSString;

@interface ExpressoAvatarController : NSObject<NSObject> {
  /* instance variables */
  FBARAvatarsGltfTransferDataProviderDelegateWrapper *_avatarTransferDataProviderDelegateWrapper;
  ExpressoAvatarModelProvider *_avatarModelProvider;
  ExpressoPerformanceLogger *_performanceLogger;
  FBARAvatarGltfModel *_avatarModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSharedCDLConfig:(id)cdlconfig avatarTransferDataProviderDelegateWrapper:(id)wrapper performanceLogger:(id)logger isALEEnabled:(BOOL)aleenabled isLowNetworkPriorityEnabled:(BOOL)enabled maxCDLParallelRequests:(long long)requests;
- (void)updateAvatarModelForUserAvatarInfo:(id)info requestID:(id)id withCompletion:(id /* block */)completion;
- (void)cancelCurrentAvatarModelRequest;
- (void)setBehavior:(id)behavior withFixedElapsedTimeForAnimation:(float)animation;
- (void)pluginDidLoadWithUserId:(id)id success:(BOOL)success;
- (void)pluginDidLoadAvatar:(id)avatar;
- (void)pluginDidRenderAvatar:(id)avatar;
- (void)pluginDidFailToLoadAvatar:(id)avatar error:(id)error;
- (void)pluginDidUpdateDynamicRamps;
- (void)pluginDidFailColorization:(id)colorization;
- (id)pluginRequestsAle;
@end

#endif /* ExpressoAvatarController_h */
