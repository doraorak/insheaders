//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectGalleryPreviewMedia_h
#define IGDirectGalleryPreviewMedia_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class IGMetaGalleryAsset, PHAsset, UIImage;

@interface IGDirectGalleryPreviewMedia : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIImage *_image;
  UIImage *_mediaAsset_previewImage;
  PHAsset *_mediaAsset_asset;
  UIImage *_metaGalleryMediaAsset_previewImage;
  IGMetaGalleryAsset *_metaGalleryMediaAsset_asset;
}

/* class methods */
+ (id)image:(id)image;
+ (id)mediaAssetWithPreviewImage:(id)image asset:(id)asset;
+ (id)metaGalleryMediaAssetWithPreviewImage:(id)image asset:(id)asset;

/* instance methods */
@end

#endif /* IGDirectGalleryPreviewMedia_h */
