//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImageTitleSubtitleViewImageSource_h
#define IGImageTitleSubtitleViewImageSource_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectAvatarViewSpec.h"
#include "IGDirectThreadGroupPhotoIdentifier.h"
#include "IGProfileImage.h"

@class NSURL, UIColor, UIImage, UIView;

@interface IGImageTitleSubtitleViewImageSource : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGProfileImage *_profile_frontProfileImage;
  IGProfileImage *_profile_backProfileImage;
  IGDirectThreadGroupPhotoIdentifier *_profile_groupPhotoIdentifier;
  IGDirectAvatarViewSpec *_profile_spec;
  UIImage *_image_image;
  UIColor *_image_tintColor;
  NSURL *_imageURL_imageURL;
  UIView *_customView_view;
}

/* class methods */
+ (id)customViewWithView:(id)view;
+ (id)imageURLWithImageURL:(id)url;
+ (id)imageWithImage:(id)image tintColor:(id)color;
+ (id)profileWithFrontProfileImage:(id)image backProfileImage:(id)image groupPhotoIdentifier:(id)identifier spec:(id)spec;

/* instance methods */
@end

#endif /* IGImageTitleSubtitleViewImageSource_h */
