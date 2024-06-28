//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAlertDialogStyle_h
#define IGAlertDialogStyle_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class UIView;

@interface IGAlertDialogStyle : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIView *_centeredImage;
  UIView *_circleImage;
  UIView *_freeformImage;
}

/* class methods */
+ (id)centeredImage:(id)image;
+ (id)circleImage:(id)image;
+ (id)defaultStyle;
+ (id)freeformImage:(id)image;

/* instance methods */
@end

#endif /* IGAlertDialogStyle_h */
