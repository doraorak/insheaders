//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMutationNetworkerDataProvider_h
#define IGDirectMutationNetworkerDataProvider_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@interface IGDirectMutationNetworkerDataProvider : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  id /* block */ _supportsOnlyHttp_requestProvider;
  id /* block */ _supportsHttpAndRealtime_httpRequestProvider;
  id /* block */ _supportsHttpAndRealtime_realtimePayloadProvider;
  id /* block */ _supportsOnlyRealtime_realtimePayloadProvider;
}

/* class methods */
+ (id)supportLocalProcessOnly;
+ (id)supportsHttpAndRealtimeWithHttpRequestProvider:(id /* block */)provider realtimePayloadProvider:(id /* block */)provider;
+ (id)supportsOnlyHttpWithRequestProvider:(id /* block */)provider;
+ (id)supportsOnlyRealtimeWithRealtimePayloadProvider:(id /* block */)provider;

/* instance methods */
@end

#endif /* IGDirectMutationNetworkerDataProvider_h */
