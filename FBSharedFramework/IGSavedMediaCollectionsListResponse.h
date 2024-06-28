//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSavedMediaCollectionsListResponse_h
#define IGSavedMediaCollectionsListResponse_h
@import Foundation;

#include "IGLoadMoreResponseType-Protocol.h"

@class NSArray, NSString;

@interface IGSavedMediaCollectionsListResponse : NSObject<IGLoadMoreResponseType>

@property (readonly, copy, nonatomic) NSString *maxId;
@property (readonly, copy, nonatomic) NSArray *collections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCollections:(id)collections maxId:(id)id;
@end

#endif /* IGSavedMediaCollectionsListResponse_h */
