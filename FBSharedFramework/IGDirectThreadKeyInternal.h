//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadKeyInternal_h
#define IGDirectThreadKeyInternal_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectCutoverThreadIdentifier.h"
#include "IGDirectDjangoThreadIdentifier.h"
#include "IGDirectMsysThreadIdentifier.h"

@class IGDirectDjangoMsysMixedThreadIdentifier;

@interface IGDirectThreadKeyInternal : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGDirectDjangoThreadIdentifier *_djangoThread_identifier;
  IGDirectMsysThreadIdentifier *_msysThread_msysIdentifier;
  IGDirectCutoverThreadIdentifier *_cutoverThread_cutoverIdentifier;
  IGDirectDjangoMsysMixedThreadIdentifier *_djangoMsysMixedThread_djangoMsysMixedIdentifer;
}

/* class methods */
+ (id)cutoverThreadWithCutoverIdentifier:(id)identifier;
+ (id)djangoMsysMixedThreadWithDjangoMsysMixedIdentifer:(id)identifer;
+ (id)djangoThreadWithIdentifier:(id)identifier;
+ (id)msysThreadWithMsysIdentifier:(id)identifier;

/* instance methods */
@end

#endif /* IGDirectThreadKeyInternal_h */