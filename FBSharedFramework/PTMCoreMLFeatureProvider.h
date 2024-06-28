//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef PTMCoreMLFeatureProvider_h
#define PTMCoreMLFeatureProvider_h
@import Foundation;

#include "MLFeatureProvider-Protocol.h"

@class NSMutableDictionary, NSSet;

@interface PTMCoreMLFeatureProvider : NSObject<MLFeatureProvider> {
  /* instance variables */
  NSMutableDictionary *_featureValuesForName;
}

@property (readonly, nonatomic) NSSet *featureNames;

/* instance methods */
- (id)initWithFeatureNames:(id)names;
- (void)clearInputTensors;
- (void)setInputTensor:(const void *)tensor forFeatureName:(id)name;
- (id)featureValueForName:(id)name;
@end

#endif /* PTMCoreMLFeatureProvider_h */