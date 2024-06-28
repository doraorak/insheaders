//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivityFeedContext_h
#define IGActivityFeedContext_h
@import Foundation;

#include "IGScope.h"

@class IGScopedObjectMap, IGUserSession;

@interface IGActivityFeedContext : IGScope {
  /* instance variables */
  IGScopedObjectMap *_scopedObjectMap;
}

@property (readonly, nonatomic) IGUserSession *userSession;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)valueWithInitializer:(undefined *)initializer;
@end

#endif /* IGActivityFeedContext_h */