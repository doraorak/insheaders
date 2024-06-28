//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARAvatarsGltfTransferDataProviderDelegateWrapper_h
#define FBARAvatarsGltfTransferDataProviderDelegateWrapper_h
@import Foundation;

#include "FBARAvatarsDataProviderDelegateWrapper.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol FBARAvatarTransferDataProviderDelegateProtocol;

@interface FBARAvatarsGltfTransferDataProviderDelegateWrapper : FBARAvatarsDataProviderDelegateWrapper<NSObject>

@property (weak, nonatomic) NSObject<FBARAvatarTransferDataProviderDelegateProtocol> *avatarTransferDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)updateAnimation:(id)animation;
- (void)setFixedElapsedTimeForAnimation:(float)animation;
- (void)updateAvatarGltfPointer:(id)pointer requestId:(id)id;
- (void)updateAvatarDynamicRamps:(id)ramps;
- (void)updateAvatarSliderValues:(id)values;
- (void)updateAvatarBlendWeights:(id)weights;
- (void)pluginDidLoadWithUserId:(id)id success:(BOOL)success;
- (void)pluginDidLoadAvatar:(id)avatar;
- (void)pluginDidRenderAvatar:(id)avatar;
- (void)pluginDidFailToLoadAvatar:(id)avatar error:(id)error;
- (void)pluginDidUpdateDynamicRamps;
- (void)pluginDidFailColorization:(id)colorization;
- (id)pluginRequestsAle;
@end

#endif /* FBARAvatarsGltfTransferDataProviderDelegateWrapper_h */
