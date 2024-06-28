//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSeenStore_h
#define IGSeenStore_h
@import Foundation;

#include "IGSeenStateLogger.h"
#include "IGSeenStateObject.h"

@class NSString;

@interface IGSeenStore : NSObject {
  /* instance variables */
  IGSeenStateLogger *_logger;
  NSString *_userSessionPK;
  IGSeenStateObject *_seenStateObject;
}

/* instance methods */
- (id)initWithUserSessionPK:(id)pk seenStateLogger:(id)logger analyticsLogger:(id)logger;
- (id)seenStateObject;
@end

#endif /* IGSeenStore_h */
