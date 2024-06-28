//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SCPSelfieCaptureFlowController_h
#define SCPSelfieCaptureFlowController_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "SCPSelfieCaptureFlowControllerConfiguration.h"
#include "SCPSelfieCaptureFlowControllerStateHandler.h"

@class NSString;
@protocol SCPSelfieCaptureFlowControllerDataSource, SCPSelfieCaptureFlowControllerDelegate;

@interface SCPSelfieCaptureFlowController : NSObject<NSObject>

@property (readonly, nonatomic) SCPSelfieCaptureFlowControllerStateHandler *stateHandler;
@property (weak, nonatomic) NSObject<SCPSelfieCaptureFlowControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<SCPSelfieCaptureFlowControllerDataSource> *dataSource;
@property (readonly, nonatomic) SCPSelfieCaptureFlowControllerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)startFlow;
- (void)appWillGoAway;
- (void)selfieCaptureFlowControllerStateHandler:(id)handler didChangeState:(id)state toState:(id)state;
- (void)captureViewControllerDidFinishFlow:(id)flow capturedData:(id)data;
- (BOOL)debugOverlayEnabledForCaptureViewController:(id)controller;
- (void)onboardingViewControllerDidCompleteOnboarding:(id)onboarding;
- (void)retakeVideoButtonPressedInCaptureConfirmationViewController:(id)controller;
- (void)confirmationViewControllerDidFinishFlow:(id)flow;
- (void)confirmationViewControllerDidCancelFlow:(id)flow;
- (void)permissionGrantingViewControllerDidFinishGrantingPermissions:(id)permissions wasCameraPermissionGranted:(BOOL)granted;
- (void)permissionGrantingViewControllerCannotModifyPermissions:(id)permissions shouldOpenIOSSettingsApp:(BOOL)app;
- (void)permissionGrantingViewControllerDidDeclineGrantingPermissions:(id)permissions;
- (void)navigationDidPopViewController:(id)controller currentlyVisibleViewController:(id)controller;
- (void)navigationDidEndFlow:(id)flow cancelled:(BOOL)cancelled;
@end

#endif /* SCPSelfieCaptureFlowController_h */