//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPFetcher_h
#define IGQPFetcher_h
@import Foundation;

#include "IGMultipleAccountHandling-Protocol.h"
#include "QPBatchFetcher-Protocol.h"

@class NSMutableDictionary, NSString;

@interface IGQPFetcher : NSObject<QPBatchFetcher> {
  /* instance variables */
  NSObject<IGMultipleAccountHandling> *_multipleAccountHandler;
  NSMutableDictionary *_responsesByUserPK;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMultipleAccountHandler:(id)handler;
- (void)batchFetchPromotionsWithCompletion:(id /* block */)completion failure:(id /* block */)failure;
@end

#endif /* IGQPFetcher_h */