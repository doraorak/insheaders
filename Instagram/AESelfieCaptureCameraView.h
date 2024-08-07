//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AESelfieCaptureCameraView_h
#define AESelfieCaptureCameraView_h
@import Foundation;

#include "UIView.h"
#include "AESelfieCaptureCameraViewState.h"

@class UIView;
@protocol AESelfieCaptureFeatureProviding, AESelfieCaptureTranslationProviding, AESelfieCaptureUITheming;

@interface AESelfieCaptureCameraView : UIView {
  /* instance variables */
  NSObject<AESelfieCaptureFeatureProviding> *_featureProvider;
  double _completionAnimationDurationSecs;
}

@property (readonly, nonatomic) UIView *cameraPreviewView;
@property (retain, nonatomic) NSObject<AESelfieCaptureUITheming> *uiTheme;
@property (retain, nonatomic) AESelfieCaptureCameraViewState *state;
@property (retain, nonatomic) NSObject<AESelfieCaptureTranslationProviding> *translationProvider;

/* instance methods */
- (id)initWithCameraPreviewView:(id)view uiTheme:(id)theme featureProvider:(id)provider;
- (void)initializeViews;
- (void)configureConstraints;
- (void)layoutSubviews;
@end

#endif /* AESelfieCaptureCameraView_h */
