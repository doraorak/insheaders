//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPerformanceTailFetchLoggingExtra_h
#define IGPerformanceTailFetchLoggingExtra_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSNumber, NSString;

@interface IGPerformanceTailFetchLoggingExtra : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_boolean_key;
  BOOL _boolean_value;
  NSString *_number_key;
  NSNumber *_number_value;
  NSString *_string_key;
  NSString *_string_value;
}

/* class methods */
+ (id)booleanWithKey:(id)key value:(BOOL)value;
+ (id)numberWithKey:(id)key value:(id)value;
+ (id)stringWithKey:(id)key value:(id)value;

/* instance methods */
@end

#endif /* IGPerformanceTailFetchLoggingExtra_h */