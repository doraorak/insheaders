//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdFetcherManager_h
#define IGAdFetcherManager_h
@import Foundation;

#include "IGAdFetcher.h"
#include "IGAdPaginationInfo.h"
#include "IGAdPlatformEventCenter.h"
#include "IGAdPlatformToolbox.h"
#include "IGNetworkParser-Protocol.h"
#include "NSObject-Protocol.h"

@class NSDate, NSString;
@protocol IGAdFetcherManagerDelegate, IGAdInsertionDataSource, IGAdInsertionDelegate;

@interface IGAdFetcherManager : NSObject<NSObject> {
  /* instance variables */
  IGAdFetcher *_mainFetcher;
  IGAdFetcher *_prefetcher;
  BOOL _isAdPrefetchEnabled;
  IGAdPlatformToolbox *_adPlatformToolbox;
  IGAdPlatformEventCenter *_adPlatformEventCenter;
  NSString *_requestPath;
  NSObject<IGNetworkParser> *_parser;
  BOOL _shouldRequestHeadload;
  IGAdPaginationInfo *_prefetchPagination;
  NSDate *_prefetchDisabledDate;
  double _prefetchThresholdInSecs;
  NSObject<IGAdInsertionDataSource> *_adPlatformDataSource;
  NSObject<IGAdInsertionDelegate> *_adPlatformDelegate;
  NSObject<IGAdFetcherManagerDelegate> *_adFetcherManagerDelegate;
  BOOL _shouldPreventPrefetchOnlyAfterSuccessfulResponseEnabled;
  BOOL _canPrefetchAds;
  IGAdPaginationInfo *_requestPaginationInfo;
}

@property (readonly, nonatomic) BOOL isFetchingAds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAdPlatformToolbox:(id)toolbox adPlatformEventCenter:(id)center adFetcherManagerDelegate:(id)delegate requestPath:(id)path parser:(id)parser adPlatformDataSource:(id)source adPlatformDelegate:(id)delegate;
- (void)setPaginationInfoFromDisk:(id)disk;
- (void)adFetcher:(id)fetcher didReturnAdsResponse:(id)response paginationInfo:(id)info requestMetadata:(id)metadata adRequestExtraInfo:(id)info;
- (void)adFetcher:(id)fetcher didFailWithError:(id)error requestExtraInfo:(id)info;
- (BOOL)_isRequestCarryOverEnabled;
@end

#endif /* IGAdFetcherManager_h */
