//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAREffectNativeUIPickerConfigurationItem_h
#define IGAREffectNativeUIPickerConfigurationItem_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSData, NSString;

@interface IGAREffectNativeUIPickerConfigurationItem : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_remoteItem_imageUri;
  NSString *_remoteItem_title;
  NSString *_remoteItem_itemID;
  BOOL _remoteItem_usesBlurredBackground;
  long long _remoteItem_backgroundBlurStyle;
  NSData *_localItem_imageData;
  NSString *_localItem_title;
  NSString *_localItem_itemID;
  BOOL _localItem_usesBlurredBackground;
  long long _localItem_backgroundBlurStyle;
}

/* class methods */
+ (id)localItemWithImageData:(id)data title:(id)title itemID:(id)id usesBlurredBackground:(BOOL)background backgroundBlurStyle:(long long)style;
+ (id)remoteItemWithImageUri:(id)uri title:(id)title itemID:(id)id usesBlurredBackground:(BOOL)background backgroundBlurStyle:(long long)style;

/* instance methods */
@end

#endif /* IGAREffectNativeUIPickerConfigurationItem_h */
