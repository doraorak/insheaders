//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGARDeliveryUserConfig_h
#define IGARDeliveryUserConfig_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGAuthHeaderManaging-Protocol.h"

@class NSString;

@interface IGARDeliveryUserConfig : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_loggedInUser_userPK;
  NSObject<IGAuthHeaderManaging> *_loggedInUser_authHeaderManager;
}

/* class methods */
+ (id)loggedInUserWithUserPK:(id)pk authHeaderManager:(id)manager;
+ (id)loggedOutUser;

/* instance methods */
- (void)matchLoggedInUser:(id /* block */)user loggedOutUser:(id /* block */)user;
@end

#endif /* IGARDeliveryUserConfig_h */
