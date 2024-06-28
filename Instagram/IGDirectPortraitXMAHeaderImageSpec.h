//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPortraitXMAHeaderImageSpec_h
#define IGDirectPortraitXMAHeaderImageSpec_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class IGImageSpecifier;

@interface IGDirectPortraitXMAHeaderImageSpec : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGImageSpecifier *_singleImage_imageSpecifier;
  struct CGSize { double width; double height; } _singleImage_size;
  IGImageSpecifier *_subordinateFacepile_backImageSpecifier;
  double _subordinateFacepile_backImageDiameter;
  IGImageSpecifier *_subordinateFacepile_frontImageSpecifier;
  double _subordinateFacepile_frontImageDiameter;
  IGImageSpecifier *_diagonalFacepile_firstImageSpecifier;
  IGImageSpecifier *_diagonalFacepile_secondImageSpecifier;
}

/* class methods */
+ (id)diagonalFacepileWithFirstImageSpecifier:(id)specifier secondImageSpecifier:(id)specifier;
+ (id)none;
+ (id)singleImageWithImageSpecifier:(id)specifier size:(struct CGSize { double x0; double x1; })size;
+ (id)subordinateFacepileWithBackImageSpecifier:(id)specifier backImageDiameter:(double)diameter frontImageSpecifier:(id)specifier frontImageDiameter:(double)diameter;

/* instance methods */
@end

#endif /* IGDirectPortraitXMAHeaderImageSpec_h */