//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBRMVApplyEffectConfig_h
#define FBRMVApplyEffectConfig_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "FBRMVApplyLocalEffectConfig.h"
#include "FBRMVApplyRemoteEffectConfig.h"

@interface FBRMVApplyEffectConfig : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  FBRMVApplyRemoteEffectConfig *_remoteEffect_config;
  FBRMVApplyLocalEffectConfig *_localEffect_config;
}

/* class methods */
+ (id)localEffectWithConfig:(id)config;
+ (id)remoteEffectWithConfig:(id)config;

/* instance methods */
- (void)matchRemoteEffect:(id /* block */)effect localEffect:(id /* block */)effect;
@end

#endif /* FBRMVApplyEffectConfig_h */
