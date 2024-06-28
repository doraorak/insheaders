//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadFetchResult_h
#define IGDirectThreadFetchResult_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectPublishedThread.h"
#include "IGDirectThreadFetchMessageIslandResult.h"
#include "IGDirectThreadFetchPagingResult.h"

@class NSString;

@interface IGDirectThreadFetchResult : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGDirectPublishedThread *_thread;
  NSString *_paging_inputPreviousCursor;
  IGDirectThreadFetchPagingResult *_paging_pagingResult;
  IGDirectThreadFetchMessageIslandResult *_messageIsland;
  NSString *_streamingChunks_inputPreviousCursor;
  IGDirectThreadFetchPagingResult *_streamingChunks_streamingPagingResult;
}

/* class methods */
+ (id)messageIsland:(id)island;
+ (id)pagingWithInputPreviousCursor:(id)cursor pagingResult:(id)result;
+ (id)streamingChunksWithInputPreviousCursor:(id)cursor streamingPagingResult:(id)result;
+ (id)thread:(id)thread;

/* instance methods */
@end

#endif /* IGDirectThreadFetchResult_h */