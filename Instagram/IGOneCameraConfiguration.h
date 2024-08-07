//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGOneCameraConfiguration_h
#define IGOneCameraConfiguration_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGVideoRecorderAudioConfiguration.h"

@class IGCameraControlPanel, IGCameraOpenPerfComponentsModel, IGCaptureQueueManager, IGUserSession, NSArray;
@protocol OCMComponentExperimentManagerProtocol;

@interface IGOneCameraConfiguration : NSObject {
  /* instance variables */
  BOOL _photostreamEnabled;
  BOOL _highFPSCaptureEnabled;
  BOOL _shouldSortFormatsByFOV;
  BOOL _isHLGVideoDesired;
  BOOL _fbAudioEnabled;
  BOOL _stereoEnabled;
  BOOL _unificationEnabled;
  BOOL _cropAspectFitUsingPreviewAspectRatio;
  BOOL _shouldFrontCameraVideoMirrored;
  BOOL _isE2EECall;
  BOOL _isSupEnabled;
  BOOL _isMultitaskingCameraAccessEnabled;
  BOOL _shouldEnableMETACaptureManagerConvergence;
  long long _initialCameraPosition;
  long long _initialFlashMode;
  long long _videoStabilizationMode;
  NSArray *_initialCaptureDevices;
  NSArray *_initialMultiCaptureDevices;
  long long _initialSessionPreset;
  IGCaptureQueueManager *_queueManager;
  IGCameraOpenPerfComponentsModel *_perfComponents;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLoggerForUserSession;
  NSObject<OCMComponentExperimentManagerProtocol> *_experimentManagerProvider;
  long long _maxCaptureResolution;
  IGCameraControlPanel *_controlPanel;
  IGVideoRecorderAudioConfiguration *_videoRecorderAudioConfiguration;
  struct final { BOOL enableMicInPreview; BOOL startOutputOnStartInput; BOOL startOutputOnSubgraphInsert; BOOL enableSetAudioMixing; BOOL enableFBAAllowSpeakerDuringRecording; BOOL enableFBAShouldPauseBackgroundWhenApplyingEffect; BOOL enableFBAAllowStartInputForSomeSubgraphInsertion; BOOL enablePushGraph; BOOL shouldConfigureStereoCapture; } _audioPipelineConfiguration;
  struct IGCCCaptureManagerBracketedCaptureOptions { NSArray *exposureValues; undefined *resolverFunction; BOOL enabled; BOOL autoEnhanceEnabled; unsigned long long downsampleWidth; } _bracketedCaptureOptions;
}

@property (retain, nonatomic) IGUserSession *userSession;
@property (nonatomic) long long captureManagerMode;
@property (nonatomic) unsigned long long analyticsProductName;
@property (nonatomic) BOOL useFBMultiCaptureManager;

/* instance methods */
- (id)init;
@end

#endif /* IGOneCameraConfiguration_h */
