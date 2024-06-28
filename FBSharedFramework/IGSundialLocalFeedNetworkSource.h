//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialLocalFeedNetworkSource_h
#define IGSundialLocalFeedNetworkSource_h
@import Foundation;

#include "IGFeedNetworkSource.h"
#include "IGSessionTracker.h"
#include "IGSundialFeedNetworkSource.h"
#include "IGSundialFeedSource-Protocol.h"
#include "IGSundialGridRestrictedContext.h"
#include "IGSundialMusicAsset.h"
#include "IGSundialOriginalAudioAsset.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol IGFeedNetworkSourceDelegateAnnouncer, IGSundialFeedNetworkSourceDelegate;

@interface IGSundialLocalFeedNetworkSource : IGFeedNetworkSource<IGSundialFeedSource> {
  /* instance variables */
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
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

/* instance methods */
- (id)initWithPosts:(id)posts sundialConsumptionAPISessionDeps:(id)deps sessionTracker:(id)tracker;
- (BOOL)fetchDataWithAdditionalParameters:(id)parameters;
- (BOOL)fetchMoreItemsWithAdditionalParameters:(id)parameters;
- (BOOL)prefetchDataWithType:(long long)type behavior:(unsigned long long)behavior additionalParameters:(id)parameters;
- (void)fetchPendingMediaItems:(id)items networker:(id)networker objectStores:(id)stores shouldStreamRequests:(BOOL)requests additionalParams:(id)params;
- (id)mediaSource:(id)source;
- (BOOL)validDiskCacheAvailable;
- (void)updateUserDidViewCachedResponse;
- (void)updateSeenItemsWithMedia:(id)media;
- (BOOL)moreAvailable;
- (BOOL)shouldFetchHeadLoadOnViewerLoad;
- (BOOL)shouldFetchHeadLoadOnViewerTransitionFrom:(long long)from to:(long long)to;
- (void)addOrUpdateOverlayHostMediaMapForOrganicMedia:(id)media toAdItem:(id)item;
- (unsigned long long)fetchStatusForPost:(id)post;
- (void)filterEligiblePostsAfterMedia:(id)media userSession:(id)session;
- (BOOL)reelsAdsSyncDeliveryEnabled;
- (id)launcherSet;
- (BOOL)isAdInsertionAllowedForInsertionIndex:(long long)index;
- (BOOL)isChainingMediaUnavailable;
- (BOOL)isRestricted;
@end

#endif /* IGSundialLocalFeedNetworkSource_h */