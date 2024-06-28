//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallSceneCompFunnelLogger_h
#define IGVideoCallSceneCompFunnelLogger_h
@import Foundation;

@interface IGVideoCallSceneCompFunnelLogger : NSObject {
  /* instance variables */
  unsigned long long _flowInstanceId;
  long long _currentEffectId;
  BOOL _effectRenderStarted;
}

/* instance methods */
- (void)logSceneCompEffectSelected:(long long)selected;
- (void)logSceneCompEffectReceived:(long long)received;
- (void)logSceneCompEffectSentToPeers:(long long)peers;
- (void)logSceneCompEffectDownloadAndLoadStarted:(long long)started;
- (void)logSceneCompEffectFailedToDownloadAndLoad:(long long)load;
- (void)logSceneCompEffectReadySentToRsys:(long long)rsys;
- (void)logSceneCompActiveEffectIdUpdateToNonZero:(long long)zero;
- (void)logSceneCompEffectReadyToRender:(long long)render;
- (void)logSceneCompEffectRenderRequested:(long long)requested;
- (void)logSceneCompEffectFailedToRender:(long long)render;
- (void)logSceneCompEffectRenderingStarted:(long long)started;
- (void)logSceneCompEffectRemoved:(long long)removed withRemoveReason:(id)reason isUserInitiated:(BOOL)initiated;
- (void)_endPreviousFlowIfRunning;
- (void)_startFlowWithSelfInitiator:(BOOL)initiator;
- (void)_markPointForEffectId:(long long)id name:(const char *)name;
- (void)_failFlowForEffectId:(long long)id errorName:(const char *)name;
@end

#endif /* IGVideoCallSceneCompFunnelLogger_h */