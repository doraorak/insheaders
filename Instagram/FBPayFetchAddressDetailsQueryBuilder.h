//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayFetchAddressDetailsQueryBuilder_h
#define FBPayFetchAddressDetailsQueryBuilder_h
@import Foundation;

#include "FBGraphQLQueryBuilder.h"

@interface FBPayFetchAddressDetailsQueryBuilder : FBGraphQLQueryBuilder
/* class methods */
+ (id)builderWithAddressId:(id)id paymentProductId:(id)id sessionId:(id)id uplSessionId:(id)id;
+ (const struct FBGraphQLQueryCodegenInitInfo *)initInfoPtr;
@end

#endif /* FBPayFetchAddressDetailsQueryBuilder_h */
