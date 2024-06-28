//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BloksSparkAvatarPreviewController_h
#define BloksSparkAvatarPreviewController_h
@import Foundation;

#include "BKBloksComponentController.h"
#include "AvatarRendererStateListener-Protocol.h"
#include "BloksSparkAvatarPreviewFlipperBridge.h"

@class NSString;
@protocol IRichAvatarErrorPresenter;

@interface BloksSparkAvatarPreviewController : BKBloksComponentController<AvatarRendererStateListener> {
  /* instance variables */
  BloksSparkAvatarPreviewFlipperBridge *_flipperBridge;
  NSObject<IRichAvatarErrorPresenter> *_errorPresenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)avatarLiveEditingDidCompleteAvatarUpdateWithConfig:(id)config error:(id)error;
- (void)avatarRendererDidCompleteLoadingEffect:(id)effect error:(id)error;
- (void)avatarRendererDidReceivePlatformEventFromArEffect:(id)effect type:(id)type data:(id)data;
- (void)liveEditing2DFallbackControllerDidFailInitializationWithError:(id)error;
- (void)liveEditing2DFallbackControllerDidFailSetupForConfig:(id)config withError:(id)error;
- (void)liveEditing2DFallbackControllerDidSetupOnUnsupportedNetworkForConfig:(id)config;
- (void)liveEditing2DFallbackControllerDidFailRenderingForConfig:(id)config error:(id)error;
- (void)liveEditing2DFallbackControllerDidTimeoutForConfig:(id)config;
- (void)liveEditing2DFallbackControllerDidSwitchToUnsupportedNetwork:(id)network;
@end

#endif /* BloksSparkAvatarPreviewController_h */
