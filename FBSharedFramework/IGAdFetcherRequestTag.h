//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdFetcherRequestTag_h
#define IGAdFetcherRequestTag_h
@import Foundation;

#include "IGAdPaginationInfo.h"
#include "IGNetworkRequestTagType-Protocol.h"

@class NSString;

@interface IGAdFetcherRequestTag : NSObject<IGNetworkRequestTagType>

@property (readonly, nonatomic) IGAdPaginationInfo *paginationInfo;
@property (readonly, nonatomic) BOOL isHeadload;
@property (readonly, nonatomic) NSString *adSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPaginationInfo:(id)info isHeadload:(BOOL)headload adSessionId:(id)id;
@end

#endif /* IGAdFetcherRequestTag_h */
