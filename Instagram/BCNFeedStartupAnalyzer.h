//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BCNFeedStartupAnalyzer_h
#define BCNFeedStartupAnalyzer_h
@import Foundation;

#include "BCNFeedFirstThreadMediaLoadAnalyzer.h"
#include "IGImageServiceRequestListener-Protocol.h"
#include "IGMOSImageRequestListener-Protocol.h"
#include "IGStreamingDataLoaderListener-Protocol.h"
#include "_TtP16IGStartupContext24IGStartupContextProtocol_-Protocol.h"
#include "_TtP20IGStartupAnalyzerQPL28IGStartupAnalyzerQPLProtocol_-Protocol.h"

@class NSString;

@interface BCNFeedStartupAnalyzer : NSObject<IGStreamingDataLoaderListener, IGImageServiceRequestListener, IGMOSImageRequestListener> {
  /* instance variables */
  NSObject<_TtP16IGStartupContext24IGStartupContextProtocol_> *_context;
  NSObject<_TtP20IGStartupAnalyzerQPL28IGStartupAnalyzerQPLProtocol_> *_qplLogger;
  unsigned long long _feedResponseStatus;
  unsigned long long _feedCacheStatus;
  long long _cachedFeedUIRenderStatus;
  long long _feedUIRenderStatus;
  BCNFeedFirstThreadMediaLoadAnalyzer *_firstThreadFromCacheAnalyzer;
  BCNFeedFirstThreadMediaLoadAnalyzer *_firstThreadFromNetworkAnalyzer;
  BOOL _feedDidAppear;
  BOOL _feedNavigatedAway;
  BOOL _initialShimmerDisplayed;
  BOOL _feedDidScrollDown;
  struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)startupScoped;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)markFeedNavigatedAway:(id)away;
- (void)markInitialDataReceived;
- (void)markFeedViewControllerViewDidAppear;
- (void)willEndOnFeed;
- (void)markFeedLoadFromCacheStart;
- (void)markFeedLoadFromCacheEndWithResult:(long long)result firstFeedItem:(id)item featureSets:(id)sets;
- (void)markAppStartCriticalPathHandlerPrepareOnStartup;
- (void)markFeedRequestSubmitted;
- (void)markFeedResponseParseStart;
- (void)markFeedResponseParseEndedWithFirstThread:(id)thread;
- (void)markFeedRequestEndedWithSuccess:(BOOL)success error:(id)error;
- (void)markOffscreenFeedTimelineRequested;
- (void)markBackgroundPrefetchedFeedDataReadyForRendering:(id)rendering;
- (void)markBackgroundPrefetchedFeedDataInvalid:(id)invalid;
- (void)markFeedMainVCViewDidLoadStart;
- (void)markFeedMainVCViewDidLoadEnd;
- (void)markFeedUIRenderStart;
- (void)markFeedUIRenderEnd:(BOOL)end withFeedSize:(id)size;
- (void)_markFirstThreadFromNetworkMediaLoadStartIfNeeded:(id)needed;
- (void)_markFirstThreadMediaLoadStart:(id)start fromCache:(BOOL)cache;
- (void)markFirstMediaLoadStartForURL:(id)url;
- (void)markFirstMediaVideoLoadStart:(id)start;
- (void)_markFirstMediaLoadEndForURL:(id)url success:(BOOL)success;
- (void)didLoadImage:(id)image;
- (void)didShowLoadedImage:(id)image;
- (void)didFailToLoadImage:(id)image;
- (void)didBeginPlayingVideo:(id)video;
- (void)didFailPlayingVideo:(id)video;
- (void)markFeedShimmerStart;
- (void)markFeedShimmerEnd;
- (void)markFeedDidScrollDown;
- (void)markFeedRequestFirstByteFlushed;
- (void)markFeedRequestLastByteAcked;
- (void)streamingDataLoaderDidStartWithRequest:(id)request;
- (void)imageLoadDidStartWithURL:(id)url;
- (void)mosImageLoadDidStartWithURL:(id)url;
@end

#endif /* BCNFeedStartupAnalyzer_h */
