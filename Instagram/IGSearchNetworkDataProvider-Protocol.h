//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchNetworkDataProvider_Protocol_h
#define IGSearchNetworkDataProvider_Protocol_h
@import Foundation;

@protocol IGSearchNetworkDataProvider <NSObject>

@property (nonatomic, weak) NSObject<IGSearchNetworkDataProviderDelegate> *delegate;
@property (nonatomic, readonly) long long loadingState;

/* instance methods */
- (void)fetchDataForSearchQueryModel:(id)model;
- (void)fetchDataForSearchQueryModel:(id)model;
- (void)invalidateSearchCache;
@end

#endif /* IGSearchNetworkDataProvider_Protocol_h */
