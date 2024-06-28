//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileBioOverride_h
#define IGProfileBioOverride_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class IGStyledString, NSArray;

@interface IGProfileBioOverride : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGStyledString *_bioString;
  NSArray *_possibleFields;
}

/* class methods */
+ (id)bioString:(id)string;
+ (id)none;
+ (id)possibleFields:(id)fields;

/* instance methods */
@end

#endif /* IGProfileBioOverride_h */