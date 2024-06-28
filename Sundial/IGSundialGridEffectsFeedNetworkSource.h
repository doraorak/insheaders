//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialGridEffectsFeedNetworkSource_h
#define IGSundialGridEffectsFeedNetworkSource_h
@import Foundation;

#include "IGSundialFeedNetworkSource.h"
#include "IGAPIEffectPreviewDict.h"
#include "IGSessionTracker.h"
#include "IGSundialEffectFeedSource-Protocol.h"
#include "IGSundialFeedNetworkSource.h"
#include "IGSundialGridEffectsPageMetadata.h"
#include "IGSundialGridRestrictedContext.h"
#include "IGSundialMusicAsset.h"
#include "IGSundialOriginalAudioAsset.h"
#include "IGSundialVideoUploadListener-Protocol.h"

@class NSArray, NSDictionary, NSMutableSet, NSString;
@protocol IGFeedNetworkSourceDelegateAnnouncer, IGSundialFeedNetworkSourceDelegate;

@interface IGSundialGridEffectsFeedNetworkSource : IGSundialFeedNetworkSource<IGSundialVideoUploadListener, IGSundialEffectFeedSource> {
  /* instance variables */
  NSMutableSet *_partiallyLoadedPosts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *effectID;
@property (readonly, nonatomic) IGSundialGridEffectsPageMetadata *effectsPageMetadata;
@property (readonly, nonatomic) IGAPIEffectPreviewDict *effectConfig;
@property (readonly, nonatomic) BOOL isFromCache;
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

/* instance methods */
- (id)initWithPosts:(id)posts fetchPath:(id)path shouldStreamRequests:(BOOL)requests parameters:(id)parameters method:(unsigned long long)method initialFetchParameters:(id)parameters nextMaxID:(id)id sundialConsumptionAPISessionDeps:(id)deps mediaCoordinatorModuleGraphSessionDeps:(id)deps responseParser:(id)parser;
- (BOOL)fetchDataWithConfig:(id)config;
- (void)updateModelsFromParsedResponse:(id)response requestConfig:(id)config;
- (BOOL)isRestricted;
- (unsigned long long)fetchStatusForPost:(id)post;
- (void)sundialVideoDidSuccessfullyUpload:(id)upload media:(id)media sharedToFeed:(BOOL)feed sharedToReels:(BOOL)reels sharedToProfileGrid:(BOOL)grid fanClubVideoType:(long long)type;
- (void)sundialVideoDidBeginUpload:(id)upload sharedToFeed:(BOOL)feed sharedToReels:(BOOL)reels fanClubVideoType:(long long)type;
- (void)sundialVideo:(id)video didUpdateUploadProgress:(double)progress;
- (void)sundialVideoDidFailToUpload:(id)upload;
- (void)sundialVideoDidCancelUpload:(id)upload;
@end

#endif /* IGSundialGridEffectsFeedNetworkSource_h */