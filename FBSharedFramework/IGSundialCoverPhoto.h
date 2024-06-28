//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialCoverPhoto_h
#define IGSundialCoverPhoto_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class UIImage;

@interface IGSundialCoverPhoto : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIImage *_firstFramePlaceholder_image;
  UIImage *_firstFrame_image;
  UIImage *_userSelection_image;
}

/* class methods */
+ (id)firstFramePlaceholderWithImage:(id)image;
+ (id)firstFrameWithImage:(id)image;
+ (id)userSelectionWithImage:(id)image;

/* instance methods */
@end

#endif /* IGSundialCoverPhoto_h */
