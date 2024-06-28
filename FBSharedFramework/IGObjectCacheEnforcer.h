//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGObjectCacheEnforcer_h
#define IGObjectCacheEnforcer_h
@import Foundation;

#include "NSKeyedUnarchiverDelegate-Protocol.h"

@class NSSet, NSString;

@interface IGObjectCacheEnforcer : NSObject<NSKeyedUnarchiverDelegate> {
  /* instance variables */
  NSSet *_unallowedEnforcementClasses;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDisallowedClasses:(id)classes;
- (id)unarchiver:(id)unarchiver didDecodeObject:(id)object;
@end

#endif /* IGObjectCacheEnforcer_h */
