//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMEMSequenceIdPersister_h
#define IGDirectMEMSequenceIdPersister_h
@import Foundation;

#include "IGUserDefaults.h"

@class NSNumber;

@interface IGDirectMEMSequenceIdPersister : NSObject {
  /* instance variables */
  IGUserDefaults *_userDefaults;
  NSNumber *_memSequenceId;
}

/* instance methods */
- (id)initWithUserPK:(id)pk;
@end

#endif /* IGDirectMEMSequenceIdPersister_h */
