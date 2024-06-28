//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGChainingFeedResponse_h
#define IGChainingFeedResponse_h
@import Foundation;

#include "IGLoadMoreResponseType-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface IGChainingFeedResponse : NSObject<IGLoadMoreResponseType> {
  /* instance variables */
  NSString *_maxId;
  NSNumber *_estimatedChainLength;
  NSNumber *_totalItemsReceived;
  NSString *_chainPaginationToken;
  NSString *_singleChainPaginationToken;
  NSDictionary *_brandSafetyInfo;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL hasMoreAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithItems:(id)items maxId:(id)id hasMoreAvailable:(BOOL)available estimatedChainLength:(id)length totalItemsReceived:(id)received chainPaginationToken:(id)token singleChainPaginationToken:(id)token brandSafetyInfo:(id)info;
- (id)maxId;
@end

#endif /* IGChainingFeedResponse_h */
