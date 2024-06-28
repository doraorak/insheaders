//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectComposerButtonConfig_h
#define IGDirectComposerButtonConfig_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectAvatarViewSpec.h"
#include "IGDirectComposerButtonTintConfig.h"
#include "IGDirectComposerImageConfig.h"
#include "IGDirectGradientTintableTintConfig.h"

@class IGDirectComposerKeyframesAssetProvider, NSArray, NSString, NSURL;

@interface IGDirectComposerButtonConfig : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGDirectComposerImageConfig *_image_imageConfig;
  long long _image_contentMode;
  IGDirectComposerButtonTintConfig *_image_tintConfig;
  NSString *_text_title;
  IGDirectGradientTintableTintConfig *_text_tintConfig;
  double _text_fontSize;
  NSArray *_avatar_profilePictureURLs;
  IGDirectAvatarViewSpec *_avatar_avatarViewSpec;
  NSURL *_sticker_stickerUrl;
  struct CGSize { double width; double height; } _sticker_stickerSize;
  IGDirectComposerImageConfig *_keyframes_placeholderImageConfig;
  long long _keyframes_placeholderContentMode;
  IGDirectComposerButtonTintConfig *_keyframes_placeholderTintConfig;
  IGDirectComposerImageConfig *_keyframes_fallbackImageConfig;
  long long _keyframes_fallbackContentMode;
  IGDirectComposerButtonTintConfig *_keyframes_fallbackTintConfig;
  IGDirectComposerKeyframesAssetProvider *_keyframes_assetProvider;
  struct CGSize { double width; double height; } _keyframes_keyframesSize;
}

/* class methods */
+ (id)avatarWithProfilePictureURLs:(id)urls avatarViewSpec:(id)spec;
+ (id)imageWithImageConfig:(id)config contentMode:(long long)mode tintConfig:(id)config;
+ (id)keyframesWithPlaceholderImageConfig:(id)config placeholderContentMode:(long long)mode placeholderTintConfig:(id)config fallbackImageConfig:(id)config fallbackContentMode:(long long)mode fallbackTintConfig:(id)config assetProvider:(id)provider keyframesSize:(struct CGSize { double x0; double x1; })size;
+ (id)stickerWithStickerUrl:(id)url stickerSize:(struct CGSize { double x0; double x1; })size;
+ (id)textWithTitle:(id)title tintConfig:(id)config fontSize:(double)size;

/* instance methods */
@end

#endif /* IGDirectComposerButtonConfig_h */
