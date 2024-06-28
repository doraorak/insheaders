//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaGraphUploadJob_h
#define FBMediaGraphUploadJob_h
@import Foundation;

#include "FBMediaNetworkDispatch-Protocol.h"
#include "FBMediaNetworkRequest-Protocol.h"
#include "FBMediaNetworkRequestDelegate-Protocol.h"
#include "FBMediaUploadContentSource.h"
#include "FBMediaUploadJob-Protocol.h"
#include "FBMediaUploadJobDetail.h"
#include "FBMediaUploadListener-Protocol.h"
#include "FBMediaUploadMetricsBuilder.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FBMediaGraphUploadJob : NSObject<FBMediaUploadJob, FBMediaNetworkRequestDelegate> {
  /* instance variables */
  NSString *_externalURL;
  NSObject<FBMediaNetworkDispatch> *_networkDispatcher;
  NSObject<FBMediaNetworkRequest> *_networkerRequest;
  NSObject<OS_dispatch_queue> *_queue;
  FBMediaUploadMetricsBuilder *_metricsBuilder;
}

@property (readonly, copy, nonatomic) NSString *jobId;
@property (readonly, copy, nonatomic) FBMediaUploadJobDetail *detail;
@property (readonly, copy, nonatomic) FBMediaUploadContentSource *contentSource;
@property (weak, nonatomic) NSObject<FBMediaUploadListener> *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithExternalUrl:(id)url detail:(id)detail listener:(id)listener networkDispatcher:(id)dispatcher queue:(id)queue;
- (void)upload;
- (void)cancel;
- (void)networkerRequest:(id)request didSucceed:(id)succeed;
- (void)networkerRequest:(id)request didFail:(id)fail;
- (void)networkerRequestDidCancel:(id)cancel;
- (void)networkerRequest:(id)request didUpdateUploadProgress:(double)progress complete:(BOOL)complete;
@end

#endif /* FBMediaGraphUploadJob_h */