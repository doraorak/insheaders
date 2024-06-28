//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectReadOnlyFeatureLimitService_h
#define IGDirectReadOnlyFeatureLimitService_h
@import Foundation;

#include "IGUserLauncherSetProviding-Protocol.h"

@interface IGDirectReadOnlyFeatureLimitService : NSObject {
  /* instance variables */
  BOOL _userIsCheckpointed;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
}

/* instance methods */
- (id)initWithLauncherSetProvider:(id)provider;
- (BOOL)isLocalNotificationsPresentationLimited;
- (void)markUserAsCheckpointed;
@end

#endif /* IGDirectReadOnlyFeatureLimitService_h */
