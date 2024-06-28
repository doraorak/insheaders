//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AELiveEditing2DFallbackController_h
#define AELiveEditing2DFallbackController_h
@import Foundation;

#include "AEEmbodimentBloksProvidedConfig.h"
#include "AEEmbodimentNetworkTypeProvider.h"
#include "AvatarLiveEditing2DFallbackListenerAnnouncer.h"
#include "AvatarRendererStateListener-Protocol.h"
#include "RichAvatarConfig.h"

@class FBTimer, NSString;
@protocol AEEmbodimentLiveEditing2DFallbackConfig;

@interface AELiveEditing2DFallbackController : NSObject<AvatarRendererStateListener> {
  /* instance variables */
  NSObject<AEEmbodimentLiveEditing2DFallbackConfig> *_mobileConfig;
  AEEmbodimentNetworkTypeProvider *_networkTypeProvider;
  FBTimer *_timer;
  RichAvatarConfig *_currentConfig;
  AEEmbodimentBloksProvidedConfig *_currentBloksProvidedConfig;
  BOOL _didInitialCheck;
  BOOL _initialCheckFailed;
}

@property (readonly, nonatomic) AvatarLiveEditing2DFallbackListenerAnnouncer *announcer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfig:(id)config;
- (id)initWithConfig:(id)config networkTypeProvider:(id)provider;
- (void)avatarLiveEditingDidCompleteAvatarUpdateWithConfig:(id)config error:(id)error;
- (void)avatarLiveEditingDidCompleteGeneratingGLBWithConfig:(id)config error:(id)error fromCache:(BOOL)cache;
- (void)avatarLiveEditingDidCompleteRenderingModelUpdateWithConfig:(id)config error:(id)error;
- (void)avatarRendererDidCompleteLoadingGLBForEffect:(id)effect requestID:(id)id error:(id)error;
- (void)avatarRendererDidCompleteUpdatingRamps:(id)ramps error:(id)error;
- (void)avatarRendererDidCompleteLoadingEffect:(id)effect error:(id)error;
- (void)networkTypeListenerDidUpdateNetworkType:(unsigned long long)type;
@end

#endif /* AELiveEditing2DFallbackController_h */