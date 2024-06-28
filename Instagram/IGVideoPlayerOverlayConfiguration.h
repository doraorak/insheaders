//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoPlayerOverlayConfiguration_h
#define IGVideoPlayerOverlayConfiguration_h
@import Foundation;

#include "IGVideoPlayerOverlayToolbarConfiguration.h"

@class IGMediaAttributionConfiguration, NSArray;

@interface IGVideoPlayerOverlayConfiguration : NSObject

@property (readonly, nonatomic) NSArray *overlays;
@property (readonly, nonatomic) IGVideoPlayerOverlayToolbarConfiguration *topToolbarConfiguration;
@property (readonly, nonatomic) IGVideoPlayerOverlayToolbarConfiguration *bottomToolbarConfiguration;
@property (readonly, nonatomic) IGMediaAttributionConfiguration *attributionConfiguration;
@property (readonly, nonatomic) BOOL isLikeEnabled;

/* instance methods */
- (id)initWithOverlays:(id)overlays topToolbarConfiguration:(id)configuration bottomToolbarConfiguration:(id)configuration attributionConfiguration:(id)configuration isLikeEnabled:(BOOL)enabled;
@end

#endif /* IGVideoPlayerOverlayConfiguration_h */