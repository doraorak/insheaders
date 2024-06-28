//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCaptureCoordinatorBase_h
#define FBCaptureCoordinatorBase_h
@import Foundation;

#include "FBARCameraCapabilitiesProviding-Protocol.h"
#include "FBCCCaptureModeManaging-Protocol.h"
#include "FBCCDataPipe.h"
#include "FBCCGestureCaptureController.h"
#include "FBCCGestureDataPipe.h"
#include "FBCancelHandle.h"
#include "FBCaptureCoordinatorBaseLongPressGestureDelegate-Protocol.h"
#include "FBCaptureCoordinatorBasePanGestureDelegate-Protocol.h"
#include "FBCaptureCoordinatorBasePinchGestureDelegate-Protocol.h"
#include "FBCaptureCoordinatorBaseRotationGestureDelegate-Protocol.h"
#include "FBCaptureCoordinatorBaseTapGestureDelegate-Protocol.h"
#include "FBCaptureCoordinatorFilter.h"
#include "FBCaptureCoordinatorFilterFactoryProtocol-Protocol.h"
#include "FBCaptureCoordinatorFilterManaging-Protocol.h"
#include "FBCaptureCoordinatorFilterResourcesManager.h"
#include "FBCaptureCoordinatorSubclassProtocol-Protocol.h"
#include "FBCaptureModeCoordinating-Protocol.h"
#include "FBMPCameraInfoInput.h"
#include "FBMPCaptureEventInput.h"
#include "FBMPDataCallbackOutput.h"
#include "FBMPFilter-Protocol.h"
#include "FBMPSession.h"
#include "FBTimer.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSOperationQueue, NSString;
@protocol FBARFilterDownloading, FBCCCTScanEventTracking, FBCCExperimentManager, FBCCPerformanceLogger, FBCaptureMode, FBCaptureSessionWaterfallLogging, FBMPRendering, OS_dispatch_queue;

@interface FBCaptureCoordinatorBase : NSObject<FBCaptureModeCoordinating, FBCaptureCoordinatorSubclassProtocol, UIGestureRecognizerDelegate, FBCCCaptureModeManaging, FBARCameraCapabilitiesProviding, FBCaptureCoordinatorFilterManaging> {
  /* instance variables */
  NSObject<FBCaptureMode> *_currentCaptureMode;
  NSObject<FBCCExperimentManager> *_experimentManager;
  FBTimer *_performanceTimer;
  FBCaptureCoordinatorFilter *_defaultVideoFilter;
  FBMPDataCallbackOutput *_videoBufferCallbackOutput;
  NSObject<OS_dispatch_queue> *_videoBufferCallbackQueue;
  id /* block */ _videoBufferCallback;
  FBMPDataCallbackOutput *_audioBufferCallbackOutput;
  NSObject<OS_dispatch_queue> *_audioBufferCallbackQueue;
  id /* block */ _audioBufferCallback;
  FBCCGestureDataPipe *_tapGestureDataPipe;
  FBCCGestureDataPipe *_panGestureDataPipe;
  FBCCGestureDataPipe *_pinchGestureDataPipe;
  FBCCGestureDataPipe *_rawTouchGestureDataPipe;
  FBCCGestureDataPipe *_rotationGestureDataPipe;
  FBCCGestureDataPipe *_longPressGestureDataPipe;
  FBCCDataPipe *_cameraInfoDataPipe;
  FBCCDataPipe *_captureEventDataPipe;
  NSOperationQueue *_filterUpdateQueue;
  NSString *_effectSessionID;
  struct FBRendererConfiguration { BOOL skipRenderingUntilAllFiltersPrepared; BOOL flushTextureCacheOnEveryFrame; BOOL multipleOutputsEnabled; BOOL overlayOutputEnabled; BOOL batchPostConnectionOperations; BOOL iglSurfaceEnabled; BOOL iglImageFilterEnabled; BOOL iglImageOverlayFilterEnabled; BOOL iglDoodleDrawingFilterEnabled; int renderingType; BOOL cropAspectFitUsingPreviewAspectRatio; BOOL alwaysCropAspectFitUsingPreviewAspectRatio; BOOL output16Bit; BOOL copiesServiceHostOnExport; } _rendererConfiguration;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _sessionIDMutex;
  NSObject<FBCaptureCoordinatorBaseTapGestureDelegate> *_tapGestureDelegate;
  NSObject<FBCaptureCoordinatorBasePanGestureDelegate> *_panGestureDelegate;
  NSObject<FBCaptureCoordinatorBasePinchGestureDelegate> *_pinchGestureDelegate;
  NSObject<FBCaptureCoordinatorBaseRotationGestureDelegate> *_rotationGestureDelegate;
  NSObject<FBCaptureCoordinatorBaseLongPressGestureDelegate> *_longPressGestureDelegate;
  NSObject<FBARFilterDownloading> *_filterDownloader;
  FBCancelHandle *_pendingFilterDownloadCancelToken;
}

@property (readonly, nonatomic) NSObject<FBMPFilter> *firstFilter;
@property (readonly, nonatomic) NSObject<FBMPFilter> *lastFilter;
@property (readonly, nonatomic) FBCCDataPipe *videoDataPipe;
@property (readonly, nonatomic) FBCCDataPipe *audioDataPipe;
@property (readonly, nonatomic) FBCCDataPipe *worldTrackingFrameDataPipe;
@property (readonly, nonatomic) FBCCDataPipe *lightEstimationDataPipe;
@property (readonly, nonatomic) FBCCDataPipe *platformAlgorithmDataPipe;
@property (readonly, nonatomic) NSObject<FBCCPerformanceLogger> *performanceLogger;
@property (readonly, nonatomic) NSObject<FBCaptureSessionWaterfallLogging> *waterfallLogger;
@property (readonly, nonatomic) NSObject<FBCCCTScanEventTracking> *ctScanEventTracker;
@property (nonatomic) long long framerateCap;
@property (readonly, nonatomic) FBMPSession *mediaSession;
@property (readonly, nonatomic) NSObject<FBMPRendering> *filterRenderer;
@property (readonly, nonatomic) NSObject<FBMPFilter> *filterAudioRenderer;
@property (readonly, copy, nonatomic) NSArray *currentFilters;
@property (readonly, nonatomic) FBMPCaptureEventInput *captureEventInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FBCaptureCoordinatorFilter *currentAudioFilter;
@property (readonly, nonatomic) NSObject<FBCaptureCoordinatorFilterFactoryProtocol> *filterFactory;
@property (readonly, nonatomic) FBCaptureCoordinatorFilterResourcesManager *filterResourcesManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) FBMPCameraInfoInput *cameraInfoInput;
@property (readonly, nonatomic) FBCCGestureCaptureController *gestureCaptureController;
@property (readonly, nonatomic) unsigned long long supportedCameraCapabilities;

/* instance methods */
- (id)initWithFilterFactory:(id)factory captureCoordinatorLogger:(id)logger rendererConfiguration:(const struct FBRendererConfiguration *)configuration gestureConfiguration:(const struct FBGestureConfiguration *)configuration filterDownloader:(id)downloader;
- (id)initWithFilterFactory:(id)factory captureCoordinatorLogger:(id)logger rendererConfiguration:(const struct FBRendererConfiguration *)configuration gestureConfiguration:(const struct FBGestureConfiguration *)configuration filterDownloader:(id)downloader videoDataQueue:(id)queue audioDataQueue:(id)queue defaultVideoFilter:(id)filter iglDeviceProducer:(id)producer experimentManager:(id)manager configProviderDelegate:(id)delegate;
- (void)dealloc;
- (void)setFilters:(id)filters completion:(id /* block */)completion;
- (id)filterFromDescriptor:(id)descriptor error:(id *)error;
- (void)clearInMemoryCacheWithCompletion:(id /* block */)completion;
- (void)performWithIGLDeviceOnVideoQueue:(id /* block */)queue;
- (void)_performUpdateWithFilterDescriptors:(id)descriptors completion:(id /* block */)completion;
- (struct FBCCUpdateBundle { id x0; id x1; })_updateBundleForSettingFilters:(id)filters error:(id *)error;
- (id)preview;
- (void)startSessionWithCompletion:(id /* block */)completion;
- (void)stopSessionWithCompletion:(id /* block */)completion;
- (void)stopSessionAndAudio:(BOOL)audio withCompletion:(id /* block */)completion;
- (BOOL)isRunning;
- (void)disconnectSession;
- (id)videoFilterChainInput;
- (id)videoFilterChainOutput;
- (id)audioFilterChainInput;
- (id)audioFilterChainOutput;
- (BOOL)isOnlyIdentityVideoFilterActive;
- (id)_requiredFilterResourcesForFilterWithName:(id)name;
- (void)logCurrentFilterPerformanceWithReason:(id)reason parameters:(id)parameters;
- (void)filterTopologyDidChange;
- (void)_didCompleteFetchingPerformanceForFilters:(id)filters perfMap:(id)map reason:(id)reason parameters:(id)parameters;
- (id)filterPerformanceExtras;
- (void)sessionDidStart;
- (void)sessionDidStop;
- (void)attachCaptureGestureRecognizersToView:(id)view;
- (void)removeCaptureGestureRecognizersFromView:(id)view;
- (void)setContentRectInPreview:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preview;
- (void)setGestureCaptureControllerDelegate:(id)delegate;
- (void)setAnalyticsProductName:(unsigned long long)name;
- (id)defaultInputForDataPipe:(id)pipe;
- (void)mountCaptureMode:(id)mode completion:(id /* block */)completion;
- (void)exportFilterConfigsWithCompletion:(id /* block */)completion;
- (void)updateInputCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect completion:(id /* block */)completion;
- (void)setVideoBufferCallbackWithQueue:(id)queue completion:(id /* block */)completion;
- (void)setAudioBufferCallbackWithQueue:(id)queue completion:(id /* block */)completion;
@end

#endif /* FBCaptureCoordinatorBase_h */