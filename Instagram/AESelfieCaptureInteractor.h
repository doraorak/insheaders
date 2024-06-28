//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AESelfieCaptureInteractor_h
#define AESelfieCaptureInteractor_h
@import Foundation;

#include "AEFaceAlignmentDirection.h"
#include "AEFaceTrackerResult.h"
#include "AESelfieCaptureChallengeConfiguration.h"
#include "AESelfieCaptureInteractorState.h"
#include "NSObject-Protocol.h"
#include "SCPDiagnosticData.h"
#include "SCPTimer.h"

@class NSData, NSString, UIImage;
@protocol AEFaceTracking, AESelfieCaptureFeatureProviding, AESelfieCaptureInteractorDelegate, AESelfieCaptureInteractorStateHandling, AESelfieCaptureLogging, AESelfieCaptureTranslationProviding, OS_dispatch_queue, SCPFrameProviding;

@interface AESelfieCaptureInteractor : NSObject<NSObject> {
  /* instance variables */
  UIImage *_latestAlignedFrameImage;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _latestAlignedFaceRect;
  int _currentFrameIndex;
  AESelfieCaptureInteractorState *_previousLoggedState;
  double _originalBrightness;
  BOOL _isIdleTimerDisabledOnEntry;
  NSObject<AEFaceTracking> *_faceTracker;
  AESelfieCaptureChallengeConfiguration *_challengeConfiguration;
  long long _numberOfWrongMoves;
  AEFaceAlignmentDirection *_lastWrongAlignmentDirection;
  UIImage *_lastFrameImage;
  SCPDiagnosticData *_lastDiagnosticData;
  SCPTimer *_goToNextDirectionTimer;
  SCPTimer *_maxCaptureDurationTimer;
  NSData *_capturedImageData;
  NSObject<OS_dispatch_queue> *_processingQueue;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _beginFaceAlignmentRect;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _failFaceAlignmentRect;
}

@property (readonly, nonatomic) NSObject<AESelfieCaptureInteractorStateHandling> *stateHandler;
@property (readonly, nonatomic) NSObject<AESelfieCaptureTranslationProviding> *translationProvider;
@property (readonly, nonatomic) NSObject<AESelfieCaptureFeatureProviding> *featureProvider;
@property (readonly, nonatomic) NSObject<SCPFrameProviding> *frameProvider;
@property (readonly, nonatomic) NSObject<AESelfieCaptureLogging> *logger;
@property (retain, nonatomic) AEFaceTrackerResult *lastResult;
@property (nonatomic) struct CGSize { double x0; double x1; } previewSize;
@property (weak, nonatomic) NSObject<AESelfieCaptureInteractorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStateHandler:(id)handler faceTracker:(id)tracker challengeConfiguration:(id)configuration translationProvider:(id)provider featureProvider:(id)provider frameProvider:(id)provider logger:(id)logger;
- (id)currentState;
- (void)updateBeginFaceAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect failFaceAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect previewSize:(struct CGSize { double x0; double x1; })size;
- (void)selfieCaptureInteractorStateHandler:(id)handler didChangeStateFromState:(id)state toState:(id)state;
- (void)selfieCaptureInteractorStateHandler:(id)handler didChangeFaceAlignment:(id)alignment;
- (void)handleAligningFinished;
- (void)frameProvider:(id)provider didFailPreparingWithError:(id)error;
- (void)frameProvider:(id)provider didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)buffer withPreviewRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region;
- (void)frameProviderDidReset:(id)reset;
@end

#endif /* AESelfieCaptureInteractor_h */