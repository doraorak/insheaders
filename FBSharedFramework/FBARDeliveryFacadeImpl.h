//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARDeliveryFacadeImpl_h
#define FBARDeliveryFacadeImpl_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol FBAREffectsManager, {shared_ptr<arfx::delivery::IAssetsManager>="__ptr_"^{IAssetsManager}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<arfx::delivery::IModelManager>="__ptr_"^{IModelManager}"__cntrl_"^{__shared_weak_count}};

@interface FBARDeliveryFacadeImpl : NSObject<NSObject> {
  /* instance variables */
  NSObject<FBAREffectsManager> *_effectsManager;
  struct shared_ptr<arfx::delivery::IAssetsManager> { struct IAssetsManager *__ptr_; struct __shared_weak_count *__cntrl_; } _assetsManager;
  struct shared_ptr<arfx::delivery::IModelManager> { struct IModelManager *__ptr_; struct __shared_weak_count *__cntrl_; } _modelManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEffectsManager:(id)manager assetsManager:(struct shared_ptr<arfx::delivery::IAssetsManager> { struct IAssetsManager * x0; struct __shared_weak_count * x1; })manager modelManager:(struct shared_ptr<arfx::delivery::IModelManager> { struct IModelManager * x0; struct __shared_weak_count * x1; })manager;
- (void)dealloc;
- (id)fetchEffectWithDependencies:(const void *)dependencies loggingInfo:(id)info priority:(int)priority callbackQueue:(id)queue progressCallback:(id /* block */)callback completionCallback:(id /* block */)callback;
- (id)fetchEffectWithDependenciesBatch:(const void *)batch priority:(int)priority callbackQueue:(id)queue completionCallback:(id /* block */)callback;
- (void)isEffectDownloaded:(const void *)downloaded loggingInfo:(id)info callbackQueue:(id)queue completionCallback:(id /* block */)callback;
- (id)fetchLatestModelsForCapabilities:(const void *)capabilities downloadPriority:(int)priority loggingInfo:(id)info callbackQueue:(id)queue completionCallback:(id /* block */)callback;
- (id)fetchAsyncAssetByFBID:(const void *)fbid effectID:(const void *)id downloadPriority:(int)priority loggingInfo:(id)info callbacksQueue:(id)queue progressCallback:(id /* block */)callback completionCallback:(id /* block */)callback;
- (id)fetchAsyncAssetIfAvailable:(const void *)available effectID:(const void *)id downloadPriority:(int)priority loggingInfo:(id)info callbackQueue:(id)queue progressCallback:(id /* block */)callback completionCallback:(id /* block */)callback;
- (id)fetchAsyncAssetMetadata:(const void *)metadata effectID:(const void *)id callbackQueue:(id)queue completionCallback:(id /* block */)callback;
- (id)fetchScriptingPackageWithPriority:(int)priority loggingInfo:(id)info callbackQueue:(id)queue completionCallback:(id /* block */)callback;
- (id)fetch3DObject:(const struct AR3DObjectModel *)dobject loggingInfo:(id)info priority:(int)priority callbackQueue:(id)queue progressCallback:(id /* block */)callback completionCallback:(id /* block */)callback;
- (void)abortAllPendingLoggingEvents;
- (void)removeAllLocalAssetsFromStoragesWithCompletion:(id /* block */)completion;
- (void)removeLocalAssetsFromStorageForAssetType:(int)type completion:(id /* block */)completion;
- (void)removeCachedEffect:(const void *)effect completion:(id /* block */)completion;
- (void)getModelCacheStats:(const void *)stats completion:(id /* block */)completion;
- (id)DEPRECATED_fetchAssetsForRemoteModels:(id)models downloadPriority:(int)priority loggingInfo:(id)info callbacksQueue:(id)queue progress:(id /* block */)progress completion:(id /* block */)completion;
- (id)DEPRECATED_AND_UNRELIABLE_localAssetStoragePathForModel:(id)model loggingInfo:(id)info;
- (BOOL)DEPRECATED_AND_UNRELIABLE_areAssetsStoredForRemoteModels:(id)models loggingInfo:(id)info;
@end

#endif /* FBARDeliveryFacadeImpl_h */
