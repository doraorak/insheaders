//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ETCoreMLModelManager_h
#define ETCoreMLModelManager_h
@import Foundation;

#include "ETCoreMLAssetManager.h"

@class NSFileManager, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ETCoreMLModelManager : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSMutableDictionary *handleToExecutorMap;
@property (readonly, nonatomic) NSMapTable *modelIdentifierToLoadingQueueMap;
@property (readonly, nonatomic) NSMutableDictionary *modelIdentifierToPrewarmedAssetMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *prewarmQueue;
@property (readonly, nonatomic) ETCoreMLAssetManager *assetManager;

/* instance methods */
- (id)initWithAssetManager:(id)manager;
- (id)executorWithHandle:(void *)handle;
- (id)modelWithHandle:(void *)handle;
- (id)assetWithIdentifier:(id)identifier;
- (id)compiledModelURLWithIdentifier:(id)identifier inMemoryFS:(const void *)fs assetManager:(id)manager error:(id *)error;
- (id)modelExecutorWithMetadata:(const void *)metadata inMemoryFS:(const void *)fs configuration:(id)configuration error:(id *)error;
- (id)_modelExecutorWithAOTData:(id)aotdata configuration:(id)configuration error:(id *)error;
- (id)queueForLoadingModelWithIdentifier:(id)identifier;
- (void *)loadModelFromAOTData:(id)aotdata configuration:(id)configuration error:(id *)error;
- (BOOL)prewarmModelWithHandle:(void *)handle error:(id *)error;
- (void)prewarmRecentlyUsedAssetsWithMaxCount:(unsigned long long)count;
- (void)addPrewarmedAsset:(id)asset;
- (id)executeModelUsingExecutor:(id)executor inputs:(id)inputs outputBackings:(id)backings loggingOptions:(const struct ModelLoggingOptions *)options eventLogger:(const struct ModelEventLogger *)logger error:(id *)error;
- (BOOL)executeModelWithHandle:(void *)handle args:(id)args loggingOptions:(const struct ModelLoggingOptions *)options eventLogger:(const struct ModelEventLogger *)logger error:(id *)error;
- (BOOL)executeModelWithHandle:(void *)handle argsVec:(const void *)vec loggingOptions:(const struct ModelLoggingOptions *)options eventLogger:(const struct ModelEventLogger *)logger error:(id *)error;
- (BOOL)unloadModelWithHandle:(void *)handle;
@end

#endif /* ETCoreMLModelManager_h */
