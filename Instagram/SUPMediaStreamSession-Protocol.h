//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SUPMediaStreamSession_Protocol_h
#define SUPMediaStreamSession_Protocol_h
@import Foundation;

@protocol SUPMediaStreamSession <NSObject>

@property (nonatomic, readonly) NSObject<_TtP22SUPEngagementServicing22SUPEngagementServicing_> *engagementService;
@property (nonatomic, readonly) NSObject<SUPMediaStreamVideoConfigProviding> *videoConfigProvider;
@property (nonatomic, readonly) NSObject<SUPMediaStreamAudioConfigProviding> *audioConfigProvider;
@property (nonatomic, readonly) NSObject<FBVideoBroadcastABRListener> *abrListener;
@property (nonatomic, readonly) NSObject<_TtP34SUPMediaStreamSessionStatsTracking34SUPMediaStreamSessionStatsTracking_> *statsTracker;
@property (nonatomic, readonly) BOOL isStreamClientConnected;
@property (nonatomic, readonly) BOOL isStreamClientStreaming;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *deviceType;
@property (nonatomic, readonly) long long appType;

/* instance methods */
- (void)prepareWithTimeout:(double)timeout completion:(id /* block */)completion;
- (void)prepareWithTimeout:(double)timeout completion:(id /* block */)completion;
- (void)startWithCompletion:(id /* block */)completion;
- (void)startWithCompletion:(id /* block */)completion;
- (void)pauseWithTimeout:(double)timeout completion:(id /* block */)completion;
- (void)pauseWithTimeout:(double)timeout completion:(id /* block */)completion;
- (void)performOnQueue:(id /* block */)queue;
- (void)performOnQueue:(id /* block */)queue;
- (void)stopWithCompletion:(id /* block */)completion;
- (void)stopWithCompletion:(id /* block */)completion;
- (void)cancelPendingRestartIfNeeded;
- (void)addEventListener:(id)listener;
- (void)removeEventListener:(id)listener;
- (void)addHealthListener:(id)listener;
- (void)removeHealthListener:(id)listener;
- (void)addMediaListener:(id)listener;
- (void)streamFeatureEntered:(long long)entered;
- (void)streamFeatureExited;
- (void)streamFeatureStarted;
- (void)streamFeatureEnded;
- (void)streamFeatureIdUpdated:(id)updated;
- (void)sendVideoFrame:(struct __CVBuffer *)frame withPresentationTimeUs:(long long)us;
- (void)updateAudioConfigProvider:(id)provider;
@end

#endif /* SUPMediaStreamSession_Protocol_h */
