//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCaptureSession_h
#define FBCaptureSession_h
@import Foundation;

@class AVCaptureSession, AVCaptureVideoPreviewLayer, NSArray, NSError, NSMutableDictionary, NSString;
@protocol FBCaptureSessionRuntimeErrorDelegate, FBCaptureSessionStateDelegate, OS_dispatch_queue;

@interface FBCaptureSession : NSObject {
  /* instance variables */
  AVCaptureSession *_captureSession;
  struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _captureSessionLock;
  NSString *_sessionName;
  unsigned long long _retryCounter;
  AVCaptureVideoPreviewLayer *_videoPreviewLayer;
  NSMutableDictionary *_videoPreviewLayers;
  BOOL _captureSessionIsStopping;
  NSError *_lastCaptureSessionError;
}

@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) BOOL interrupted;
@property (weak, nonatomic) NSObject<FBCaptureSessionStateDelegate> *stateDelegate;
@property (weak, nonatomic) NSObject<FBCaptureSessionRuntimeErrorDelegate> *runtimeErrorDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *restartSessionQueue;
@property (readonly, nonatomic) struct OpaqueCMClock * clock;
@property (readonly, copy, nonatomic) NSString *sessionPreset;
@property (readonly, copy, nonatomic) NSArray *inputs;
@property (readonly, copy, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) BOOL isMulticamCaptureSession;
@property (nonatomic) BOOL automaticallyConfiguresCaptureDeviceForWideColor;

/* class methods */
+ (BOOL)isMultiCamSupported;

/* instance methods */
- (id)initWithSessionName:(id)name withRestartSessionQueue:(id)queue;
- (id)initWithSessionName:(id)name withRestartSessionQueue:(id)queue config:(struct FBCaptureSessionConfig { BOOL x0; id x1; BOOL x2; BOOL x3; })config;
- (BOOL)_connectCaptureDeviceInput:(id)input toVideoCaptureOutput:(id)output toPhotoCaptureOutput:(id)output previewLayerConnection:(id)connection;
- (void)addInputs:(id)inputs;
- (void)addOutputs:(id)outputs;
- (BOOL)isRunning;
- (BOOL)isInterrupted;
- (void)_startCaptureSession;
- (void)_stopCaptureSession;
- (void)startSession;
- (void)pauseSession;
- (void)stopSession;
- (id)videoPreviewLayer;
- (void)_handleCaptureDidStartRunningNotification:(id)notification;
- (void)_handleCaptureDidStopRunningNotification:(id)notification;
- (void)_handleCaptureSessionNotification:(id)notification;
- (void)_handleCaptureSessionDidBecomeInterruptedNotification:(id)notification;
- (void)_handleCaptureSessionDidResignInterruptedNotification:(id)notification;
- (void)_handleCaptureSessionRuntimeErrorNotification:(id)notification;
- (void)_enableMultitaskingCameraAccess;
@end

#endif /* FBCaptureSession_h */