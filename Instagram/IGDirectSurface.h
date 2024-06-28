//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSurface_h
#define IGDirectSurface_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class IGDirectThreadKey;

@interface IGDirectSurface : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGDirectThreadKey *_thread_threadKey;
  IGDirectThreadKey *_threadDetail_threadKey;
}

/* class methods */
+ (id)inbox;
+ (id)threadDetailWithThreadKey:(id)key;
+ (id)threadWithThreadKey:(id)key;

/* instance methods */
@end

#endif /* IGDirectSurface_h */
