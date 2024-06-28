//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialDirectThreadFeedNetworkSource_h
#define IGSundialDirectThreadFeedNetworkSource_h
@import Foundation;

#include "IGSessionTracker.h"
#include "IGSundialFeedNetworkSource.h"
#include "IGSundialFeedSource-Protocol.h"
#include "IGSundialGridRestrictedContext.h"
#include "IGSundialMusicAsset.h"
#include "IGSundialOriginalAudioAsset.h"
#include "IGSundialUnconnectedFeedNetworkSource.h"
#include "IGSundialUnconnectedFeedNetworkSourceProtocol-Protocol.h"
#include "IGUserSession.h"

@class NSArray, NSDictionary, NSString;
@protocol IGFeedNetworkSourceDelegateAnnouncer, IGSundialFeedNetworkSourceDelegate, IGSundialUnconnectedFeedNetworkSourceDelegate;

@interface IGSundialDirectThreadFeedNetworkSource : NSObject<IGSundialFeedSource, IGSundialUnconnectedFeedNetworkSourceProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSundialUnconnectedFeedNetworkSource *_unconnectedFeedNetworkSource;
  NSString *_mediaIdToChainFrom;
  unsigned long long _historicalReelsNetworkState;
  BOOL _hasMoreHistoricalReelsAvailable;
  BOOL _hasInitialPosts;
  NSArray *_threadMessages;
}

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
@property (readonly, nonatomic) long long pendingMediaFetchStatus;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGSundialUnconnectedFeedNetworkSourceDelegate> *unconnectedFeedSourceDelegate;
@property (readonly, nonatomic) IGSundialFeedNetworkSource *feedNetworkSource;

/* instance methods */
- (id)initWithSundialPool:(id)pool userSession:(id)session mediaIdToChainFrom:(id)from tappedMediaIndex:(unsigned long long)index posts:(id)posts threadMessages:(id)messages threadId:(id)id parameters:(id)parameters containerMoudle:(id)moudle sundialConsumptionAPISessionDeps:(id)deps flashMediaAnnouncer:(id)announcer videoPlayerManaging:(id)managing;
- (void)updateSeenItemsWithMedia:(id)media;
- (void)fetchPendingMediaItems:(id)items networker:(id)networker objectStores:(id)stores shouldStreamRequests:(BOOL)requests additionalParams:(id)params;
- (id)cacheOnlyPostsFromSundialPool;
- (id)injectedFlashCachePosts;
- (id)initialPosts;
- (void)persistSundialPoolContentToDisk;
- (void)removeSeenPostsFromFlashCacheIfNecessary;
- (void)markClearUnseenNetworkPostsIsNeeded;
- (BOOL)flashCacheAvailable;
- (BOOL)flashCacheAvailableForHeadLoadOnly;
- (id)lockFirstFlashCacheItemIfNeeded;
- (BOOL)fetchMoreItemsWithAdditionalParameters:(id)parameters;
- (BOOL)fetchDataWithAdditionalParameters:(id)parameters;
- (void)updateUserDidViewCachedResponse;
- (unsigned long long)fetchStatusForPost:(id)post;
- (BOOL)shouldFireHeadLoadForCurrentPlaybackTime:(double)time playbackDuration:(double)duration videoIndex:(long long)index;
- (void)toggleSeenStateManagerListener:(BOOL)listener;
- (BOOL)isRestricted;
- (BOOL)isChainingMediaUnavailable;
- (id)mediaSource:(id)source;
- (BOOL)validDiskCacheAvailable;
- (BOOL)insertPosts:(id)posts atIndex:(long long)index shouldNotifyUpdate:(BOOL)update;
- (void)insertPostToFront:(id)front;
- (void)deletePosts:(id)posts;
- (void)hideFeedItem:(id)item;
- (BOOL)fetchData;
- (BOOL)fetchMoreItems;
- (BOOL)prefetchDataWithType:(long long)type behavior:(unsigned long long)behavior additionalParameters:(id)parameters;
- (BOOL)moreAvailable;
- (void)addOrUpdateOverlayHostMediaMapForOrganicMedia:(id)media toAdItem:(id)item;
- (void)filterEligiblePostsAfterMedia:(id)media userSession:(id)session;
- (BOOL)shouldFetchHeadLoadOnViewerLoad;
- (BOOL)shouldFetchHeadLoadOnViewerTransitionFrom:(long long)from to:(long long)to;
- (BOOL)reelsAdsSyncDeliveryEnabled;
- (id)launcherSet;
- (BOOL)isAdInsertionAllowedForInsertionIndex:(long long)index;
@end

#endif /* IGSundialDirectThreadFeedNetworkSource_h */
