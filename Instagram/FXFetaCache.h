//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FXFetaCache_h
#define FXFetaCache_h
@import Foundation;

#include "FXFetaCacheProtocol-Protocol.h"

@interface FXFetaCache : NSObject {
  /* instance variables */
  NSObject<FXFetaCacheProtocol> *_helper;
  BOOL _isFetaUpgraded;
}

/* instance methods */
- (id)initWithHelper:(id)helper;
- (BOOL)isUpgradedFlag;
- (void)fetchFetaInfoFromServer:(BOOL)server successBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (void)cacheFetaInfo:(BOOL)info;
@end

#endif /* FXFetaCache_h */