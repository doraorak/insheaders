//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedRequestState_h
#define IGFeedRequestState_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGAPIClientResponseMetadata.h"
#include "IGFeedNetworkBaseFetcherParsedResponse-Protocol.h"
#include "IGFeedNetworkSourceParsedResponse-Protocol.h"
#include "IGFeedRequestConfig-Protocol.h"
#include "IGFeedRequestResult.h"

@class NSString;

@interface IGFeedRequestState : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_started_fetchPath;
  NSObject<IGFeedRequestConfig> *_started_config;
  IGAPIClientResponseMetadata *_shellDataReceived_metadata;
  IGAPIClientResponseMetadata *_shellParsingStarted_metadata;
  IGAPIClientResponseMetadata *_shellParsingFinished_metadata;
  unsigned long long _dataReceived_chunkIndex;
  IGAPIClientResponseMetadata *_dataReceived_metadata;
  unsigned long long _parsingStarted_chunkIndex;
  IGAPIClientResponseMetadata *_parsingStarted_metadata;
  NSObject<IGFeedNetworkBaseFetcherParsedResponse> *_parsingFinished_response;
  unsigned long long _parsingFinished_chunkIndex;
  IGAPIClientResponseMetadata *_parsingFinished_metadata;
  NSObject<IGFeedNetworkSourceParsedResponse> *_updatePostsStarted_response;
  unsigned long long _updatePostsStarted_chunkIndex;
  IGAPIClientResponseMetadata *_updatePostsStarted_metadata;
  NSObject<IGFeedNetworkSourceParsedResponse> *_updatePostsFinished_response;
  unsigned long long _updatePostsFinished_chunkIndex;
  IGAPIClientResponseMetadata *_updatePostsFinished_metadata;
  BOOL _responseEmitted_fromCache;
  IGFeedRequestResult *_finished_result;
}

/* class methods */
+ (id)dataReceivedWithChunkIndex:(unsigned long long)index metadata:(id)metadata;
+ (id)finishedWithResult:(id)result;
+ (id)firstByteFlushed;
+ (id)parsingFinishedWithResponse:(id)response chunkIndex:(unsigned long long)index metadata:(id)metadata;
+ (id)parsingStartedWithChunkIndex:(unsigned long long)index metadata:(id)metadata;
+ (id)responseEmittedWithFromCache:(BOOL)cache;
+ (id)shellDataReceivedWithMetadata:(id)metadata;
+ (id)shellParsingFinishedWithMetadata:(id)metadata;
+ (id)shellParsingStartedWithMetadata:(id)metadata;
+ (id)startedWithFetchPath:(id)path config:(id)config;
+ (id)updatePostsFinishedWithResponse:(id)response chunkIndex:(unsigned long long)index metadata:(id)metadata;
+ (id)updatePostsStartedWithResponse:(id)response chunkIndex:(unsigned long long)index metadata:(id)metadata;

/* instance methods */
@end

#endif /* IGFeedRequestState_h */
