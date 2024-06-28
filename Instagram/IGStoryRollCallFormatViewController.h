//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryRollCallFormatViewController_h
#define IGStoryRollCallFormatViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGCameraViewController.h"
#include "IGCameraViewControllerSampleBufferObserver-Protocol.h"
#include "IGCreationNavigationPresentable-Protocol.h"
#include "IGQuickCamCaptureButtonDelegate-Protocol.h"
#include "IGStoryFormatViewControllerProtocol-Protocol.h"
#include "IGStoryFormatViewControllerProtocolDelegate-Protocol.h"
#include "IGStoryRollCallLayoutView.h"
#include "IGStoryRollCallTimeBoxController.h"

@class IGAsyncTask, IGCountdownController, IGUserSession, NSDate, NSString, UIImage, UIImageView, UIView;
@protocol UIViewController<IGStoryCameraOverlayViewControlling;

@interface IGStoryRollCallFormatViewController : UIViewController<IGCameraViewControllerSampleBufferObserver, IGQuickCamCaptureButtonDelegate, IGStoryFormatViewControllerProtocol> {
  /* instance variables */
  UIView *_contentView;
  IGStoryRollCallLayoutView *_layoutView;
  IGUserSession *_userSession;
  UIImageView *_captureImage;
  UIImage *_firstFrameOfVideoCapture;
  IGAsyncTask *_videoCreationTask;
  long long _selectedCreationFormat;
  BOOL _shouldCaptureSecondPhotoInDualMode;
  BOOL _isAttemptingSecondCapture;
  IGStoryRollCallTimeBoxController *_timeboxController;
  NSDate *_timeboxEnd;
  NSDate *_countDownStartTime;
  IGCountdownController *_countdownController;
  struct { IGStrictUserFlowLogger *strictLogger; unsigned long long userFlowInstanceId; } _recordingLoggerStruct;
  struct { IGStrictUserFlowLogger *strictLogger; unsigned long long userFlowInstanceId; } _photoCaptureLoggerStruct;
  double _captureButtonTapTime;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRegion;
  BOOL _isolateView;
}

@property (retain, nonatomic) IGCameraViewController *cameraViewController;
@property (retain, nonatomic) UIViewController<IGStoryCameraOverlayViewControlling> *overlayViewController;
@property (weak, nonatomic) NSObject<IGStoryFormatViewControllerProtocolDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long prefersBottomLeftButtonType;
@property (readonly, nonatomic) BOOL isManagingCameraView;
@property (readonly, nonatomic) BOOL requiresCameraAccess;
@property (copy, nonatomic) id /* block */ galleryViewControllerProvider;
@property (retain, nonatomic) NSObject<IGCreationNavigationPresentable> *creationPresenter;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)disappear;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)storyFormatViewControllerDidAppear:(BOOL)appear;
- (void)storyFormatViewControllerWillAppear:(BOOL)appear;
- (void)storyFormatViewControllerWillDisappear:(BOOL)disappear;
- (void)storyFormatViewControllerDidDisappear:(BOOL)disappear;
- (void)didDismissPostCaptureWithoutSharing;
- (void)didDismissPostCaptureBySharing;
- (void)hideAREffectInstructions;
- (void)showAREffectTextInstructions:(id)instructions;
- (void)showAREffectTextInstructions:(id)instructions forDuration:(double)duration;
- (void)cameraViewController:(id)controller captureDidBecomeAvailable:(BOOL)available;
- (void)cameraViewController:(id)controller didChangeLightingMode:(long long)mode;
- (void)cameraViewController:(id)controller willSwitchFromCameraPosition:(long long)position;
- (void)cameraViewController:(id)controller didSwitchToCameraPosition:(long long)position withUserInput:(unsigned long long)input;
- (void)cameraViewControllerDidReceiveFirstFrame:(id)frame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cameraViewControllerSafeAreaInsets:(id)insets;
- (void)cameraViewControllerWillStopRecording:(id)recording;
- (void)cameraViewController:(id)controller startAudioSessionDidError:(id)error;
- (void)cameraViewControllerDidStartCameraSwitch:(id)switch;
- (void)cameraViewController:(id)controller didStartCaptureSessionWithCameraPosition:(long long)position cameraOrientation:(long long)orientation;
- (void)cameraViewController:(id)controller didReceiveFirstFrameAfterSwitchingCamerasWithCameraPosition:(long long)position cameraOrientation:(long long)orientation;
- (void)cameraViewControllerDidStopCapture:(id)capture;
- (void)cameraViewControllerWillRequestStartRecording:(id)recording;
- (void)cameraViewControllerDidRequestStartRecording:(id)recording;
- (void)cameraViewControllerDidStartRecording:(id)recording timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp;
- (void)cameraViewControllerDidStopRecording:(id)recording timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration error:(id)error;
- (void)cameraViewController:(id)controller didUpdateRecordProgress:(double)progress;
- (void)cameraViewController:(id)controller didFinishWithBoomerangManager:(id)manager;
- (void)cameraViewControllerWantsDisableOfMultiCam:(id)cam;
- (void)cameraViewController:(id)controller didFinishWithDevicePosition:(long long)position videoInfos:(id)infos images:(id)images;
- (void)cameraViewController:(id)controller failedToCapturePhotoWithError:(id)error;
- (void)cameraViewControllerDidUpdateLightingCapability:(id)capability;
- (void)cameraViewController:(id)controller didToggleHDR:(BOOL)hdr;
- (void)cameraViewController:(id)controller didChangeCameraState:(long long)state;
- (void)cameraViewControllerDidPauseRecording:(id)recording timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp;
- (void)cameraViewControllerDidResumeRecording:(id)recording timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp;
- (void)cameraViewController:(id)controller willProcessVideoBuffer:(struct opaqueCMSampleBuffer *)buffer metadata:(id)metadata;
- (void)cameraViewController:(id)controller didReceiveProcessedVideoBuffer:(struct opaqueCMSampleBuffer *)buffer metadata:(id)metadata;
- (void)cameraViewController:(id)controller didReceiveAudioBuffer:(struct opaqueCMSampleBuffer *)buffer withVolumeLevel:(float)level;
- (void)captureButtonDidReleaseBeforeExpandingFinished;
- (void)captureButtonDidTouchDown;
- (void)captureButtonDidReleaseAfterExpandingFinished;
- (void)captureButtonDidReleaseFromInterruption;
- (void)captureButtonDidBeginExpanding;
- (void)captureButtonDidEndExpanding;
- (void)captureButtonDidConfirm;
- (void)pickerButtonDidExpandPicker:(id)picker;
- (void)pickerButtonDidCollapsePicker:(id)picker;
- (void)pickerButton:(id)button didSelectItemAtIndex:(unsigned long long)index;
- (void)countdownController:(id)controller didCountTo:(long long)to;
- (void)countdownControllerDidInvalidateTimer:(id)timer;
- (void)timeboxController:(id)controller didCountTo:(long long)to;
- (void)timeboxControllerDidInvalidateTimer:(id)timer;
- (void)_handleDoubleTap:(id)tap;
- (void)_handleSingleTap:(id)tap;
- (id)analyticsModule;
- (void)_applicationWillResignActive:(id)active;
- (void)_applicationDidBecomeActive:(id)active;
@end

#endif /* IGStoryRollCallFormatViewController_h */