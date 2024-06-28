//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDynamicOverlayCompositeImageProvider_h
#define IGDynamicOverlayCompositeImageProvider_h
@import Foundation;

#include "IGDynamicOverlayImageProvider.h"
#include "IGDynamicOverlayCompositeImageShadowConfig.h"

@class NSArray;

@interface IGDynamicOverlayCompositeImageProvider : IGDynamicOverlayImageProvider {
  /* instance variables */
  NSArray *_dynamicOverlayImageProviders;
  struct CGSize { double width; double height; } _outputSize;
  IGDynamicOverlayCompositeImageShadowConfig *_shadowConfig;
}

/* instance methods */
- (id)initWithDynamicOverlayImageProviders:(id)providers outputSize:(struct CGSize { double x0; double x1; })size shadowConfig:(id)config;
- (id)imageForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (BOOL)supportsHDR;
- (id)cloneWithExportPath:(id)path completionGroup:(id)group;
- (id)asyncCloneWithExportPath:(id)path shouldExportRemoteAssets:(BOOL)assets;
- (id)asyncRefresh;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* IGDynamicOverlayCompositeImageProvider_h */