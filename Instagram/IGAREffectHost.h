//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAREffectHost_h
#define IGAREffectHost_h
@import Foundation;

#include "IGAREffectHostPlatformEventDelegate-Protocol.h"
#include "IGCameraEffectCollectionDataSourceListener-Protocol.h"

@class FBARInMemoryPersistenceDelegateProvider, FBARPlatformEventsDataProviderConfiguration, FBARPlatformTexturesServiceConfiguration, IGARAudioEffectService, IGAREffectLifecycleHandler, IGARPlatformTexturesServiceDataProvider, IGARServicesFailureHandler, IGAsyncTask, IGCameraEffectsByIDProvider, IGUserSession, NSString;
@protocol IGCameraEffectLifecycleDelegate;

@interface IGAREffectHost : NSObject<IGCameraEffectCollectionDataSourceListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_effectID;
  NSString *_productName;
  NSString *_requestSource;
  IGAsyncTask *_filter;
  IGAsyncTask *_effectTask;
  IGCameraEffectsByIDProvider *_targetDataProvider;
  FBARPlatformTexturesServiceConfiguration *_platformTexturesConfig;
  IGARPlatformTexturesServiceDataProvider *_platformTexturesDataProvider;
  IGAREffectLifecycleHandler *_effectLifecycleHandler;
  IGARAudioEffectService *_arAudioEffectService;
  FBARPlatformEventsDataProviderConfiguration *_platformEventsConfig;
  FBARInMemoryPersistenceDelegateProvider *_inMemoryPersistenceDelegateProvider;
  IGARServicesFailureHandler *_servicesFailureHandler;
  NSObject<IGCameraEffectLifecycleDelegate> *_lifecycleDelegate;
  NSObject<IGAREffectHostPlatformEventDelegate> *_platformEventDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEffectID:(id)id productName:(id)name requestSource:(id)source userSession:(id)session lifecycleDelegate:(id)delegate platformEventDelegate:(id)delegate;
- (id)filter;
- (void)cameraEffectCollectionDataSource:(id)source didUpdateUsingPage:(id)page resultSource:(long long)source;
- (void)cameraEffectCollectionDataSource:(id)source didFailWithError:(id)error resultSource:(long long)source;
- (void)sendDataToCurrentAREffect:(id)areffect;
- (void)platformEventsServiceForEffectDescriptor:(id)descriptor didReceiveEventWithData:(id)data;
@end

#endif /* IGAREffectHost_h */