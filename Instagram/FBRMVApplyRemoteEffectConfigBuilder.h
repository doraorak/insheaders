//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBRMVApplyRemoteEffectConfigBuilder_h
#define FBRMVApplyRemoteEffectConfigBuilder_h
@import Foundation;

#include "FBRMVServiceConfigDeps.h"

@class FBAREngineEffectLifecycleListenersContainer, NSString;

@interface FBRMVApplyRemoteEffectConfigBuilder : NSObject {
  /* instance variables */
  NSString *_effectId;
  FBRMVServiceConfigDeps *_serviceConfigDeps;
  FBAREngineEffectLifecycleListenersContainer *_lifecycleListeners;
  NSString *_cryptoHash;
  id /* block */ _completion;
}

/* class methods */
+ (id)applyRemoteEffectConfigFromExistingApplyRemoteEffectConfig:(id)config;

/* instance methods */
- (id)initWithEffectId:(id)id;
- (id)build;
- (id)withEffectId:(id)id;
- (id)withServiceConfigDeps:(id)deps;
- (id)withLifecycleListeners:(id)listeners;
- (id)withCryptoHash:(id)hash;
- (id)withCompletion:(id /* block */)completion;
@end

#endif /* FBRMVApplyRemoteEffectConfigBuilder_h */