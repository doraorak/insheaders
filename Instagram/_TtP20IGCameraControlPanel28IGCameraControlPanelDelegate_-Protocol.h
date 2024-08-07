//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP20IGCameraControlPanel28IGCameraControlPanelDelegate__Protocol_h
#define _TtP20IGCameraControlPanel28IGCameraControlPanelDelegate__Protocol_h
@import Foundation;

@protocol _TtP20IGCameraControlPanel28IGCameraControlPanelDelegate_ 

@property (nonatomic, readonly) IGAREffectApplicator *arEffectApplicator;
@property (nonatomic, readonly) BOOL isRecording;
@property (nonatomic, readonly) BOOL dualEnabled;

/* instance methods */
- (void)cameraControlPanelWantsDisablingOfAREffects;
- (void)cameraControlPanelWantsDisablingOfDual;
- (void)cameraControlPanelDidModifyHDRSettingWithIsOn:(BOOL)on;
@end

#endif /* _TtP20IGCameraControlPanel28IGCameraControlPanelDelegate__Protocol_h */
