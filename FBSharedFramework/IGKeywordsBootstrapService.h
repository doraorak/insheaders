//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGKeywordsBootstrapService_h
#define IGKeywordsBootstrapService_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGKeywordsBootstrapStore.h"

@interface IGKeywordsBootstrapService : NSObject {
  /* instance variables */
  IGKeywordsBootstrapStore *_store;
  NSObject<IGAPIClient> *_networker;
  id /* block */ _forceRefetchCompletionBlock;
}

/* instance methods */
- (id)initWithStore:(id)store networker:(id)networker;
@end

#endif /* IGKeywordsBootstrapService_h */