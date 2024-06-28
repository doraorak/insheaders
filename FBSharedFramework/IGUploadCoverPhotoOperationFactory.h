//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUploadCoverPhotoOperationFactory_h
#define IGUploadCoverPhotoOperationFactory_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGBackgroundRenderIGLContextProvider-Protocol.h"
#include "IGDInstamadilloMediaUploading-Protocol.h"
#include "IGFeedDraftManager.h"
#include "IGImageUploadSource.h"
#include "IGNetworking-Protocol.h"
#include "IGUploadOffProcessNetworkRequestUserScopedObjects.h"
#include "IGUploadTaskListener-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSDictionary, NSString;
@protocol IGPostAnalyticsProvider, OS_dispatch_queue;

@interface IGUploadCoverPhotoOperationFactory : NSObject {
  /* instance variables */
  NSString *_taskId;
  NSString *_uploadId;
  NSString *_workingPath;
  NSString *_waterfallId;
  NSDictionary *_uploadParams;
  NSObject<IGNetworking> *_networker;
  NSObject<OS_dispatch_queue> *_executingQueue;
  NSObject<IGPostAnalyticsProvider> *_analyticsProvider;
  NSObject<IGUploadTaskListener> *_uploadTaskListener;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  NSString *_userPk;
  NSObject<IGBackgroundRenderIGLContextProvider> *_iglContextProvider;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  IGFeedDraftManager *_feedDraftManager;
  IGUploadOffProcessNetworkRequestUserScopedObjects *_offProcessNetworkRequestDeps;
  NSObject<IGDInstamadilloMediaUploading> *_instamadilloMediaUploadProvider;
  IGImageUploadSource *_coverImageSource;
}

/* instance methods */
- (id)initWithTaskId:(id)id uploadId:(id)id waterfallId:(id)id uploadParams:(id)params networker:(id)networker executingQueue:(id)queue userPk:(id)pk iglContextProvider:(id)provider offProcessNetworkRequestDeps:(id)deps feedDraftManager:(id)manager analyticsLogger:(id)logger analyticsProvider:(id)provider uploadTaskListener:(id)listener featureSets:(id)sets workingPath:(id)path instamadilloMediaUploadProvider:(id)provider;
@end

#endif /* IGUploadCoverPhotoOperationFactory_h */