//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC25IGDirectACSStorageManager25IGDirectACSStorageManager_h
#define _TtC25IGDirectACSStorageManager25IGDirectACSStorageManager_h
@import Foundation;

#include "ACSGenericStorageManager.h"

@interface _TtC25IGDirectACSStorageManager25IGDirectACSStorageManager : ACSGenericStorageManager { // (Swift)
  /* instance variables */
   userDefaults;
}

/* instance methods */
- (void)storeToCustomStorageWithKey:(id)key withObject:(id)object;
- (id)retrieveFromCustomStorageWithKey:(id)key;
- (void)clearStorage;
- (id)initWithProjectName:(id)name attributeIdentifier:(id)identifier;
- (id)init;
@end

#endif /* _TtC25IGDirectACSStorageManager25IGDirectACSStorageManager_h */
