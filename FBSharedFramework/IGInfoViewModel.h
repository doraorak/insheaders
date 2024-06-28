//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInfoViewModel_h
#define IGInfoViewModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString, UIImage;

@interface IGInfoViewModel : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_refresh_title;
  NSString *_refresh_subtitle;
  unsigned long long _refresh_appearanceStyle;
  UIImage *_custom_iconImage;
  NSString *_custom_title;
  NSString *_custom_subtitle;
  unsigned long long _custom_appearanceStyle;
  UIImage *_customWithButton_iconImage;
  NSString *_customWithButton_title;
  NSString *_customWithButton_buttonTitle;
  unsigned long long _customWithButton_appearanceStyle;
}

/* class methods */
+ (id)customWithButtonWithIconImage:(id)image title:(id)title buttonTitle:(id)title appearanceStyle:(unsigned long long)style;
+ (id)customWithIconImage:(id)image title:(id)title subtitle:(id)subtitle appearanceStyle:(unsigned long long)style;
+ (id)hidden;
+ (id)loading;
+ (id)refreshWithTitle:(id)title subtitle:(id)subtitle appearanceStyle:(unsigned long long)style;

/* instance methods */
@end

#endif /* IGInfoViewModel_h */
