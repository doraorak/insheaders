//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef QPBatchFetcher_Protocol_h
#define QPBatchFetcher_Protocol_h
@import Foundation;

@protocol QPBatchFetcher <NSObject>
/* instance methods */
- (void)batchFetchPromotionsWithCompletion:(id /* block */)completion failure:(id /* block */)failure;
@end

#endif /* QPBatchFetcher_Protocol_h */