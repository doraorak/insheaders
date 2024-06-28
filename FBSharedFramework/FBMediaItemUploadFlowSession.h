//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaItemUploadFlowSession_h
#define FBMediaItemUploadFlowSession_h
@import Foundation;

#include "FBMediaItemUploadFlowSessionProtocol-Protocol.h"
#include "FBMediaItemUploadLogging-Protocol.h"
#include "FBMediaProcessing-Protocol.h"
#include "FBMediaProcessingDelegate-Protocol.h"
#include "FBMediaUploadFlowRetryStrategy.h"
#include "FBMediaUploadMessageCallbackDelegate-Protocol.h"
#include "FBMediaUploadSlowNetworkDetector.h"
#include "FBMediaUploading-Protocol.h"
#include "FBMediaUploadingDelegate-Protocol.h"
#include "FBVideoUploadSettings.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;
@protocol FBMediaItemUploadFlowSessionDelegate, FBMediaQualityMeasuring, FBMediaUploadSettingsFetching;

@interface FBMediaItemUploadFlowSession : NSObject<FBMediaUploadingDelegate, FBMediaProcessingDelegate, FBMediaUploadMessageCallbackDelegate, FBMediaItemUploadFlowSessionProtocol> {
  /* instance variables */
  NSObject<FBMediaItemUploadFlowSessionDelegate> *_delegate;
  unsigned long long _state;
  NSObject<FBMediaUploading> *_mediaUploader;
  FBVideoUploadSettings *_settings;
  NSObject<FBMediaProcessing> *_mediaProcessor;
  FBMediaUploadFlowRetryStrategy *_retryStrategy;
  NSString *_videoFBID;
  NSString *_uploadSessionID;
  NSDictionary *_response;
  NSObject<FBMediaUploadSettingsFetching> *_mediaUploadSettingsFetcher;
  unsigned long long _preferredQuality;
  double _transcodeFlowProgress;
  double _uploadFlowProgress;
  NSObject<FBMediaItemUploadLogging> *_logger;
  BOOL _isOptimisticUpload;
  NSObject<FBMediaQualityMeasuring> *_mediaQualityMeasurement;
  struct FBMediaItemUploadFlowSessionOptions { BOOL resumeUploadFromCacheEnabled; BOOL fastStartRequestEnabled; BOOL cacheCleanupEnabled; long long uploadAutoRetryMode; BOOL enableSlowNetworkDetector; BOOL transcodingOnly; long long slowNetworkDetectorThreshold; BOOL disableBackgroundTask; } _options;
  unsigned long long _backgroundTaskIdentifier;
  NSMutableArray *_chunkDetails;
  NSArray *_timeStamps;
  FBMediaUploadSlowNetworkDetector *_slowNetworkDetector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *assetID;
@property (readonly, nonatomic) double uploadSuccessTime;

/* instance methods */
- (id)initWithAssetID:(id)id mediaProcessor:(id)processor mediaUploader:(id)uploader mediaUploadSettingsFetcher:(id)fetcher retryStrategy:(id)strategy preferredQuality:(unsigned long long)quality isOptimisticUpload:(BOOL)upload delegate:(id)delegate logger:(id)logger mediaQualityMeasurement:(id)measurement options:(struct FBMediaItemUploadFlowSessionOptions { BOOL x0; BOOL x1; BOOL x2; long long x3; BOOL x4; BOOL x5; long long x6; BOOL x7; })options;
- (id)initWithAssetID:(id)id mediaProcessor:(id)processor mediaUploader:(id)uploader mediaUploadSettingsFetcher:(id)fetcher preferredQuality:(unsigned long long)quality isOptimisticUpload:(BOOL)upload delegate:(id)delegate logger:(id)logger mediaQualityMeasurement:(id)measurement options:(struct FBMediaItemUploadFlowSessionOptions { BOOL x0; BOOL x1; BOOL x2; long long x3; BOOL x4; BOOL x5; long long x6; BOOL x7; })options;
- (void)dealloc;
- (void)_userWillLogout:(id)logout;
- (void)start;
- (void)cancelWithCancellationReason:(long long)reason;
- (unsigned long long)state;
- (unsigned long long)uploadQuality;
- (float)progress;
- (id)mediaFBID;
- (id)uploadSessionID;
- (id)cloneSessionForRetry;
- (BOOL)shouldRestartUploadFlowForAssetID:(id)id mediaProcessor:(id)processor mediaUploader:(id)uploader settingsFetcher:(id)fetcher preferredQuality:(unsigned long long)quality;
- (void)updateToIsPublishingUpload;
- (void)_startUpload;
- (void)_endBackgroundTask;
- (void)mediaUploaderDidStart:(id)start fbid:(id)fbid uploadSessionID:(id)id;
- (void)mediaUploaderDidFinish:(id)finish fbid:(id)fbid uploadSessionID:(id)id response:(id)response;
- (void)mediaUploaderDidCancel:(id)cancel;
- (void)mediaUploader:(id)uploader didFailWithError:(id)error;
- (void)mediaUploader:(id)uploader didUpdateProgressTo:(double)to;
- (void)didStartTranscodeFlow:(id)flow;
- (void)didSuspendTranscodeFlow:(id)flow error:(id)error;
- (void)didMakeUploadableSegment:(id)segment forTranscodeFlow:(id)flow streamAnnouncer:(id)announcer;
- (void)didFinishTranscodeFlowForAllSegments:(id)segments originalAsset:(id)asset timeStamps:(id)stamps trimInfo:(id)info softTranscodingException:(id)exception;
- (void)didCancelTranscodeFlow:(id)flow;
- (void)didFailTranscodeFlow:(id)flow withError:(id)error restartUploadInRaw:(BOOL)raw;
- (void)didUpdateTranscodeFlow:(id)flow progress:(double)progress;
- (void)didReceiveTranscodeFlow:(id)flow imageSample:(struct opaqueCMSampleBuffer *)sample;
- (void)transcodeFlow:(id)flow didCreateTranscoder:(id)transcoder;
- (void)didReceiveMessageCallback:(unsigned long long)callback extra:(id)extra;
- (void)didCalculateUploadMosCs:(double)cs;
@end

#endif /* FBMediaItemUploadFlowSession_h */