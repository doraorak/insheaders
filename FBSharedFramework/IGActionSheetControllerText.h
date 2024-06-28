//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActionSheetControllerText_h
#define IGActionSheetControllerText_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSArray, NSString;

@interface IGActionSheetControllerText : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_regularText_text;
  NSString *_boldText_text;
  NSString *_regularTextWithBoldRanges_text;
  NSArray *_regularTextWithBoldRanges_boldRanges;
}

/* class methods */
+ (id)boldTextWithText:(id)text;
+ (id)regularTextWithBoldRangesWithText:(id)text boldRanges:(id)ranges;
+ (id)regularTextWithText:(id)text;

/* instance methods */
@end

#endif /* IGActionSheetControllerText_h */