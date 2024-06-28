//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFRangeRequestDataFetcher_h
#define FNFRangeRequestDataFetcher_h
@import Foundation;

#include "FNFRangeRequestChunkDataFetcher.h"
#include "FNFRangeRequestDataFetcherCaching-Protocol.h"
#include "NSObject-Protocol.h"

@class FNFAssetResourceLoadingRequest, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol FNFAssetResourceLoadedListener, FNFRangeRequestDataFetcherDelegate, FNFRangeRequestNetworking, OS_dispatch_queue;

@interface FNFRangeRequestDataFetcher : NSObject<NSObject> {
  /* instance variables */
  NSObject<FNFRangeRequestDataFetcherDelegate> *_delegate;
  NSObject<FNFAssetResourceLoadedListener> *_resourceLoadedListener;
  NSObject<FNFRangeRequestDataFetcherCaching> *_cache;
  NSObject<FNFRangeRequestNetworking> *_networker;
  struct { unsigned long long chunkSize; unsigned char concurrentRequestMax; } _config;
  FNFRangeRequestChunkDataFetcher *_chunkFetcher;
  NSMutableArray *_requestQueue;
  NSArray *_requestChunks;
  NSMutableDictionary *_dataBuffer;
  NSObject<OS_dispatch_queue> *_fetchQueue;
  unsigned long long _sequence;
  unsigned long long _requestedBytes;
  unsigned long long _sequenceInOrder;
  unsigned long long _requestOffset;
  unsigned long long _requestLength;
  unsigned long long _totalLength;
  NSURL *_url;
  FNFAssetResourceLoadingRequest *_loadingRequest;
}

@property (readonly, copy, nonatomic) NSString *videoID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithURL:(id)url encryptionContext:(id)context videoID:(id)id delegate:(id)delegate networker:(id)networker cache:(id)cache dataRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range delegateQueue:(id)queue resourceLoadedListener:(id)listener;
- (void)startFetching;
- (void)didFetchChunk:(id)chunk data:(id)data totalLength:(unsigned long long)length;
- (void)failedToFetchChunk:(id)chunk error:(id)error;
@end

#endif /* FNFRangeRequestDataFetcher_h */
