//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCameraVariantSelectorAREffectDataSource_h
#define IGStoryCameraVariantSelectorAREffectDataSource_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGAREffectNativeUIPickerConfiguration, NSString;

@interface IGStoryCameraVariantSelectorAREffectDataSource : NSObject<NSObject> {
  /* instance variables */
  IGAREffectNativeUIPickerConfiguration *_config;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfig:(id)config;
- (BOOL)isEqual:(id)equal;
- (long long)numberOfItemsInCameraVariantSelectorViewController:(id)controller;
- (id)cameraVariantSelectorViewController:(id)controller representationForItemAtIndex:(long long)index;
@end

#endif /* IGStoryCameraVariantSelectorAREffectDataSource_h */
