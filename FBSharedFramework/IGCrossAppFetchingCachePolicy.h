//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCrossAppFetchingCachePolicy_h
#define IGCrossAppFetchingCachePolicy_h
@import Foundation;

#include "IGCacheMetadata.h"
#include "IGCachePolicy-Protocol.h"

@class NSString;

@interface IGCrossAppFetchingCachePolicy : NSObject<IGCachePolicy> {
  /* instance variables */
  IGCacheMetadata *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMetadata:(id)metadata;
- (id)metadata;
- (unsigned long long)requestStartedWithCacheUnlockHandler:(id /* block */)handler;
- (void)requestFinishedWithError:(id)error;
- (void)requestCompletedSuccessfullyWithData:(id)data response:(id)response didWriteResponseToCache:(BOOL)cache;
- (void)requestCompletedEarlierByLoadingCacheData;
- (BOOL)shouldCacheData:(id)data fromResponse:(id)response;
- (BOOL)supports304;
- (BOOL)usesCrossAppFetchingContainer;
@end

#endif /* IGCrossAppFetchingCachePolicy_h */
