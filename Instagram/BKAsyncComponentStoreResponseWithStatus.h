//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKAsyncComponentStoreResponseWithStatus_h
#define BKAsyncComponentStoreResponseWithStatus_h
@import Foundation;

#include "BKAsyncComponentStoreResponse.h"
#include "BKAsyncComponentStoreResponseStatus.h"

@interface BKAsyncComponentStoreResponseWithStatus : NSObject

@property (readonly, nonatomic) BKAsyncComponentStoreResponse *response;
@property (readonly, nonatomic) BKAsyncComponentStoreResponseStatus *status;
@property (readonly, nonatomic) long long purpose;

/* instance methods */
- (id)initWithResponse:(id)response status:(id)status purpose:(long long)purpose;
@end

#endif /* BKAsyncComponentStoreResponseWithStatus_h */
