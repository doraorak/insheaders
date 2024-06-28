//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectOutgoingBatchMessagePayload_h
#define IGDirectOutgoingBatchMessagePayload_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGImageEncoding.h"

@class AVAsset, NSArray, NSString, NSURL, UIImage;

@interface IGDirectOutgoingBatchMessagePayload : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_text_text;
  NSURL *_webURL_url;
  NSString *_webURL_previewTitle;
  NSString *_webURL_previewSubtitle;
  UIImage *_webURL_previewImage;
  IGImageEncoding *_image_image;
  AVAsset *_video_asset;
  IGImageEncoding *_video_thumbnail;
  NSArray *_multimedia_mediaItems;
  NSArray *_multimedia_previewImages;
}

/* class methods */
+ (id)imageWithImage:(id)image;
+ (id)multimediaWithMediaItems:(id)items previewImages:(id)images;
+ (id)textWithText:(id)text;
+ (id)videoWithAsset:(id)asset thumbnail:(id)thumbnail;
+ (id)webURLWithUrl:(id)url previewTitle:(id)title previewSubtitle:(id)subtitle previewImage:(id)image;

/* instance methods */
@end

#endif /* IGDirectOutgoingBatchMessagePayload_h */
