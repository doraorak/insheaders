//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGJSONValue_h
#define IGJSONValue_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGJSONArray.h"
#include "IGJSONObject.h"

@class NSNumber, NSString;

@interface IGJSONValue : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  BOOL _boolean;
  NSNumber *_number;
  NSString *_string;
  IGJSONArray *_jsonArray;
  IGJSONObject *_jsonObject;
}

/* class methods */
+ (id)boolean:(BOOL)boolean;
+ (id)jsonArray:(id)array;
+ (id)jsonObject:(id)object;
+ (id)null;
+ (id)number:(id)number;
+ (id)string:(id)string;

/* instance methods */
@end

#endif /* IGJSONValue_h */