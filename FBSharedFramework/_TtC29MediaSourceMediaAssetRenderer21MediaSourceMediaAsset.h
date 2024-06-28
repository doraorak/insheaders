//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC29MediaSourceMediaAssetRenderer21MediaSourceMediaAsset_h
#define _TtC29MediaSourceMediaAssetRenderer21MediaSourceMediaAsset_h
@import Foundation;

#include "METAMediaAsset-Protocol.h"
#include "METAMediaSourceMediaAsset-Protocol.h"

@interface _TtC29MediaSourceMediaAssetRenderer21MediaSourceMediaAsset : NSObject<METAMediaAsset, METAMediaSourceMediaAsset> { // (Swift)
  /* instance variables */
   mediaSource;
   maxPixelBufferDimension;
}

@property (nonatomic, retain) id mediaSourceTask;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } ig_mediaSize;
@property (nonatomic, readonly) double ig_mediaDuration;
@property (nonatomic, readonly) BOOL ig_isLoopable;
@property (nonatomic, readonly) id ig_preferredTransform;

/* instance methods */
- (id)initWithMediaSource:(id)source maxPixelBufferDimension:(double)dimension;
- (id)renderer;
- (id)init;
@end

#endif /* _TtC29MediaSourceMediaAssetRenderer21MediaSourceMediaAsset_h */
