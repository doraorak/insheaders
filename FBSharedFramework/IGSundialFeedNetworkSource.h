//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialFeedNetworkSource_h
#define IGSundialFeedNetworkSource_h
@import Foundation;

#include "IGFeedNetworkSource.h"
#include "IGCachePolicy-Protocol.h"
#include "IGDiskCache.h"
#include "IGSessionTracker.h"
#include "IGSundialCacheInfoStore.h"
#include "IGSundialConsumptionAPISessionDeps.h"
#include "IGSundialFeedNetworkRequestRetrier.h"
#include "IGSundialFeedNetworkSource.h"
#include "IGSundialFeedSource-Protocol.h"
#include "IGSundialGridRestrictedContext.h"
#include "IGSundialMusicAsset.h"
#include "IGSundialOriginalAudioAsset.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSSet, NSString;
@protocol IGFeedNetworkSourceDelegateAnnouncer, IGSundialFeedNetworkSourceDelegate, IGSundialFeedNetworkSourcePoolDelegate;

@interface IGSundialFeedNetworkSource : IGFeedNetworkSource<IGSundialFeedSource> {
  /* instance variables */
  IGSundialFeedNetworkRequestRetrier *_requestRetrier;
  BOOL _shouldStreamRequests;
  NSSet *_mediaLoadedFromCache;
  NSSet *_mediaLoadedBeforeViewDidLoad;
  NSSet *_insertedMedias;
  NSDictionary *_initialFetchParameters;
  BOOL _hasMoreToPaginateForDirectSearchResharedContent;
  NSString *_nextPaginationOffsetForDirectSearchResharedContent;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  long long _streamingAccumulatedChunksCount;
  IGDiskCache *_diskCache;
  long long _surface;
  BOOL _reelsAdsSyncDeliveryEnabled;
  BOOL _reelsAdsDeliveryPrefetchDisabled;
  NSArray *_pendingInsertMedias;
  IGSundialCacheInfoStore *_cacheInfoStore;
  IGSundialConsumptionAPISessionDeps *_sundialConsumptionAPISessionDeps;
  BOOL _shouldSkipReuseHttpCacheForNextRequest;
  BOOL _checksMoreAvailableForDirectSearchResharedContentHubPagination;
  BOOL _pendingMediasAlreadyFetched;
  NSObject<IGCachePolicy> *_headLoadCachePolicy;
  NSObject<IGSundialFeedNetworkSourcePoolDelegate> *_poolDelegate;
  NSArray *_skippedItemIDs;
}

@property (nonatomic) long long pendingMediaFetchStatus;
@property (retain, nonatomic) NSString *diskCachePath;
@property (retain, nonatomic) NSNumber *searchReelsPageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGSundialMusicAsset *music;
@property (readonly, nonatomic) IGSundialOriginalAudioAsset *originalAudio;
@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) NSObject<IGFeedNetworkSourceDelegateAnnouncer> *announcer;
@property (readonly, nonatomic) BOOL restricted;
@property (readonly, nonatomic) IGSundialGridRestrictedContext *restrictedContext;
@property (readonly, nonatomic) NSString *fetchPath;
@property (readonly, nonatomic) NSArray *ownedPosts;
@property (readonly, nonatomic) NSArray *fetchedPosts;
@property (readonly) NSArray *posts;
@property (readonly, nonatomic) IGSessionTracker *sessionTracker;
@property (readonly, nonatomic) BOOL isReelsHomeOrTab;
@property (nonatomic) BOOL feedViewDidLoad;
@property (readonly, nonatomic) BOOL chainingMediaUnavailable;
@property (readonly, nonatomic) NSString *firstSeenMediaId;
@property (weak, nonatomic) NSObject<IGSundialFeedNetworkSourceDelegate> *pendingMediaDelegate;
@property (readonly, nonatomic) long long postsCountFromRecentResponse;
@property (readonly) BOOL loadedOnce;
@property (readonly) BOOL refreshFetchDisabled;
@property (readonly, nonatomic) BOOL isChainingDisabled;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) IGSundialFeedNetworkSource *sundialFeedNetworkSource;
@property (nonatomic) long long initialFetchAction;
@property (nonatomic) long long indexToInsertPendingMedia;
@property (retain, nonatomic) NSString *analyticsModule;
@property (retain, nonatomic) NSDictionary *overlayHostMediaToAdItemMap;
@property (readonly, nonatomic) double headLoadDistance;
@property (readonly, nonatomic) double tailLoadDistance;
@property (readonly, nonatomic) BOOL isMixedMediaChainingEnabled;

/* instance methods */
- (id)initWithPosts:(id)posts fetchPath:(id)path shouldStreamRequests:(BOOL)requests parameters:(id)parameters initialFetchParameters:(id)parameters nextMaxID:(id)id sundialConsumptionAPISessionDeps:(id)deps;
- (id)initWithPosts:(id)posts fetchPath:(id)path shouldStreamRequests:(BOOL)requests parameters:(id)parameters initialFetchParameters:(id)parameters nextMaxID:(id)id sundialConsumptionAPISessionDeps:(id)deps useGraphQL:(BOOL)ql;
- (id)initWithPosts:(id)posts fetchPath:(id)path shouldStreamRequests:(BOOL)requests parameters:(id)parameters method:(unsigned long long)method initialFetchParameters:(id)parameters nextMaxID:(id)id sundialConsumptionAPISessionDeps:(id)deps mediaCoordinatorModuleGraphSessionDeps:(id)deps responseParser:(id)parser;
- (id)initWithPosts:(id)posts fetchPath:(id)path shouldStreamRequests:(BOOL)requests parameters:(id)parameters method:(unsigned long long)method initialFetchParameters:(id)parameters nextMaxID:(id)id sundialConsumptionAPISessionDeps:(id)deps mediaCoordinatorModuleGraphSessionDeps:(id)deps responseParser:(id)parser useGraphQL:(BOOL)ql;
- (BOOL)moreAvailable;
- (BOOL)shouldFetchHeadLoadOnViewerLoad;
- (BOOL)shouldFetchHeadLoadOnViewerTransitionFrom:(long long)from to:(long long)to;
- (void)updateModelsFromParsedResponse:(id)response requestConfig:(id)config;
- (void)fetchPendingMediaItems:(id)items networker:(id)networker objectStores:(id)stores shouldStreamRequests:(BOOL)requests additionalParams:(id)params;
- (id /* block */)cacheHandlerWithConfig:(id)config;
- (void)updateSeenItemsWithMedia:(id)media;
- (void)addOrUpdateOverlayHostMediaMapForOrganicMedia:(id)media toAdItem:(id)item;
- (void)filterEligiblePostsAfterMedia:(id)media userSession:(id)session;
- (BOOL)prefetchDataWithType:(long long)type behavior:(unsigned long long)behavior additionalParameters:(id)parameters;
- (BOOL)fetchDataWithAdditionalParameters:(id)parameters;
- (BOOL)fetchMoreItems;
- (BOOL)fetchMoreItemsWithAdditionalParameters:(id)parameters;
- (BOOL)fetchData;
- (BOOL)fetchDataWithConfig:(id)config;
- (unsigned long long)fetchStatusForPost:(id)post;
- (BOOL)insertPosts:(id)posts atIndex:(long long)index shouldNotifyUpdate:(BOOL)update;
- (void)deletePost:(id)post;
- (void)deletePosts:(id)posts;
- (void)didFinishLoadingWithHTTPResponse:(id)httpresponse success:(BOOL)success error:(id)error requestConfig:(id)config;
- (BOOL)isRestricted;
- (void)updateUserDidViewCachedResponse;
- (id)mediaSource:(id)source;
- (BOOL)validDiskCacheAvailable;
- (id)resolveCurrentSundialFeedItemsForResponseParsing;
- (BOOL)reelsAdsSyncDeliveryEnabled;
- (id)launcherSet;
- (BOOL)isAdInsertionAllowedForInsertionIndex:(long long)index;
- (void)resetShouldSkipReuseHTTPCacheForNextRequest;
- (BOOL)isChainingMediaUnavailable;
@end

#endif /* IGSundialFeedNetworkSource_h */
