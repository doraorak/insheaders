//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SCPSelfieCaptureViewController_h
#define SCPSelfieCaptureViewController_h
@import Foundation;

#include "UIViewController.h"
#include "NSObject-Protocol.h"
#include "SCPContextualFeedbackController.h"
#include "SCPDiagnosticView.h"
#include "SCPFaceAlignment.h"
#include "SCPPopupController.h"
#include "SCPSelfieCaptureCameraView.h"
#include "SCPSelfieCaptureFeedbackCoordinator.h"
#include "SCPSelfieCaptureFeedbackLabelsView.h"
#include "SCPSelfieCaptureInteractorState.h"
#include "SCPSelfieCapturePresenter.h"

@class NSString, UIView;
@protocol SCPFrameProviding, SCPSelfieCaptureViewControllerDelegate;

@interface SCPSelfieCaptureViewController : UIViewController<NSObject> {
  /* instance variables */
  BOOL _useBackgroundView;
  BOOL _canUpdateState;
  SCPSelfieCaptureFeedbackCoordinator *_feedbackCoordinator;
  SCPSelfieCaptureFeedbackLabelsView *_feedbackLabelsView;
  SCPDiagnosticView *_diagnosticView;
  SCPFaceAlignment *_lastAlignment;
  long long _originalStatusBarStyle;
  SCPPopupController *_requirementsPopupController;
  SCPContextualFeedbackController *_contextualFeedbackController;
  NSString *_nSecondsLeftString;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) SCPSelfieCaptureCameraView *cameraView;
@property (readonly, nonatomic) SCPSelfieCaptureInteractorState *currentState;
@property (retain, nonatomic) SCPSelfieCapturePresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SCPSelfieCaptureViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSObject<SCPFrameProviding> *frameProvider;

/* instance methods */
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)showCaptureRequirements;
- (void)initializeViews;
- (void)willTransitionToTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
- (void)configureConstraints;
- (void)updateState:(id)state;
- (unsigned long long)supportedInterfaceOrientations;
- (void)requirementsButtonPressed;
- (void)viewDidLayoutSubviews;
- (void)selfieCapturePresenter:(id)presenter didChangeState:(id)state toState:(id)state;
- (void)selfieCapturePresenter:(id)presenter didFailWithError:(id)error;
- (void)selfieCapturePresenter:(id)presenter didUpdateDiagnosticData:(id)data;
- (void)selfieCapturePresenter:(id)presenter requestedToShowContextualFeedbackWithMessageTitle:(id)title messageBody:(id)body okButtonTitle:(id)title;
- (void)selfieCapturePresenter:(id)presenter nSecondsLeft:(long long)left;
- (void)selfieCapturePresenterDidRunOutOfTime:(id)time;
- (void)contextualFeedbackControllerDidFinishPresenting:(id)presenting;
- (void)outOfTimeViewControllerCalledCaptureRestart:(id)restart;
- (void)outOfTimeViewControllerCalledShowRequirements:(id)requirements;
@end

#endif /* SCPSelfieCaptureViewController_h */
