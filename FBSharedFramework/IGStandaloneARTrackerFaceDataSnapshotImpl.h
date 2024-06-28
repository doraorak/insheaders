//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStandaloneARTrackerFaceDataSnapshotImpl_h
#define IGStandaloneARTrackerFaceDataSnapshotImpl_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol {FaceVO="rawHeadMatrix"{mat<4, 4, float, glm::packed_highp>="value"[4{vec<4, float, glm::packed_highp>=""(?=""{?="x"f"y"f"z"f"w"f}""{?="r"f"g"f"b"f"a"f}""{?="s"f"t"f"p"f"q"f}"data"{type="data"[4f]})}]}"rawLandmarks2D"{vector<glm::vec<2, float>, std::allocator<glm::vec<2, float>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<glm::vec<2, float> *, std::allocator<glm::vec<2, float>>>="__value_"^v}}"rawEarLandmarks2D"{vector<glm::vec<2, float>, std::allocator<glm::vec<2, float>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<glm::vec<2, float> *, std::allocator<glm::vec<2, float>>>="__value_"^v}}"earConfidences"{pair<float, float>="first"f"second"f}"rawLandmarks3D"{vector<glm::vec<3, float>, std::allocator<glm::vec<3, float>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<glm::vec<3, float> *, std::allocator<glm::vec<3, float>>>="__value_"^v}}"expressionOffsets"{vector<glm::vec<3, float>, std::allocator<glm::vec<3, float>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<glm::vec<3, float> *, std::allocator<glm::vec<3, float>>>="__value_"^v}}"deformationCoefficients"{vector<float, std::allocator<float>>="__begin_"^f"__end_"^f"__end_cap_"{__compressed_pair<float *, std::allocator<float>>="__value_"^f}}"blendShapeWeights"{vector<float, std::allocator<float>>="__begin_"^f"__end_"^f"__end_cap_"{__compressed_pair<float *, std::allocator<float>>="__value_"^f}}"expressionCalibrationWeights"{vector<float, std::allocator<float>>="__begin_"^f"__end_"^f"__end_cap_"{__compressed_pair<float *, std::allocator<float>>="__value_"^f}}"blendshapeFittedError"f"brightness"f"expressionModelNumber"f"timestamp"Q"id"i"confidenceScore"f"boundingBox"{vector<float, std::allocator<float>>="__begin_"^f"__end_"^f"__end_cap_"{__compressed_pair<float *, std::allocator<float>>="__value_"^f}}"leftEye"{EyeInfo="irisPosition2D"{vec<2, float, glm::packed_highp>=""(?=""{?="x"f"y"f}""{?="r"f"g"f}""{?="s"f"t"f}"data"{type="data"[2f]})}"irisRadius2D"f"irisPosition3D"{vec<3, float, glm::packed_highp>=""(?=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"data"{type="data"[3f]})}"eyeballCenter3D"{vec<3, float, glm::packed_highp>=""(?=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"data"{type="data"[3f]})}"eyeballRotation"{qua<float, glm::packed_highp>=""(?=""{?="x"f"y"f"z"f"w"f}"data"{type="data"[4f]})}}"rightEye"{EyeInfo="irisPosition2D"{vec<2, float, glm::packed_highp>=""(?=""{?="x"f"y"f}""{?="r"f"g"f}""{?="s"f"t"f}"data"{type="data"[2f]})}"irisRadius2D"f"irisPosition3D"{vec<3, float, glm::packed_highp>=""(?=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"data"{type="data"[3f]})}"eyeballCenter3D"{vec<3, float, glm::packed_highp>=""(?=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"data"{type="data"[3f]})}"eyeballRotation"{qua<float, glm::packed_highp>=""(?=""{?="x"f"y"f"z"f"w"f}"data"{type="data"[4f]})}}"eyeInfoValid"B"facialGesturesConfidences"{vector<float, std::allocator<float>>="__begin_"^f"__end_"^f"__end_cap_"{__compressed_pair<float *, std::allocator<float>>="__value_"^f}}"facialGesturesToIndex"{shared_ptr<folly::Synchronized<std::unordered_map<std::string, int>>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}}"blendShapeNameToIndex"{shared_ptr<std::unordered_map<std::string, int>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}}"isRealScale"B"imageMetadata"{ImageMetadata="width"i"height"i"rotation"i"fieldOfViewRadians"f"flipVertically"B"cameraSensorRotation"i"isRealtimeTimestamp"B"exposureTime"{Optional<double>="storage_"{StorageTriviallyDestructible=""(?="emptyState"c"value"d)"hasValue"B}}"focusRange"{Optional<std::pair<float, float>>="storage_"{StorageTriviallyDestructible=""(?="emptyState"c"value"{pair<float, float>="first"f"second"f})"hasValue"B}}"frameReadoutTime"{Optional<double>="storage_"{StorageTriviallyDestructible=""(?="emptyState"c"value"d)"hasValue"B}}}"indexRemappedLandmarks2D"{vector<glm::vec<2, float>, std::allocator<glm::vec<2, float>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<glm::vec<2, float> *, std::allocator<glm::vec<2, float>>>="__value_"^v}}};

@interface IGStandaloneARTrackerFaceDataSnapshotImpl : NSObject<NSObject> {
  /* instance variables */
  struct FaceVO { struct mat<4, 4, float, glm::packed_highp> { f]})} x[4{vec<4, float, glm::packed_highp>=""(?=""{?="x"f"y"f"z"f"w"f}""{?="r"f"g"f"b"f"a"f}""{?="s"f"t"f"p"f"q"f}"data"{type="data"[4] value; } rawHeadMatrix; struct vector<glm::vec<2, float>, std::allocator<glm::vec<2, float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::vec<2, float> *, std::allocator<glm::vec<2, float>>> { void *__value_; } __end_cap_; } rawLandmarks2D; struct vector<glm::vec<2, float>, std::allocator<glm::vec<2, float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::vec<2, float> *, std::allocator<glm::vec<2, float>>> { void *__value_; } __end_cap_; } rawEarLandmarks2D; struct pair<float, float> { float first; float second; } earConfidences; struct vector<glm::vec<3, float>, std::allocator<glm::vec<3, float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::vec<3, float> *, std::allocator<glm::vec<3, float>>> { void *__value_; } __end_cap_; } rawLandmarks3D; struct vector<glm::vec<3, float>, std::allocator<glm::vec<3, float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::vec<3, float> *, std::allocator<glm::vec<3, float>>> { void *__value_; } __end_cap_; } expressionOffsets; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } deformationCoefficients; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } blendShapeWeights; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } expressionCalibrationWeights; float blendshapeFittedError; float brightness; float expressionModelNumber; unsigned long long timestamp; int id; float confidenceScore; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } boundingBox; struct EyeInfo { struct vec<2, float, glm::packed_highp> { union { struct { float x; float y; } x0; struct { float r; float g; } x1; struct { float s; float t; } x2; struct type { float x[2] data; } data; } x0; } irisPosition2D; float irisRadius2D; struct vec<3, float, glm::packed_highp> { union { struct { float x; float y; float z; } x0; struct { float r; float g; float b; } x1; struct { float s; float t; float p; } x2; struct type { float x[3] data; } data; } x0; } irisPosition3D; struct vec<3, float, glm::packed_highp> { union { struct { float x; float y; float z; } x0; struct { float r; float g; float b; } x1; struct { float s; float t; float p; } x2; struct type { float x[3] data; } data; } x0; } eyeballCenter3D; struct qua<float, glm::packed_highp> { union { struct { float x; float y; float z; float w; } x0; struct type { float x[4] data; } data; } x0; } eyeballRotation; } leftEye; struct EyeInfo { struct vec<2, float, glm::packed_highp> { union { struct { float x; float y; } x0; struct { float r; float g; } x1; struct { float s; float t; } x2; struct type { float x[2] data; } data; } x0; } irisPosition2D; float irisRadius2D; struct vec<3, float, glm::packed_highp> { union { struct { float x; float y; float z; } x0; struct { float r; float g; float b; } x1; struct { float s; float t; float p; } x2; struct type { float x[3] data; } data; } x0; } irisPosition3D; struct vec<3, float, glm::packed_highp> { union { struct { float x; float y; float z; } x0; struct { float r; float g; float b; } x1; struct { float s; float t; float p; } x2; struct type { float x[3] data; } data; } x0; } eyeballCenter3D; struct qua<float, glm::packed_highp> { union { struct { float x; float y; float z; float w; } x0; struct type { float x[4] data; } data; } x0; } eyeballRotation; } rightEye; BOOL eyeInfoValid; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } facialGesturesConfidences; struct shared_ptr<folly::Synchronized<std::unordered_map<std::string, int>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } facialGesturesToIndex; struct shared_ptr<std::unordered_map<std::string, int>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } blendShapeNameToIndex; BOOL isRealScale; struct ImageMetadata { int width; int height; int rotation; float fieldOfViewRadians; BOOL flipVertically; int cameraSensorRotation; BOOL isRealtimeTimestamp; struct Optional<double> { struct StorageTriviallyDestructible { union { char emptyState; double value; } x0; BOOL hasValue; } storage_; } exposureTime; struct Optional<std::pair<float, float>> { struct StorageTriviallyDestructible { union { char emptyState; struct pair<float, float> { float first; float second; } value; } x0; BOOL hasValue; } storage_; } focusRange; struct Optional<double> { struct StorageTriviallyDestructible { union { char emptyState; double value; } x0; BOOL hasValue; } storage_; } frameReadoutTime; } imageMetadata; struct vector<glm::vec<2, float>, std::allocator<glm::vec<2, float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::vec<2, float> *, std::allocator<glm::vec<2, float>>> { void *__value_; } __end_cap_; } indexRemappedLandmarks2D; } _face;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _presentationTime;
  struct CGSize { double width; double height; } _inputDimensions;
  struct CGSize { double width; double height; } _outputDimensions;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingBox;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedBoundingBox;
@property (readonly, nonatomic) struct IGPoint3D_ { double x0; double x1; double x2; } rotation;
@property (readonly, nonatomic) struct IGPoint3D_ { double x0; double x1; double x2; } scale;
@property (readonly, nonatomic) struct IGPoint3D_ { double x0; double x1; double x2; } normalizedTranslation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFace:(struct FaceVO { struct mat<4, 4, float, glm::packed_highp> { f]})} x0[4{vec<4, float, glm::packed_highp>=(?={?=ffff}{?=ffff}{?=ffff}{type=[4] } x0; struct vector<glm::vec<2, float>, std::allocator<glm::vec<2, float>>> { void * x0; void * x1; struct __compressed_pair<glm::vec<2, float> *, std::allocator<glm::vec<2, float>>> { void * x0; } x2; } x1; struct vector<glm::vec<2, float>, std::allocator<glm::vec<2, float>>> { void * x0; void * x1; struct __compressed_pair<glm::vec<2, float> *, std::allocator<glm::vec<2, float>>> { void * x0; } x2; } x2; struct pair<float, float> { float x0; float x1; } x3; struct vector<glm::vec<3, float>, std::allocator<glm::vec<3, float>>> { void * x0; void * x1; struct __compressed_pair<glm::vec<3, float> *, std::allocator<glm::vec<3, float>>> { void * x0; } x2; } x4; struct vector<glm::vec<3, float>, std::allocator<glm::vec<3, float>>> { void * x0; void * x1; struct __compressed_pair<glm::vec<3, float> *, std::allocator<glm::vec<3, float>>> { void * x0; } x2; } x5; struct vector<float, std::allocator<float>> { float * x0; float * x1; struct __compressed_pair<float *, std::allocator<float>> { float * x0; } x2; } x6; struct vector<float, std::allocator<float>> { float * x0; float * x1; struct __compressed_pair<float *, std::allocator<float>> { float * x0; } x2; } x7; struct vector<float, std::allocator<float>> { float * x0; float * x1; struct __compressed_pair<float *, std::allocator<float>> { float * x0; } x2; } x8; float x9; float x10; float x11; unsigned long long x12; int x13; float x14; struct vector<float, std::allocator<float>> { float * x0; float * x1; struct __compressed_pair<float *, std::allocator<float>> { float * x0; } x2; } x15; struct EyeInfo { struct vec<2, float, glm::packed_highp> { union { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; struct type { float x0[2] } x3; } x0; } x0; float x1; struct vec<3, float, glm::packed_highp> { union { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct type { float x0[3] } x3; } x0; } x2; struct vec<3, float, glm::packed_highp> { union { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct type { float x0[3] } x3; } x0; } x3; struct qua<float, glm::packed_highp> { union { struct { float x0; float x1; float x2; float x3; } x0; struct type { float x0[4] } x1; } x0; } x4; } x16; struct EyeInfo { struct vec<2, float, glm::packed_highp> { union { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; struct type { float x0[2] } x3; } x0; } x0; float x1; struct vec<3, float, glm::packed_highp> { union { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct type { float x0[3] } x3; } x0; } x2; struct vec<3, float, glm::packed_highp> { union { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct type { float x0[3] } x3; } x0; } x3; struct qua<float, glm::packed_highp> { union { struct { float x0; float x1; float x2; float x3; } x0; struct type { float x0[4] } x1; } x0; } x4; } x17; BOOL x18; struct vector<float, std::allocator<float>> { float * x0; float * x1; struct __compressed_pair<float *, std::allocator<float>> { float * x0; } x2; } x19; struct shared_ptr<folly::Synchronized<std::unordered_map<std::string, int>>> { void * x0; struct __shared_weak_count * x1; } x20; struct shared_ptr<std::unordered_map<std::string, int>> { void * x0; struct __shared_weak_count * x1; } x21; BOOL x22; struct ImageMetadata { int x0; int x1; int x2; float x3; BOOL x4; int x5; BOOL x6; struct Optional<double> { struct StorageTriviallyDestructible { union { char x0; double x1; } x0; BOOL x1; } x0; } x7; struct Optional<std::pair<float, float>> { struct StorageTriviallyDestructible { union { char x0; struct pair<float, float> { float x0; float x1; } x1; } x0; BOOL x1; } x0; } x8; struct Optional<double> { struct StorageTriviallyDestructible { union { char x0; double x1; } x0; BOOL x1; } x0; } x9; } x23; struct vector<glm::vec<2, float>, std::allocator<glm::vec<2, float>>> { void * x0; void * x1; struct __compressed_pair<glm::vec<2, float> *, std::allocator<glm::vec<2, float>>> { void * x0; } x2; } x24; })face snapshot:(id)snapshot presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
@end

#endif /* IGStandaloneARTrackerFaceDataSnapshotImpl_h */
