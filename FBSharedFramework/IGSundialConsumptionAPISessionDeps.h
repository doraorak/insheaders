//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialConsumptionAPISessionDeps_h
#define IGSundialConsumptionAPISessionDeps_h
@import Foundation;

#include "IGAdInsertionProtocol-Protocol.h"
#include "IGFeedNetworkSourceSessionDeps.h"
#include "IGMediaCoordinatorModuleGraphSessionDeps.h"
#include "IGMediaStore.h"
#include "IGObjectStores.h"
#include "IGSundialCacheInfoStore.h"

@interface IGSundialConsumptionAPISessionDeps : NSObject

@property (readonly, nonatomic) IGFeedNetworkSourceSessionDeps *feedNetworkSourceDeps;
@property (readonly, nonatomic) IGMediaStore *mediaStore;
@property (readonly, nonatomic) IGMediaCoordinatorModuleGraphSessionDeps *moduleGraphSessionDeps;
@property (readonly, nonatomic) NSObject<IGAdInsertionProtocol> *sundialAdInsertionHandler;
@property (readonly, nonatomic) IGObjectStores *objectStores;
@property (readonly, nonatomic) IGSundialCacheInfoStore *cacheInfoStore;

/* instance methods */
- (id)initWithFeedNetworkSourceDeps:(id)deps mediaStore:(id)store moduleGraphSessionDeps:(id)deps sundialAdInsertionHandler:(id)handler objectStores:(id)stores cacheInfoStore:(id)store;
@end

#endif /* IGSundialConsumptionAPISessionDeps_h */
