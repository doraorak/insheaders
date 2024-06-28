//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTextRowChevronStyle_h
#define IGTextRowChevronStyle_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString, UIColor;

@interface IGTextRowChevronStyle : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_chevronWithDetail_detail;
  NSString *_chevronWithDetail_accessibilityLabel;
  NSString *_chevronWithDetailAndBadge_detail;
  UIColor *_chevronWithDetailAndBadge_badgeColor;
  NSString *_chevronWithDetailAndBadge_accessibilityLabel;
  NSString *_chevronWithDetailNoChevron_detail;
  NSString *_chevronWithDetailNoChevron_accessibilityLabel;
}

/* class methods */
+ (id)chevron;
+ (id)chevronWithDetailAndBadgeWithDetail:(id)detail badgeColor:(id)color accessibilityLabel:(id)label;
+ (id)chevronWithDetailNoChevronWithDetail:(id)detail accessibilityLabel:(id)label;
+ (id)chevronWithDetailWithDetail:(id)detail accessibilityLabel:(id)label;
+ (id)none;

/* instance methods */
@end

#endif /* IGTextRowChevronStyle_h */