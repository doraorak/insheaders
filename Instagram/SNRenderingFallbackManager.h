//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNRenderingFallbackManager_h
#define SNRenderingFallbackManager_h
@import Foundation;

#include "SRAnimationModelProvidingStateListener-Protocol.h"
#include "SRController-Protocol.h"
#include "SRRenderingFallbackListenerAnnouncer.h"

@class BOOL *, NSString;

@interface SNRenderingFallbackManager : NSObject<SRAnimationModelProvidingStateListener> {
  /* instance variables */
  NSObject<SRController> *_playerController;
  BOOL _shouldFallback;
  BOOL _isLegacyFallbackEnabled;
  BOOL _isNewCustomFallbackEnabled;
  BOOL * _canRecovery;
}

@property (readonly, nonatomic) SRRenderingFallbackListenerAnnouncer *renderingFallbackAnnouncer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPlayerController:(id)controller isLegacyFallbackEnabled:(BOOL)enabled isNewCustomFallbackEnabled:(BOOL)enabled;
- (void)fallbackRenderingIfNeeded;
- (void)modelProvider:(id)provider detectError:(id)error;
- (void)modelProvider:(id)provider didTryCustomRecovery:(BOOL *)recovery error:(id)error;
- (BOOL)shouldFallback;
- (void)setShouldFallback:(BOOL)fallback;
- (BOOL *)canRecovery;
- (void)setCanRecovery:(BOOL *)recovery;
@end

#endif /* SNRenderingFallbackManager_h */