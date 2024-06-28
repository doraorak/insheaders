//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivityFeedCellRightAccessoryViewModel_h
#define IGActivityFeedCellRightAccessoryViewModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class IGImageSpecifier, NSString, UIImage;

@interface IGActivityFeedCellRightAccessoryViewModel : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIImage *_mediaImage_image;
  IGImageSpecifier *_tappableImage_imageSpecifier;
  NSString *_tappableImage_mediaID;
  NSString *_tappableImage_destination;
  IGImageSpecifier *_tappableStoryImage_primaryImageSpecifier;
  IGImageSpecifier *_tappableStoryImage_secondaryImageSpecifier;
  NSString *_actionButton_title;
  NSString *_actionButton_accessibilityLabelString;
  NSString *_actionButton_accessibilityHintString;
  BOOL _chevron_showUnseenIndicator;
}

/* class methods */
+ (id)actionButtonWithTitle:(id)title accessibilityLabelString:(id)string accessibilityHintString:(id)string;
+ (id)chevronWithShowUnseenIndicator:(BOOL)indicator;
+ (id)mediaImageWithImage:(id)image;
+ (id)tappableImageWithImageSpecifier:(id)specifier mediaID:(id)id destination:(id)destination;
+ (id)tappableStoryImageWithPrimaryImageSpecifier:(id)specifier secondaryImageSpecifier:(id)specifier;

/* instance methods */
@end

#endif /* IGActivityFeedCellRightAccessoryViewModel_h */
