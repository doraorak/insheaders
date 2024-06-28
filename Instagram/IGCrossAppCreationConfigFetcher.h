//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCrossAppCreationConfigFetcher_h
#define IGCrossAppCreationConfigFetcher_h
@import Foundation;

#include "IGCACControllerCache.h"
#include "IGCACNetwork.h"
#include "IGCACValidator.h"

@interface IGCrossAppCreationConfigFetcher : NSObject {
  /* instance variables */
  IGCACNetwork *_network;
  IGCACControllerCache *_ccpCache;
  IGCACControllerCache *_xarCache;
  IGCACValidator *_validator;
}

/* instance methods */
- (id)init;
@end

#endif /* IGCrossAppCreationConfigFetcher_h */