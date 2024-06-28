//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraLogger_CameraUITool_h
#define IGCameraLogger_CameraUITool_h
@import Foundation;

@interface IGCameraLogger (CameraUITool)
/* instance methods */
- (void)logCameraUIToolClick:(long long)click surface:(long long)surface module:(id)module extraConfiguration:(id /* block */)configuration;
- (void)_logCameraUIToolClick:(long long)click surface:(long long)surface module:(id)module mediaType:(long long)type stickerId:(id)id extraConfiguration:(id /* block */)configuration;
- (void)_logCameraUIToolImpression:(long long)impression surface:(long long)surface module:(id)module extraConfiguration:(id /* block */)configuration;
@end

#endif /* IGCameraLogger_CameraUITool_h */
