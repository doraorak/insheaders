//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MAIImagineMEmuOnboardingCameraCapture_h
#define MAIImagineMEmuOnboardingCameraCapture_h
@import Foundation;

#include "MAIImagineMEmuOnboardingCameraCaptureDelegate-Protocol.h"
#include "MAIImagineMEmuOnboardingCameraCapturePreviewProtocol-Protocol.h"
#include "MAIImagineMEmuOnboardingCameraCaptureProtocol-Protocol.h"
#include "OCMComponentConfigurating-Protocol.h"
#include "OCMComponentManagingContext-Protocol.h"

@class NSString;

@interface MAIImagineMEmuOnboardingCameraCapture : NSObject<OCMComponentConfigurating, MAIImagineMEmuOnboardingCameraCaptureProtocol, MAIImagineMEmuOnboardingCameraCapturePreviewProtocol> {
  /* instance variables */
  NSObject<OCMComponentManagingContext> *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MAIImagineMEmuOnboardingCameraCaptureDelegate> *captureDelegate;
@property (readonly, nonatomic) NSString *name;
@optional
@property (readonly, nonatomic) BOOL supportsBackgroundProcessing;
@optional
@property (readonly, nonatomic) BOOL isRotationLocked;

/* instance methods */
- (id)_photoCaptureComponent;
- (id)_previewComponent;
- (void)toggleCameraPosition;
- (void)takePicture;
- (void)captureButtonDidBeginExpandingWithController:(id)controller;
- (void)captureButtonDidReleaseAfterExpandingFinishedWithController:(id)controller;
- (void)captureButtonDidReleaseBeforeExpandingFinishedWithController:(id)controller;
- (void)captureButtonDidReleaseFromInterruptionWithController:(id)controller;
- (void)captureButtonDidTouchDownWithController:(id)controller;
- (id)componentID;
- (id)dependentComponentIDs;
- (long long)supportedControllerStates;
- (void)didAttachWithContext:(id)context;
- (void)willDetachWithContext:(id)context;
- (BOOL)makeChangesToConfiguration:(struct FBCaptureCoordinatorConfiguration *)configuration;
- (BOOL)revertChangesToConfiguration:(struct FBCaptureCoordinatorConfiguration *)configuration;
- (id)captureMode;
- (id)previewView;
@end

#endif /* MAIImagineMEmuOnboardingCameraCapture_h */