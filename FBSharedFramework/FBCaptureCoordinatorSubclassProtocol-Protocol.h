//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCaptureCoordinatorSubclassProtocol_Protocol_h
#define FBCaptureCoordinatorSubclassProtocol_Protocol_h
@import Foundation;

@protocol FBCaptureCoordinatorSubclassProtocol <NSObject>

@property (readonly, copy, nonatomic) NSArray *currentFilters;
@property (readonly, nonatomic) FBCaptureCoordinatorFilter *currentAudioFilter;
@property (readonly, nonatomic) NSObject<FBMPRendering> *filterRenderer;
@property (readonly, nonatomic) NSObject<FBMPFilter> *filterAudioRenderer;
@property (readonly, nonatomic) NSObject<FBCaptureCoordinatorFilterFactoryProtocol> *filterFactory;
@property (readonly, nonatomic) FBCaptureCoordinatorFilterResourcesManager *filterResourcesManager;
@property (readonly, nonatomic) FBMPSession *mediaSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) FBMPCameraInfoInput *cameraInfoInput;
@property (readonly, nonatomic) FBMPCaptureEventInput *captureEventInput;
@property (readonly, nonatomic) FBCCGestureCaptureController *gestureCaptureController;

/* instance methods */
- (id)initWithFilterFactory:(id)factory captureCoordinatorLogger:(id)logger rendererConfiguration:(const struct FBRendererConfiguration *)configuration gestureConfiguration:(const struct FBGestureConfiguration *)configuration filterDownloader:(id)downloader;
- (void)disconnectSession;
- (void)logCurrentFilterPerformanceWithReason:(id)reason parameters:(id)parameters;
- (void)filterTopologyDidChange;
- (id)firstFilter;
- (id)lastFilter;
- (id)videoFilterChainInput;
- (id)videoFilterChainOutput;
- (id)audioFilterChainInput;
- (id)audioFilterChainOutput;
@end

#endif /* FBCaptureCoordinatorSubclassProtocol_Protocol_h */