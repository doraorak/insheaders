//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef QPBatchFetcherPayload_Protocol_h
#define QPBatchFetcherPayload_Protocol_h
@import Foundation;

@protocol QPBatchFetcherPayload <NSObject>
/* instance methods */
- (id)promotionsPerUser;
- (void)setPromotions:(id)promotions forUserID:(id)id surfaceID:(id)id;
- (void)setPromotions:(id)promotions forUserID:(id)id;
- (id)promotionsForUserID:(id)id surfaceID:(id)id;
- (BOOL)payloadContainsUserID:(id)id surfaceID:(id)id;
- (BOOL)payloadContainsUserID:(id)id;
@end

#endif /* QPBatchFetcherPayload_Protocol_h */