//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectGridViewNetworkHelper_h
#define IGDirectGridViewNetworkHelper_h
@import Foundation;

#include "IGDirectInstamadilloMediaAssetFetchService.h"
#include "IGDirectPermanentMediaUploadPreparerProtocol-Protocol.h"
#include "IGNetworkSource.h"
#include "IGNetworkSourceDelegate-Protocol.h"
#include "IGUserSession.h"

@class NSMutableDictionary, NSString;
@protocol IGDirectGridViewNetworkHelperDelegate;

@interface IGDirectGridViewNetworkHelper : NSObject<IGNetworkSourceDelegate> {
  /* instance variables */
  IGNetworkSource *_networkSource;
  NSString *_collectionType;
  NSString *_collectionId;
  NSString *_threadId;
  NSString *_clientContext;
  NSString *_cursor;
  unsigned long long _entryPoint;
  IGUserSession *_userSession;
  IGDirectInstamadilloMediaAssetFetchService *_instamadilloMediaAssetFetchService;
  NSObject<IGDirectPermanentMediaUploadPreparerProtocol> *_permMediaUploadPreparer;
  NSMutableDictionary *_completions;
}

@property (weak, nonatomic) NSObject<IGDirectGridViewNetworkHelperDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEntryPoint:(unsigned long long)point collectionId:(id)id threadId:(id)id clientContext:(id)context userSession:(id)session;
- (void)fetch;
- (void)fetchMore;
- (id)networkSource:(id)source requestWithMaxID:(id)id isPrefetch:(BOOL)prefetch requestTag:(id)tag;
- (void)networkSource:(id)source didFetchObject:(id)object request:(id)request httpResponse:(id)response isPrefetch:(BOOL)prefetch isFromCache:(BOOL)cache requestTag:(id)tag;
- (void)networkSource:(id)source didFetchMoreWithObject:(id)object request:(id)request httpResponse:(id)response isPrefetch:(BOOL)prefetch isFromCache:(BOOL)cache requestTag:(id)tag;
- (void)networkSource:(id)source didFailWithError:(id)error request:(id)request httpResponse:(id)response isPrefetch:(BOOL)prefetch requestTag:(id)tag;
@end

#endif /* IGDirectGridViewNetworkHelper_h */