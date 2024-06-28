//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStickerGalleryViewControllerResult_h
#define IGStickerGalleryViewControllerResult_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGGalleryVideoStickerModel.h"

@class NSData, UIImage;

@interface IGStickerGalleryViewControllerResult : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIImage *_galleryImage;
  NSData *_animatedGIFData;
  NSData *_animatedWebPData;
  IGGalleryVideoStickerModel *_videoAsset;
}

/* class methods */
+ (id)animatedGIFData:(id)gifdata;
+ (id)animatedWebPData:(id)pdata;
+ (id)galleryImage:(id)image;
+ (id)videoAsset:(id)asset;

/* instance methods */
@end

#endif /* IGStickerGalleryViewControllerResult_h */