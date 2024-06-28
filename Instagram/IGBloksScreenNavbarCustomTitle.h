//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksScreenNavbarCustomTitle_h
#define IGBloksScreenNavbarCustomTitle_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class BKParseResult, UIView;

@interface IGBloksScreenNavbarCustomTitle : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  BKParseResult *_customTitle_parseResult;
  UIView *_customTitleView_titleView;
}

/* class methods */
+ (id)customTitleViewWithTitleView:(id)view;
+ (id)customTitleWithParseResult:(id)result;

/* instance methods */
@end

#endif /* IGBloksScreenNavbarCustomTitle_h */
