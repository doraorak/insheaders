//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShowreelNativeIntegrationHandler_h
#define IGShowreelNativeIntegrationHandler_h
@import Foundation;

#include "SNAnimationInteractionActioning-Protocol.h"
#include "SRController-Protocol.h"
#include "SRPlaybackStateListener-Protocol.h"
#include "SRRenderingFallbackListener-Protocol.h"
#include "SRTouchEventHandlingListener-Protocol.h"

@class IGUserSession, NSMutableDictionary, NSString;
@protocol IGShowreelNativeIntegrationHandlerDelegate, IGShowreelNativeInteractivityHandlerDelegate, IGShowreelNativeMultiDocumentHandlerDelegate, IGShowreelNativePlayerControllerProvider;

@interface IGShowreelNativeIntegrationHandler : NSObject<SRPlaybackStateListener, SRTouchEventHandlingListener, SRRenderingFallbackListener> {
  /* instance variables */
  NSObject<IGShowreelNativeIntegrationHandlerDelegate> *_delegate;
  IGUserSession *_userSession;
  unsigned long long _placement;
  NSObject<IGShowreelNativePlayerControllerProvider> *_playerControllerProvider;
  NSMutableDictionary *_cachedSNPlayerControllers;
  NSMutableDictionary *_cachedSNPlayerControllerErrors;
  NSObject<SRController> *_multiDocumentSNPlayerController;
  NSObject<SNAnimationInteractionActioning> *_multiDocumentSNAnimationInteractionAction;
  NSString *_multiDocumentName;
  struct CGPoint { double x; double y; } _touchedPoint;
  NSString *_valueForTouchedPoint;
  BOOL _usePlayerControllerStore;
  NSObject<IGShowreelNativeMultiDocumentHandlerDelegate> *_multiDocumentDelegate;
  NSObject<IGShowreelNativeInteractivityHandlerDelegate> *_interactivityDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate placement:(unsigned long long)placement;
- (id)initWithUserSession:(id)session delegate:(id)delegate placement:(unsigned long long)placement usePlayerControllerStore:(BOOL)store;
- (void)play;
- (void)pauseAnimation;
- (void)stopAnimation;
- (id)playerView;
- (void)prepareForPlayback;
- (void)reload;
- (void)touchAtPoint:(struct CGPoint { double x0; double x1; })point inView:(id)view;
- (double)playbackDuration;
- (void)playerControllerStartLoadAsset:(id)asset;
- (void)playerControllerIsReadyToPlayback:(id)playback;
- (void)playerController:(id)controller didFailWithError:(id)error;
- (void)playerControllerDidLoadAsset:(id)asset;
- (void)playerControllerStartPrepareRendering:(id)rendering;
- (void)playerController:(id)controller didFailToPrepareRenderingWithError:(id)error;
- (void)playerControllerDidStartPlayback:(id)playback;
- (void)playerControllerDidPausePlayback:(id)playback;
- (void)playerController:(id)controller transitionFromState:(unsigned long long)state toState:(unsigned long long)state;
- (void)handleNonInteractionTouchEventWithContext:(id)context;
- (void)handleLaunchNativeViewWithType:(id)type value:(id)value action:(id)action;
- (void)handleLaunchDocumentNamed:(id)named inPlayer:(id)player action:(id)action;
- (void)handleCloseCurrentDocumentWithAction:(id)action;
- (void)playerControllerCanFallbackRendering:(id)rendering;
- (void)playerController:(id)controller didTryCustomRenderFallback:(BOOL *)fallback;
@end

#endif /* IGShowreelNativeIntegrationHandler_h */