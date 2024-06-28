//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDetailedDisclosureIconViewModel_h
#define IGDetailedDisclosureIconViewModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class UIImage;

@interface IGDetailedDisclosureIconViewModel : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIImage *_icon_image;
  struct CGSize { double width; double height; } _icon_size;
}

/* class methods */
+ (id)hidden;
+ (id)iconWithImage:(id)image size:(struct CGSize { double x0; double x1; })size;
+ (id)spinner;

/* instance methods */
@end

#endif /* IGDetailedDisclosureIconViewModel_h */
