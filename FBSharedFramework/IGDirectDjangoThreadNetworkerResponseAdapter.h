//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectDjangoThreadNetworkerResponseAdapter_h
#define IGDirectDjangoThreadNetworkerResponseAdapter_h
@import Foundation;

#include "IGDirectInteropFeatureGating-Protocol.h"
#include "IGObjectStores.h"
#include "IGUser.h"

@interface IGDirectDjangoThreadNetworkerResponseAdapter : NSObject {
  /* instance variables */
  IGUser *_currentUser;
  IGObjectStores *_objectStores;
  NSObject<IGDirectInteropFeatureGating> *_interopFeatureGating;
}

/* instance methods */
- (id)initWithUser:(id)user objectStores:(id)stores interopFeatureGating:(id)gating launcherSetProvider:(id)provider;
- (id)parseFetchResultFromThreadResponse:(id)response fetchInput:(id)input chunkIndex:(unsigned long long)index endpointPath:(id)path;
- (void)postProcessFetchResult:(id)result fetchInput:(id)input chunkIndex:(unsigned long long)index completion:(id /* block */)completion;
@end

#endif /* IGDirectDjangoThreadNetworkerResponseAdapter_h */