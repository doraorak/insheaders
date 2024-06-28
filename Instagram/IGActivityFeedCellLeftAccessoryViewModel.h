//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivityFeedCellLeftAccessoryViewModel_h
#define IGActivityFeedCellLeftAccessoryViewModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class IGImageSpecifier, IGProfileImage, NSString;

@interface IGActivityFeedCellLeftAccessoryViewModel : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGProfileImage *_singleProfileImage_image;
  BOOL _singleProfileImage_showStoryRing;
  BOOL _singleProfileImage_isStoryRingLoading;
  BOOL _singleProfileImage_isStorySeen;
  NSString *_singleProfileImage_userPK;
  IGProfileImage *_groupedProfileImage_frontImage;
  IGProfileImage *_groupedProfileImage_backImage;
  IGImageSpecifier *_iconImages_frontIcon;
  IGImageSpecifier *_iconImages_backIcon;
  IGImageSpecifier *_icons_frontIcon;
  IGImageSpecifier *_icons_backIcon;
}

/* class methods */
+ (id)groupedProfileImageWithFrontImage:(id)image backImage:(id)image;
+ (id)iconImagesWithFrontIcon:(id)icon backIcon:(id)icon;
+ (id)iconsWithFrontIcon:(id)icon backIcon:(id)icon;
+ (id)singleProfileImageWithImage:(id)image showStoryRing:(BOOL)ring isStoryRingLoading:(BOOL)loading isStorySeen:(BOOL)seen userPK:(id)pk;

/* instance methods */
@end

#endif /* IGActivityFeedCellLeftAccessoryViewModel_h */