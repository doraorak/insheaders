//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallResolvedSession_h
#define IGVideoCallResolvedSession_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class IGUserSession;

@interface IGVideoCallResolvedSession : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGUserSession *_currentUser_userSession;
  IGUserSession *_backgroundUser_currentUserSession;
}

/* class methods */
+ (id)backgroundUserWithCurrentUserSession:(id)session;
+ (id)currentUserWithUserSession:(id)session;

/* instance methods */
@end

#endif /* IGVideoCallResolvedSession_h */
