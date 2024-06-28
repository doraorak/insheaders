//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaStreamingUploadJob_h
#define FBMediaStreamingUploadJob_h
@import Foundation;

#include "FBCancelable-Protocol.h"
#include "FBMediaFileStreamListenerAnnouncerWrapper.h"
#include "FBMediaStreamingUploadJobByteSender.h"
#include "FBMediaStreamingUploadJobStatusFetcher.h"
#include "FBMediaStreamingUploadMetricsBuilder.h"
#include "FBMediaUploadContentSource.h"
#include "FBMediaUploadJob-Protocol.h"
#include "FBMediaUploadJobDetail.h"
#include "FBMediaUploadListener-Protocol.h"
#include "FBMediaUploadProtocolProvider-Protocol.h"

@class NSString, NSURL;
@protocol FBMediaOffProcessNetworkRequestProvider, FBMediaUploadEventListener, OS_dispatch_queue;

@interface FBMediaStreamingUploadJob : NSObject<FBMediaUploadJob> {
  /* instance variables */
  FBMediaStreamingUploadJobStatusFetcher *_statusFetcher;
  FBMediaStreamingUploadJobByteSender *_byteSender;
  FBMediaFileStreamListenerAnnouncerWrapper *_streamAnnouncer;
  NSObject<FBMediaUploadProtocolProvider> *_protocolProvider;
  NSObject<FBMediaOffProcessNetworkRequestProvider> *_offProcessNetworkRequestProvider;
  NSObject<FBMediaUploadEventListener> *_eventListener;
  unsigned long long _byteOffset;
  NSString *_dataCenter;
  BOOL _isDuplicate;
  NSURL *_url;
  NSObject<FBCancelable> *_cancelableRequest;
  BOOL _isJobAlreadyCancelled;
  unsigned long long _getFailureCount;
  unsigned long long _postFailureCount;
  unsigned long long _networkCancelCount;
  unsigned long long _currentGetBackoffTimeMs;
  unsigned long long _fetchStatusBackoffTimeMsConst;
  unsigned long long _fetchStatusBackoffMaxTimeMsConst;
  unsigned long long _fetchStatusNumImmediateRetryBeforeBackoff;
  BOOL _fetchStatusFailureLogOnce;
  NSObject<OS_dispatch_queue> *_queue;
  unsigned long long _lastBytesTransmitted;
  double _lastUpdatedTime;
  BOOL _enableBandwidthEstimator;
  FBMediaStreamingUploadMetricsBuilder *_metricsBuilder;
  double _startTime;
  unsigned long long _dataLength;
}

@property (readonly, copy, nonatomic) NSString *jobId;
@property (readonly, copy, nonatomic) FBMediaUploadJobDetail *detail;
@property (readonly, copy, nonatomic) FBMediaUploadContentSource *contentSource;
@property (weak, nonatomic) NSObject<FBMediaUploadListener> *listener;

/* instance methods */
- (id)initWithJobDetail:(id)detail listener:(id)listener statusFetcher:(id)fetcher eventListener:(id)listener byteSender:(id)sender streamAnnouncer:(id)announcer offProcessNetworkRequestProvider:(id)provider enableBandwidthEstimator:(BOOL)estimator queue:(id)queue;
- (void)upload;
- (void)_startUpload;
- (void)_fetchStatus;
- (void)cancel;
- (void)_announceFetchStatusFailure:(unsigned long long)failure underlyingError:(id)error;
- (void)_handleSuccessResponse:(id)response;
- (void)_didFail:(id)fail;
@end

#endif /* FBMediaStreamingUploadJob_h */