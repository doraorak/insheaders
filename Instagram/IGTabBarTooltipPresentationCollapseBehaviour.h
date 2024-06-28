//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTabBarTooltipPresentationCollapseBehaviour_h
#define IGTabBarTooltipPresentationCollapseBehaviour_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@protocol UIView<IGTabBarTooltipCollapsible;

@interface IGTabBarTooltipPresentationCollapseBehaviour : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  unsigned long long _collapse_badgeCount;
  UIView<IGTabBarTooltipCollapsible> *_collapse_collapsibleView;
}

/* class methods */
+ (id)collapseWithBadgeCount:(unsigned long long)count collapsibleView:(id)view;
+ (id)doNotCollapse;

/* instance methods */
@end

#endif /* IGTabBarTooltipPresentationCollapseBehaviour_h */