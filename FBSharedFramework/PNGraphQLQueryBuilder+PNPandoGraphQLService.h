//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef PNGraphQLQueryBuilder_PNPandoGraphQLService_h
#define PNGraphQLQueryBuilder_PNPandoGraphQLService_h
@import Foundation;

#include "PNGraphQLService-Protocol.h"

@class NSString;

@interface PNGraphQLQueryBuilder (PNPandoGraphQLService)
/* instance methods */
- (id)handleWithService:(id)service updateCallback:(id /* block */)callback failureCallback:(id /* block */)callback callbackQueue:(id)queue;
- (id)handleFiniteWithService:(id)service updateCallback:(id /* block */)callback failureCallback:(id /* block */)callback callbackQueue:(id)queue;
@end

#endif /* PNGraphQLQueryBuilder_PNPandoGraphQLService_h */
