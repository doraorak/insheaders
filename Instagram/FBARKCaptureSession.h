//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARKCaptureSession_h
#define FBARKCaptureSession_h
@import Foundation;

#include "ARSessionDelegate-Protocol.h"
#include "FBARCameraCapabilitiesProviding-Protocol.h"
#include "FBARCameraPerformanceControlling-Protocol.h"
#include "FBARKAudioDataProducer.h"
#include "FBARKAudioSessionController.h"
#include "FBARKPlatformAlgorithmDataProducer.h"
#include "FBARKSessionEventAnnouncer.h"
#include "FBARKSessionListenerAnnouncer.h"
#include "FBARKVideoDataProducer.h"
#include "FBARKVideoSessionController.h"
#include "FBARKWorldTrackingFrameProducer.h"
#include "FBCaptureCameraController-Protocol.h"
#include "FBMPCameraCaptureInput-Protocol.h"

@class ARSession, ARWorldMap, AVCaptureDevice, AVCapturePhotoOutput, FBCameraAudioLevelListenerAnnouncer, FBCameraCaptureFrameDropQueuedAnnouncer, FBCameraCaptureManagingProducerPorts, FBCaptureDevice, FBCaptureDeviceStateController, FBCaptureManagerEventQueuedAnnouncer, FBFramePerformanceTracker, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol FBCCAudioCaptureControlling, FBCCPerformanceLogger, FBCameraAnalyticsPayloadProviding, FBCaptureVideoSessionControlling, FBMPProducerPort, FBOrientationTracking, OS_dispatch_queue;

@interface FBARKCaptureSession : NSObject<FBARCameraPerformanceControlling, ARSessionDelegate, FBMPCameraCaptureInput, FBCaptureCameraController, FBARCameraCapabilitiesProviding> {
  /* instance variables */
  BOOL _sessionRunning;
  NSObject<OS_dispatch_queue> *_sessionQueue;
  NSObject<OS_dispatch_queue> *_videoOutputQueue;
  ARSession *_captureSession;
  NSMutableArray *_pointAnchors;
  NSMutableDictionary *_sessionConfigurations;
  undefined * _captureSessionAvailabilityChecker;
  undefined * _toggledPositionGetter;
  undefined * _worldTrackingConfigurationIsSupportedChecker;
  id /* block */ _systemResourcesPreloader;
  ARWorldMap *_worldMap;
  BOOL _forceRecreateWorldTrackingConfiguration;
  FBARKSessionListenerAnnouncer *_sessionAnnouncer;
  FBARKSessionEventAnnouncer *_sessionEventAnnouncer;
  FBCaptureManagerEventQueuedAnnouncer *_captureManagerEventAnnouncer;
  FBCaptureDeviceStateController *_captureDeviceStateController;
  struct FBCameraConfiguration { BOOL shouldFrontCameraVideoMirrored; BOOL multitaskingCameraAccessEnabled; long long startingDevicePosition; long long initialFlashMode; NSString *initialSessionPreset; BOOL retainSinglePreviewLayerWhenSwitchCaptureSession; BOOL retainMultiPreviewLayersWhenSwitchCaptureSession; BOOL useSingleCaptureDeviceAsDefaultCameraPosition; unsigned char initialTargetFPS; BOOL audioCaptureIgnoreRTCClientNotification; BOOL automaticallyConfiguresApplicationAudioSession; BOOL canPreConfigureAudioSession; BOOL shouldRemoveInputsAndOutputsWhenStopped; BOOL enableEchoCancellation; BOOL videoBufferTransformEnabled; long long videoStabilizationMode; BOOL setVideoStabilizationModeAfterStart; BOOL subjectAreaChangeMonitoring; float lowLightDetectionThreshold; float lowLightExposureBias; struct FBBracketedCaptureConfiguration { NSArray *exposureValues; undefined *resolverFunction; BOOL enabled; BOOL autoEnhanceEnabled; unsigned long long downsampleWidth; } bracketedCaptureConfiguration; double maxZoomFactor; BOOL ultraWideCameraSupport; BOOL preserveZoomFactorsDuringCameraSession; BOOL keepAudioSessionActiveDuringCameraSession; BOOL markAVWriterInputsAsFinishedWhenRecordingStops; id /* block */ disableARKitCacheBlock; struct CGSize { double width; double height; } preferredWorldTrackingResolution; BOOL planeDetectionEnabled; BOOL produceWorldTrackingFrames; BOOL worldTrackingAlignmentGravity; BOOL lowLightDetectorEnabled; BOOL flashSceneDetectorEnabled; BOOL audioCaptureEnabled; BOOL audioOnlyCapture; NSArray *preferredCaptureDeviceTypes; NSArray *captureDevices; NSArray *multiCaptureDevices; BOOL useLatestCaptureDevices; unsigned int photoPixelFormat; unsigned int initialCaptureVideoDataOutputPixelFormatType; struct FBCaptureAutoExposureConfiguration { BOOL enableAutoExposureOnTrackedObjects; BOOL trackVisibleFaces; BOOL trackVisibleBodies; BOOL trackVisibleCats; BOOL trackVisibleDogs; BOOL trackQRCodes; } autoExposureConfiguration; struct FBCapturePOIDetectorConfiguration { long long detectorType; double executionTimeInterval; double minimumBoundsChange; BOOL drawDebugBounds; } detectorConfiguration; BOOL fbAudioEnabled; NSArray *photoCapturePlugins; BOOL useFBMultiCaptureManager; BOOL enableMultiCapture; struct CGSize { double width; double height; } customizedCapturedPhotoResolution; struct FBPhotoCaptureConfiguration { BOOL stillImageCaptureEnabled; BOOL isFlipFrontCameraOutputEnabled; BOOL stopLivePreviewOnPhotoCapture; BOOL delayImageCaptureWhileAdjustingCamera; BOOL setFlashModeOnPhotoSettingsForSceneMonitoring; unsigned long long setMaxPhotoQualityPrioritization; } photoCaptureConfiguration; BOOL enableSceneDepth; BOOL livePhotoEnabled; BOOL includeTrackingDataInVideoData; struct FBCameraSimulationConfiguration { id /* block */ videoFilePathProvider; id /* block */ imageFilePathProvider; BOOL enableLocalVideoFileInput; BOOL enableLocalVideoFileAudioHandling; BOOL endlessPlaybackEnabled; } cameraSimulationConfiguration; BOOL stereoEnabled; BOOL forceARKit; BOOL pauseResumeOnAsyncSessionQueue; struct FBRecordingConfiguration { id /* block */ depthRecordingHandler; id /* block */ poseRecordingHandler; BOOL shouldCaptureWithRecordingTimestamps; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; BOOL useCaptureVideoDataOutputRecommendedVideoSettings; } recordingConfiguration; BOOL enableSetWorldMapForWorldTracking; BOOL enableMETACaptureManagerConvergence; BOOL enableControlPanel; int maxExposureDurationMs; BOOL doNotSetVideoSettings; isARKitAudioDataRequired *videoFormat; BOOL x0; int captureInfoLoggingFrameInterval; BOOL isARFrameRotationDisabled; } _cameraConfiguration;
  FBFramePerformanceTracker *_framePerformanceTracker;
  NSObject<OS_dispatch_queue> *_videoBufferQueue;
  NSObject<OS_dispatch_queue> *_audioBufferQueue;
  FBARKVideoDataProducer *_videoDataProducer;
  FBARKAudioDataProducer *_audioDataProducer;
  FBARKWorldTrackingFrameProducer *_worldTrackingFrameProducer;
  FBARKPlatformAlgorithmDataProducer *_platformAlgorithmDataProducer;
  NSObject<FBCCPerformanceLogger> *_performanceLogger;
  BOOL _hasSessionStartInvoked;
  long long _videoPortConnections;
  BOOL _shouldProduceData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<FBCaptureVideoSessionControlling> *videoSessionController;
@property (readonly, nonatomic) NSObject<FBCCAudioCaptureControlling> *audioPipelineController;
@property (readonly, nonatomic) NSObject<FBCameraAnalyticsPayloadProviding> *analyticsPayloadProvider;
@property (readonly, nonatomic) FBCameraCaptureFrameDropQueuedAnnouncer *frameDropAnnouncer;
@property (readonly, nonatomic) NSObject<FBOrientationTracking> *orientationTracker;
@property (readonly, nonatomic) NSObject<FBMPProducerPort> *videoProducerPort;
@property (readonly, nonatomic) NSObject<FBMPProducerPort> *audioProducerPort;
@property (readonly, nonatomic) NSObject<FBMPProducerPort> *userInterfacePort;
@property (readonly, nonatomic) NSObject<FBMPProducerPort> *worldTrackingFramePort;
@property (readonly, nonatomic) NSObject<FBMPProducerPort> *platformAlgorithmDataPort;
@property (readonly, copy, nonatomic) NSArray *producerPorts;
@property (readonly, nonatomic) struct { float x0; float x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { long long x0; int x1; unsigned int x2; long long x3; } x3; float x4; float x5; } validExposureValues;
@property (readonly, nonatomic) double maxZoomFactor;
@property (readonly, nonatomic) BOOL isVideoHDREnabled;
@property (readonly, nonatomic) FBCaptureDevice *currentDevice;
@property (readonly, nonatomic) AVCaptureDevice *currentSystemCaptureDevice;
@property (readonly, nonatomic) AVCapturePhotoOutput *currentCapturePhotoOutput;
@property (readonly, nonatomic) struct { float x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; long long x2; float x3; float x4; } exposureInfo;
@property (readonly, nonatomic) struct OpaqueCMClock * captureSessionClock;
@property (readonly, nonatomic) NSDictionary *recommendedVideoSettingsForAssetWriter;
@property (readonly, nonatomic) BOOL adjustingCameraSettings;
@property (readonly, nonatomic) FBCameraAudioLevelListenerAnnouncer *cameraAudioLevelAnnouncer;
@property (readonly, nonatomic) unsigned long long supportedCameraCapabilities;
@property (readonly, nonatomic) unsigned long long requestedCameraCapabilities;

/* instance methods */
- (id)initWithCameraConfiguration:(const struct FBCameraConfiguration *)configuration orientationTracker:(id)tracker eventAnnouncer:(id)announcer frameDropAnnouncer:(id)announcer analyticsPayloadProvider:(id)provider framePerformanceTracker:(id)tracker framePerformanceTrackerForWaterfall:(id)waterfall requestedCameraCapabilities:(unsigned long long)capabilities performanceLogger:(id)logger;
- (id)initWithCameraConfiguration:(const struct FBCameraConfiguration *)configuration orientationTracker:(id)tracker eventAnnouncer:(id)announcer frameDropAnnouncer:(id)announcer analyticsPayloadProvider:(id)provider framePerformanceTracker:(id)tracker framePerformanceTrackerForWaterfall:(id)waterfall producerPorts:(id)ports captureDeviceStateController:(id)controller requestedCameraCapabilities:(unsigned long long)capabilities performanceLogger:(id)logger videoPortConnections:(long long)connections;
- (id)initWithCameraConfiguration:(const struct FBCameraConfiguration *)configuration orientationTracker:(id)tracker eventAnnouncer:(id)announcer frameDropAnnouncer:(id)announcer analyticsPayloadProvider:(id)provider framePerformanceTracker:(id)tracker framePerformanceTrackerForWaterfall:(id)waterfall producerPorts:(id)ports captureDeviceStateController:(id)controller requestedCameraCapabilities:(unsigned long long)capabilities performanceLogger:(id)logger sessionQueue:(id)queue videoOutputQueue:(id)queue captureSessionAvailabilityChecker:(undefined *)checker toggledPositionGetter:(undefined *)getter videoSessionController:(id)controller audioPipelineController:(id)controller videoDataProducer:(id)producer worldTrackingConfigurationIsSupportedChecker:(undefined *)checker systemResourcesPreloader:(id /* block */)preloader videoPortConnections:(long long)connections;
- (void)startCameraCaptureSessionWithType:(unsigned char)type context:(id)context videoPortConnections:(unsigned long long)connections deviceConfiguration:(id)configuration initialCameraAction:(id)action completionQueue:(id)queue completion:(id /* block */)completion;
- (void)pauseCameraCaptureSession;
- (void)updatePreviewOrientation;
- (void)setPhotoCaptureConfiguration:(struct FBPhotoCaptureConfiguration *)configuration;
- (void)setBracketedCaptureEnabled:(BOOL)enabled;
- (void)setLivePhotoEnabled:(BOOL)enabled;
- (void)restartSimulatedMediaInput;
- (void)sessionWillStart:(id)start;
- (void)sessionWillStop:(id)stop;
- (void)sessionWillStop:(id)stop stopAudio:(BOOL)audio;
- (void)sessionConnectedPort:(id)port context:(id)context;
- (void)sessionDisconnectedPort:(id)port context:(id)context;
- (void)invalidate;
- (void)addCaptureManagerListener:(id)listener;
- (void)removeCaptureManagerListener:(id)listener;
- (void)addCapturePOIDetectorListener:(id)listener;
- (void)removeCapturePOIDetectorListener:(id)listener;
- (void)setPhotoOutputListener:(id)listener;
- (BOOL)canUpdateCaptureDevicePosition:(long long)position;
- (double)supportedZoomFactorFromZoomFactor:(double)factor;
- (BOOL)isZoomFactorSupported:(double)supported;
- (BOOL)isAdjustingCameraSettings;
- (void)fetchVideoFieldOfViewWithCompletion:(id /* block */)completion;
- (BOOL)currentDeviceSupportsCaptureSessionPreset:(id)preset;
- (BOOL)isTorchModeSupported:(long long)supported;
- (BOOL)isExposureModeSupported:(long long)supported;
- (BOOL)isFocusModeSupported:(long long)supported;
- (BOOL)supportsCaptureSessionPreset:(id)preset cameraPosition:(long long)position;
- (void)performCameraAction:(id)action;
- (void)performCameraAction:(id)action completionQueue:(id)queue completion:(id /* block */)completion;
- (void)performImageCaptureWithAction:(id)action;
- (void)warmupCameraSystemResources;
- (BOOL)isDepthCameraSupported;
- (id)videoPreviewLayer;
- (id)previewLayerForPosition:(long long)position;
- (id)previewLayerForDevice:(id)device;
- (void)session:(id)session didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)buffer;
- (void)session:(id)session didUpdateFrame:(id)frame;
- (void)requestChangeToCameraCapabilities:(unsigned long long)capabilities completionQueue:(id)queue completion:(id /* block */)completion;
- (struct ARPointTrackable { undefined * * x0; struct Matrix<float, 4, 4, 0, 4, 4> { struct DenseStorage<float, 16, 4, 4, 0> { struct plain_array<float, 16, 0, 16> { float x0[16] } x0; } x0; } x1; struct uuid { unsigned char x0[16] } x2; struct shared_timed_mutex { struct __shared_mutex_base { struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56] } x0; } x0; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40] } x0; } x1; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40] } x0; } x2; unsigned int x3; } x0; } x3; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x4; BOOL x5; })addSLAMPointTrackable:(const void *)trackable;
- (void)removeSLAMTrackable:(const void *)slamtrackable;
- (void)removeAllSLAMTrackables;
- (struct future<std::vector<facebook::artech::anchorservice::datawrappers::HitTestResultData>> { void * x0; })hitTestWithPoint:(const void *)point typeOption:(const void *)option;
- (void)getWorldMapWithSnapshotImage:(id)image completionHandler:(id /* block */)handler;
- (void)setWorldMap:(id)map completionHandler:(id /* block */)handler;
- (void)addListener:(id)listener;
- (void)setCaptureDeviceFormatProvider:(id)provider;
- (void)invalidateCaptureDeviceFormat;
- (void)pauseDataProduce;
- (void)resumeDataProduce;
- (void)resetVideoResolution:(struct CGSize { double x0; double x1; })resolution;
- (void)pauseDepthDataProduce;
- (void)resumeDepthDataProduce;
@end

#endif /* FBARKCaptureSession_h */