//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedNetworkSourceCommonResponse_h
#define IGFeedNetworkSourceCommonResponse_h
@import Foundation;

#include "IGFeedNetworkSourceParsedResponse-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface IGFeedNetworkSourceCommonResponse : NSObject<IGFeedNetworkSourceParsedResponse>

@property (readonly, nonatomic) NSString *nextMaxID;
@property (readonly, nonatomic) NSArray *downloadedItems;
@property (readonly, nonatomic) unsigned long long chunkIndex;
@property (readonly, nonatomic) NSDictionary *rawResponseData;
@property (readonly, nonatomic) BOOL isLoadedFromNetworkCache;
@property (readonly, nonatomic) BOOL shouldClearOutExistingFeed;
@property (readonly, nonatomic) BOOL shouldPrependInsteadOfAppend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNextMaxID:(id)id downloadedItems:(id)items chunkIndex:(long long)index rawResponseData:(id)data isLoadedFromNetworkCache:(BOOL)cache shouldClearOutExistingFeed:(BOOL)feed;
- (BOOL)shouldUpdatePaging;
@end

#endif /* IGFeedNetworkSourceCommonResponse_h */
