//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMLARDeliveryDownloader_h
#define IGMLARDeliveryDownloader_h
@import Foundation;

#include "IGAREffectDownloaderManager.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "MetaAIModelDownloader-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface IGMLARDeliveryDownloader : NSObject<MetaAIModelDownloader> {
  /* instance variables */
  IGAREffectDownloaderManager *_downloaderManager;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  NSObject<OS_dispatch_queue> *_downloadCallbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)initWithUserScopedObjects:(id)objects;
- (id)initWithDownloaderManager:(id)manager launcherSet:(id)set;
- (void)fetchModels:(id)models completion:(id /* block */)completion;
- (id)modelPathForType:(long long)type;
- (long long)modelVersionForType:(long long)type;
- (id)getInitNetModelFileURLForType:(long long)type;
- (id)predictNetModelFileURLForType:(long long)type;
- (void)fetchAIModels:(id)aimodels completion:(id /* block */)completion;
- (void)isModelInCache:(id)cache completion:(id /* block */)completion;
@end

#endif /* IGMLARDeliveryDownloader_h */
