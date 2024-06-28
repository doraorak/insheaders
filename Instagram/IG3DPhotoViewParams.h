//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IG3DPhotoViewParams_h
#define IG3DPhotoViewParams_h
@import Foundation;

@protocol IG3DPhotoViewParamsExtraCameraSettingProvider, struct Cuboid { struct vec<3, float, glm::aligned_highp> { union { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct type { float x0[4] } x3; } x0; } x0; struct vec<3, float, glm::aligned_highp> { union { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct type { float x0[4] } x3; } x0; } x1; }, {Cuboid="vmin"{vec<3, float, glm::aligned_highp>=""(?=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"data"{type="data"[4f]})}"vmax"{vec<3, float, glm::aligned_highp>=""(?=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"data"{type="data"[4f]})}}, {TurntableCameraState="position"{vec<3, float, glm::packed_highp>=""(?=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"data"{type="data"[3f]})}"target"{vec<3, float, glm::packed_highp>=""(?=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"data"{type="data"[3f]})}"fov"f"near"f"far"f}, {shared_ptr<arfx::engine::renderer::ICameraControl>="__ptr_"^{ICameraControl}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<arfx::engine::renderer::Photo3DCameraControl>="__ptr_"^{Photo3DCameraControl}"__cntrl_"^{__shared_weak_count}};

@interface IG3DPhotoViewParams : NSObject {
  /* instance variables */
  BOOL _reduceMotion;
  BOOL _useTargetScrollPosition;
  float _latestScrollPosition;
  NSObject<IG3DPhotoViewParamsExtraCameraSettingProvider> *_extraCameraSettingProvider;
  double _latestTimestamp;
  struct shared_ptr<arfx::engine::renderer::ICameraControl> { struct ICameraControl *__ptr_; struct __shared_weak_count *__cntrl_; } _cameraControl;
  struct shared_ptr<arfx::engine::renderer::Photo3DCameraControl> { struct Photo3DCameraControl *__ptr_; struct __shared_weak_count *__cntrl_; } _photoCameraControl;
  struct TurntableCameraState { struct vec<3, float, glm::packed_highp> { union { struct { float x; float y; float z; } x0; struct { float r; float g; float b; } x1; struct { float s; float t; float p; } x2; struct type { float x[3] data; } data; } x0; } position; struct vec<3, float, glm::packed_highp> { union { struct { float x; float y; float z; } x0; struct { float r; float g; float b; } x1; struct { float s; float t; float p; } x2; struct type { float x[3] data; } data; } x0; } target; float fov; float near; float far; } _latestCameraState;
}

@property (nonatomic) struct Cuboid { struct vec<3, float, glm::aligned_highp> { union { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct type { float x0[4] } x3; } x0; } x0; struct vec<3, float, glm::aligned_highp> { union { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct type { float x0[4] } x3; } x0; } x1; } boundingBox;
@property (nonatomic) BOOL isFullscreen;

/* instance methods */
- (id)init;
@end

#endif /* IG3DPhotoViewParams_h */