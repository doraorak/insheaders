//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectComposerImageConfig_h
#define IGDirectComposerImageConfig_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@interface IGDirectComposerImageConfig : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  unsigned long long _asset;
  unsigned long long _metaAIAsset;
  unsigned long long _icon;
}

/* class methods */
+ (id)asset:(unsigned long long)asset;
+ (id)icon:(unsigned long long)icon;
+ (id)metaAIAsset:(unsigned long long)aiasset;
@end

#endif /* IGDirectComposerImageConfig_h */