//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRenderableVideoVariant_h
#define IGRenderableVideoVariant_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGMediaSourceShareMetadata.h"
#include "IGVideoComposition.h"
#include "IGVideoConfiguration.h"
#include "METAMediaSource.h"
#include "NSCoding-Protocol.h"

@interface IGRenderableVideoVariant : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  IGVideoComposition *_videoComposition_composition;
  IGMediaSourceShareMetadata *_videoComposition_mediaSourceMetadata;
  METAMediaSource *_mediaSource_video;
  IGVideoConfiguration *_mediaSource_configuration;
  IGMediaSourceShareMetadata *_mediaSource_metadata;
  IGVideoComposition *_mediaSource_only_allowed_for_direct_fallback;
}

/* class methods */
+ (id)mediaSourceWithVideo:(id)video configuration:(id)configuration metadata:(id)metadata only_allowed_for_direct_fallback:(id)only_allowed_for_direct_fallback;
+ (id)videoCompositionWithComposition:(id)composition mediaSourceMetadata:(id)metadata;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGRenderableVideoVariant_h */
