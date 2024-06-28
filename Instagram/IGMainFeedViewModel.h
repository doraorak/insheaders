//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainFeedViewModel_h
#define IGMainFeedViewModel_h
@import Foundation;

#include "IGFeedItemPostedListener-Protocol.h"
#include "IGFlashFeedCacheController.h"
#include "IGMainFeedAdInsertionDataSource.h"
#include "IGMainFeedAdInsertionHandler.h"
#include "IGMainFeedCachedItemVender.h"
#include "IGMainFeedConfiguration.h"
#include "IGMainFeedDataController.h"
#include "IGMainFeedItemConfiguration.h"
#include "IGMainFeedLogger.h"
#include "IGMainFeedNetworkSourceSessionDeps.h"
#include "IGMainFeedNewPostExistNetworkSource.h"
#include "IGMainFeedRequestStartupAnalyzerWrapper.h"
#include "IGMainFeedViewModelAdsDeps.h"
#include "IGNavigationEventListener-Protocol.h"
#include "IGStartupAnalyzerListener-Protocol.h"
#include "IGStoriesTrayLoadQPLogger.h"
#include "IGStoriesTrayRefreshController.h"
#include "IGStoryAdsPrefetchCoordinator.h"
#include "IGStoryDataController.h"
#include "IGSundialVideoUploadListener-Protocol.h"
#include "IGWarmStartListener-Protocol.h"

@class IGAdItemMapper, IGAdRealTimePeakChecker, IGFunctionalErrorReporter, IGHScrollAYMFModel, IGImmersiveFeedConfiguration, IGNetworkConnectionManager, IGSponsoredSupportConfiguration, IGUserDefaults, IGUserSessionProvider, NSDate, NSString;
@protocol IGMainFeedViewModelDelegate><IGMainFeedViewStateProvider;

@interface IGMainFeedViewModel : NSObject<IGFeedItemPostedListener, IGWarmStartListener, IGSundialVideoUploadListener, IGStartupAnalyzerListener, IGNavigationEventListener> {
  /* instance variables */
  NSObject<IGMainFeedViewModelDelegate><IGMainFeedViewStateProvider> *_bindedViewController;
  IGStoryAdsPrefetchCoordinator *_adsPrefetchCoordinator;
  IGMainFeedNewPostExistNetworkSource *_newPostExistNetworkSource;
  IGMainFeedLogger *_logger;
  NSDate *_lastBackgroundDate;
  BOOL _disableAutomaticRefresh;
  IGMainFeedNetworkSourceSessionDeps *_mainFeedNetworkSourceSessionDeps;
  IGMainFeedViewModelAdsDeps *_adsDeps;
  IGStoriesTrayLoadQPLogger *_storiesTrayLoadQPLogger;
  IGStoriesTrayRefreshController *_trayRefreshController;
  IGFlashFeedCacheController *_flashFeedCacheController;
  BOOL _disableMainFeedLoadFromDisk;
  double _loadDistance;
  IGHScrollAYMFModel *_emptyFeedSUModel;
  double _pullToRefreshWindow;
  BOOL _managesHeader;
  double _minWarmStartFetchInterval;
  double _peakMinWarmStartFetchInterval;
  double _minimumWarmStartBackgroundedInterval;
  BOOL _hidesStoriesTray;
  BOOL _explorePrefetchDisabledAtStartup;
  id /* block */ _backgroundPrefetchCompletionHandler;
  BOOL _isSecondaryFeed;
  IGMainFeedCachedItemVender *_cachedItemVender;
  IGFunctionalErrorReporter *_functionalErrorReporter;
  BOOL _disableFlashFeedHeadload;
  BOOL _shouldDelayViewablePosts;
  BOOL _enableForcefulWarmstartFetch;
  BOOL _avoidOverfetchOnColdStartEnabled;
  BOOL _avoidOverfetchOnColdStartPeakOnlyEnabled;
  BOOL _enableWarmStartAsColdStart;
  BOOL _forceHeaderLoadAppendIfFeedAppeared;
  double _avoidOverfetchOnColdStartTimeInterval;
  BOOL _loadedFromDiskOnce;
  IGNetworkConnectionManager *_connectionManager;
  long long _lastFeedBGPrefetchTimestamp;
  IGUserSessionProvider *_userSessionProvider;
  IGUserDefaults *_userDefaults;
  IGMainFeedRequestStartupAnalyzerWrapper *_tracker;
  IGAdRealTimePeakChecker *_adRealTimePeakChecker;
  BOOL _hasFinishedStoriesRefresh;
  BOOL _hasFinishedFeedRefresh;
  BOOL _hasStoryTrayRealtimePushRefreshQueuedUpdate;
  BOOL _shouldWaitForStoriesAppStartCheckBeforeQueuedUpdate;
  IGMainFeedAdInsertionDataSource *_feedAdInsertionDataSource;
}

@property (retain, nonatomic) IGMainFeedDataController *feedDataController;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) IGMainFeedAdInsertionHandler *adInsertionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGStoryDataController *storyDataController;
@property (readonly, nonatomic) IGAdItemMapper *adItemMapper;
@property (readonly, nonatomic) IGMainFeedConfiguration *mainFeedConfiguration;
@property (readonly, nonatomic) IGMainFeedItemConfiguration *mainFeedItemConfiguration;
@property (readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration;
@property (readonly, nonatomic) IGImmersiveFeedConfiguration *immersiveFeedConfiguration;
@property (readonly, nonatomic) NSDate *latestLoadSuccess;
@property (readonly, nonatomic) BOOL needsLoad;

/* instance methods */
- (id)initWithUserScopedObjects:(id)objects mainFeedNetworkSourceDeps:(id)deps storiesDeps:(id)deps adsDeps:(id)deps posts:(id)posts nextMaxID:(id)id initialPaginationSource:(id)source disableAutomaticRefresh:(BOOL)refresh disableSerialization:(BOOL)serialization sessionId:(id)id analyticsModule:(id)module serializationSuffix:(id)suffix disableFlashFeedTLI:(BOOL)tli disableFlashFeedOnColdStart:(BOOL)start disableResponseDeferral:(BOOL)deferral managesHeader:(BOOL)header hidesStoriesTray:(BOOL)tray isSecondaryFeed:(BOOL)feed minWarmStartFetchInterval:(double)interval peakMinWarmStartFetchInterval:(double)interval minimumWarmStartBackgroundedInterval:(double)interval functionalErrorReporter:(id)reporter;
- (id)currentSessionInfo;
- (id)posts;
- (id)viewablePosts;
- (id)emptyFeedSUModel;
- (long long)status;
- (BOOL)isLoading;
- (double)loadDistance;
- (BOOL)isUpdatingPosts;
- (BOOL)loadedOnce;
- (BOOL)moreAvailable;
- (BOOL)isLoadingEmptyFeed;
- (id)nextMaxID;
- (id)lastHeadloadSuccess;
- (double)timeSinceLastFetch;
- (BOOL)containsEndOfFeed;
- (BOOL)isCachedResults;
- (BOOL)isFreshCachedResults;
- (id)paginationSource;
- (id)sessionTracker;
- (id)currentRequestConfig;
- (id)mainFeedDeliveryMethodForFirstObject;
- (BOOL)managesHeader;
- (BOOL)hidesStoriesTray;
- (BOOL)isRefreshDisabled;
- (long long)HTTPFailureStatusCode;
- (id)error;
- (id)errorMessage;
- (long long)authorizationError;
- (BOOL)isSecondaryFeed;
- (void)clearAllPosts;
- (void)purgeIFRPostsFromCache;
- (void)purgeFeedRecsFromCache;
- (void)removePostsForUser:(id)user;
- (void)removePostsFromHashtag:(id)hashtag;
- (void)filterEligibleUnconnectedPostsAfterMedia:(id)media userSession:(id)session;
- (BOOL)insertPost:(id)post atIndex:(long long)index shouldNotifyUpdate:(BOOL)update;
- (void)insertOrBumpMediasToFront:(id)front;
- (void)deletePost:(id)post;
- (void)updateItem:(id)item notifyDelegate:(BOOL)delegate;
- (BOOL)fetchMoreItemsWithPrefetchType:(long long)type;
- (BOOL)fetchMoreItemsWithPrefetchType:(long long)type fetchReason:(long long)reason;
- (void)updatePaginationSource:(id)source nextMaxID:(id)id;
- (void)startListeningForWarmStartAndDidEnterBackground;
- (void)stopListeningForWarmStartAndDidEnterBackground;
- (id)userPk;
- (void)fetchMainFeedAndStoriesTrayFromDisk;
- (void)disableMainFeedLoadFromDisk;
- (BOOL)loadedFromDiskOnce;
- (void)fetchMainFeedFromDisk;
- (void)prepareForMainFeedFetchWithReason:(long long)reason;
- (BOOL)fetchDataWithMainFeedFetchReason:(long long)reason trackingWith:(id)with hoistedMediaID:(id)id requestCancellationBlock:(id /* block */)block;
- (BOOL)_fetchFeedAndStoryWithMainFeedFetchReason:(long long)reason shouldFetchFeed:(BOOL)feed shouldFetchStories:(BOOL)stories cancelOngoingFetch:(BOOL)fetch trackingWith:(id)with hoistedMediaID:(id)id;
- (BOOL)_shouldFetchNewPostExistEndpointWithFetchReason:(long long)reason;
- (void)fetchDataOnStoryTrayWithMainFeedFetchReason:(long long)reason;
- (BOOL)prefetchDataWithMainFeedFetchReason:(long long)reason completionHandler:(id /* block */)handler;
- (BOOL)vendCachedItems;
- (BOOL)isLoadingWithNoPosts;
- (BOOL)didLoadCacheWithBackgroundPrefetchResponse;
- (void)resortStoriesTray;
- (double)timeIntervalSinceLastBackground;
- (void)applicationWillWarmStartWithTimeIntervalSinceBackgrounded:(double)backgrounded;
- (void)fetchDataForWarmStartWithTimeSinceBackground:(double)background;
- (void)_onAppDidEnterBackground:(id)background;
- (void)feedItemPosted:(id)posted postId:(id)id;
- (void)feedItemPostFailed;
- (void)feedItemWillPost:(id)post taggedProducts:(id)products;
- (void)igtvUploadStatusDidSucceedWithMedia:(id)media sharedPreviewToFeed:(BOOL)feed;
- (void)igtvUploadStatusDidChange:(long long)change postShare:(id)share;
- (void)igtvUploadStatusDidChangePendingUploadItems:(id)items;
- (void)sundialVideoDidSuccessfullyUpload:(id)upload media:(id)media sharedToFeed:(BOOL)feed sharedToReels:(BOOL)reels sharedToProfileGrid:(BOOL)grid fanClubVideoType:(long long)type;
- (void)sundialVideoDidBeginUpload:(id)upload sharedToFeed:(BOOL)feed sharedToReels:(BOOL)reels fanClubVideoType:(long long)type;
- (void)sundialVideo:(id)video didUpdateUploadProgress:(double)progress;
- (void)sundialVideoDidFailToUpload:(id)upload;
- (void)sundialVideoDidCancelUpload:(id)upload;
- (void)dataControllerDidCreateNewFeedSession:(id)session;
- (BOOL)dataControllerShouldRefreshFeedWithReason:(long long)reason;
- (void)feedSession:(id)session didReceiveResponse:(id)response forRequestConfig:(id)config;
- (void)feedSession:(id)session didFinishLoadingWithResponseContext:(id)context forRequestConfig:(id)config success:(BOOL)success;
- (void)feedSession:(id)session didUpdateFeedItems:(id)items;
- (void)feedSession:(id)session didStartLoadingWithConfig:(id)config;
- (void)eagerLoadMediaForPost:(id)post;
- (void)placeholderViewWillShow;
- (void)placeholderViewWillDisappear;
- (id)inactiveGroup;
- (void)replaceGroup:(id)group;
- (id)groupWithPaginationSource:(id)source;
- (void)injectAndRefetchMediaIds:(id)ids;
- (void)startupAnalyzerDidStart:(long long)start;
- (void)startupAnalyzerDidEnd;
- (void)flashFeedCacheControllerDidUpdateCacheInventory;
- (BOOL)hasDeferredResponse;
- (void)loadDeferredResponse;
- (BOOL)surfaceSupportsAd;
- (void)mainFeedAdInsertionHandlerDidInsertIntentAwareAdsPivot:(id)pivot replacedSponsoredItem:(id)item atPosition:(unsigned long long)position clientInsertionSource:(id)source;
- (void)mainFeedAdInsertionHandlerDidSkipIntentAwareAdsInsertion:(id)insertion reason:(id)reason atPosition:(long long)position;
- (void)mainFeedAdInsertionHandlerDidDeliverIntentAwareAdsPivot:(id)pivot;
- (BOOL)mainFeedAdInsertionHandlerIsEligibleForIntentAwareAdsInsertion;
- (long long)mainFeedAdInsertionHandlerMostVisibleItemIndex;
- (void)viewControllerWillAppear:(id)appear;
- (void)viewControllerDidAppear:(id)appear withEventData:(id)data;
- (void)viewControllerWillDisappear:(id)disappear;
- (void)viewControllerDidDisappear:(id)disappear withEventData:(id)data;
- (void)viewControllerDidUpdate:(id)update updateExtras:(id)extras;
- (void)viewControllerStackDidAppear:(id)appear;
- (void)viewControllerDidDeallocWithAnalyticsModule:(id)module;
- (struct { long long x0; id x1; })brandSafetyInfoAtIndex:(long long)index;
- (id)organicDeliveryFlagsAtIndex:(long long)index;
- (id)requestIdAtIndex:(long long)index;
- (id)viewStateItemTypeAtIndex:(long long)index;
- (void)mainFeedCachedItemVenderDidUpdateCacheInventory;
- (id)_filterPostsWithDelayedSkipAd:(id)ad;
- (double)_lastBackgroundTimeInterval;
@end

#endif /* IGMainFeedViewModel_h */