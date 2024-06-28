//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoSourceInstamadilloFlowSessionBuilder_h
#define IGVideoSourceInstamadilloFlowSessionBuilder_h
@import Foundation;

#include "FBMediaUploadFlowRetryStrategy.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGBackgroundRenderIGLContextProvider-Protocol.h"
#include "IGDInstamadilloMediaUploading-Protocol.h"
#include "IGMediaQualityMeter.h"
#include "IGPostSessionLogger.h"
#include "IGUploadVideoStore.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGVideoRenderQueue.h"
#include "IGVideoUploadConfig.h"
#include "NSObject-Protocol.h"
#include "_TtC19IGUploadMediaSource30IGUploadARFilterDependencyList.h"

@class NSString;
@protocol IGPostAnalyticsProvider, OS_dispatch_queue;

@interface IGVideoSourceInstamadilloFlowSessionBuilder : NSObject<NSObject> {
  /* instance variables */
  NSString *_userPk;
  IGVideoRenderQueue *_videoRenderQueue;
  IGMediaQualityMeter *_mediaQualityMeter;
  IGPostSessionLogger *_postSessionLogger;
  _TtC19IGUploadMediaSource30IGUploadARFilterDependencyList *_arDependencies;
  IGVideoUploadConfig *_videoUploadConfig;
  IGUploadVideoStore *_store;
  NSObject<OS_dispatch_queue> *_queue;
  FBMediaUploadFlowRetryStrategy *_retryStrategy;
  NSObject<IGPostAnalyticsProvider> *_analyticsProvider;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  NSObject<IGBackgroundRenderIGLContextProvider> *_backgroundRenderIglContextProvider;
  NSObject<IGDInstamadilloMediaUploading> *_instamadilloMediaUploading;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserPk:(id)pk videoRenderQueue:(id)queue mediaQualityMeter:(id)meter postSessionLogger:(id)logger arDependencies:(id)dependencies videoUploadConfig:(id)config store:(id)store queue:(id)queue retryStrategy:(id)strategy analyticsProvider:(id)provider featureSets:(id)sets analyticsLogger:(id)logger backgroundRenderIglContextProvider:(id)provider instamadilloMediaUploading:(id)uploading;
- (id)buildVideoSourceFlowSessionWithVideoSource:(id)source uploadMosProvider:(id /* block */)provider delegate:(id)delegate;
@end

#endif /* IGVideoSourceInstamadilloFlowSessionBuilder_h */
