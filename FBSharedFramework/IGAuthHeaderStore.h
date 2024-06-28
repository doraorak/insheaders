//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAuthHeaderStore_h
#define IGAuthHeaderStore_h
@import Foundation;

#include "IGScheduler-Protocol.h"
#include "UICKeyChainStore.h"

@class NSDictionary, NSString;

@interface IGAuthHeaderStore : NSObject {
  /* instance variables */
  UICKeyChainStore *_keychainStore;
  NSString *_storeName;
  NSString *_keychainKey;
  NSObject<IGScheduler> *_scheduler;
  NSDictionary *_authHeaders;
}

/* instance methods */
- (id)initWithKeyChainStore:(id)store storeName:(id)name keychainKey:(id)key scheduler:(id)scheduler;
- (id)authHeaderForUserPk:(id)pk;
@end

#endif /* IGAuthHeaderStore_h */