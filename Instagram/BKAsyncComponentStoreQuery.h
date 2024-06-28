//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKAsyncComponentStoreQuery_h
#define BKAsyncComponentStoreQuery_h
@import Foundation;

@class NSArray, NSDictionary, NSString;

@interface BKAsyncComponentStoreQuery : NSObject

@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) double cacheTTL;
@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) NSString *queryID;
@property (readonly, nonatomic) NSArray *cacheKeyParams;
@property (readonly, nonatomic) struct BKAsyncComponentStoreQueryOptions { BOOL x0; BOOL x1; } options;

/* instance methods */
- (id)initWithAppID:(id)id params:(id)params cacheTTL:(double)ttl purpose:(long long)purpose queryID:(id)id cacheKeyParams:(id)params options:(struct BKAsyncComponentStoreQueryOptions { BOOL x0; BOOL x1; })options;
@end

#endif /* BKAsyncComponentStoreQuery_h */