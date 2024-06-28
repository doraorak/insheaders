//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingSwipeUpCreationLogger_h
#define IGShoppingSwipeUpCreationLogger_h
@import Foundation;

#include "IGShoppingStoryCapabilities.h"
#include "IGUserSession.h"

@class NSString;

@interface IGShoppingSwipeUpCreationLogger : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_module;
  NSString *_sessionId;
  IGShoppingStoryCapabilities *_shoppingStoryCapabilities;
}

/* instance methods */
- (id)initWithUserSession:(id)session sessionId:(id)id shoppingStoryCapabilities:(id)capabilities module:(id)module;
@end

#endif /* IGShoppingSwipeUpCreationLogger_h */
