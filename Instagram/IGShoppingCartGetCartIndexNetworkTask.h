//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingCartGetCartIndexNetworkTask_h
#define IGShoppingCartGetCartIndexNetworkTask_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGShoppingCartNetworkTaskState.h"
#include "NSObject-Protocol.h"

@class IGObjectStores, NSSet, NSString;

@interface IGShoppingCartGetCartIndexNetworkTask : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  IGObjectStores *_objectStores;
}

@property (copy, nonatomic) NSSet *affectedMerchantBagPks;
@property (readonly, copy, nonatomic) IGShoppingCartNetworkTaskState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworker:(id)networker objectStores:(id)stores;
- (id)queries;
- (id)affectedMutationIds;
- (BOOL)executeTaskWithSuccessHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
@end

#endif /* IGShoppingCartGetCartIndexNetworkTask_h */
