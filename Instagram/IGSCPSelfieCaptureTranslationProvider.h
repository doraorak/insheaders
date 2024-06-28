//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSCPSelfieCaptureTranslationProvider_h
#define IGSCPSelfieCaptureTranslationProvider_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGSCPSelfieCaptureTranslationProvider : NSObject<NSObject> {
  /* instance variables */
  NSString *_product;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProduct:(id)product;
- (id)errorMessage_interactorGoToNextDirectionFailure;
- (id)errorMessage_interactorStateChangeFailureWithPreviousStateName:(id)name newStateName:(id)name;
- (id)errorMessage_presenterStateChangeFailureWithPreviousStateName:(id)name newStateName:(id)name;
- (id)privacyDisclaimer;
- (id)capturingScreenHintPerfect;
- (id)capturingScreenHintTurnLeft;
- (id)capturingScreenHintTurnRight;
- (id)capturingScreenHintTiltUp;
- (id)capturingScreenHintTiltDown;
- (id)capturingScreenHintAlignFaceWithOval;
- (id)capturingScreenHintLookingForFace;
- (id)capturingScreenContextualFeedbackMessageTitle;
- (id)capturingScreenContextualFeedbackMessageBody;
- (id)capturingScreenContextualFeedbackOkButtonTitle;
- (id)capturingScreenHelp;
- (id)confirmationScreenTitle;
- (id)confirmationScreenSubtitle;
- (id)confirmationScreenActionButtonTitle;
- (id)onboardingScreenActionButtonTitle;
- (id)onboardingScreenLastPageActionButtonTitle;
- (id)onboardingScreenTutorialTakeVideoSelfieTitle;
- (id)onboardingScreenTutorialTakeVideoSelfieSubtitle;
- (id)onboardingScreenTutorialFollowInstructionsTitle;
- (id)onboardingScreenTutorialFollowInstructionsSubtitle;
- (id)newCapturingScreenFeedbackPositionHeadTitle;
- (id)newCapturingScreenFeedbackPositionHeadSubtitle;
- (id)newCapturingScreenTimerSubtitle;
- (id)newCapturingScreenFeedbackTurnRight;
- (id)newCapturingScreenFeedbackTurnLeft;
- (id)newCapturingScreenFeedbackTiltUp;
- (id)newCapturingScreenFeedbackTiltDown;
- (id)newCapturingScreenFeedbackPerfect;
- (id)newCapturingScreenYouRunOutOfTime;
- (id)newCapturingScreenStartAgainButtonTitle;
- (id)newCapturingScreenNSecondsLeft:(long long)left;
- (id)selfieRequirementsPopoverTitle;
- (id)selfieRequirementsContentsTitle;
- (id)selfieRequirementsFirstReqTitle;
- (id)selfieRequirementsFirstReqContent;
- (id)selfieRequirementsSecondReqTitle;
- (id)selfieRequirementsSecondReqContent;
- (id)permissionsScreenTitleCamera;
- (id)permissionsScreenDescriptionCamera;
- (id)permissionsScreenAllowButtonTitle;
- (id)permissionsScreenDeclineButtonTitle;
- (id)permissionsScreenAlertCameraAccessTitle;
- (id)permissionsScreenAlertCameraAccessDescription;
- (id)permissionsScreenAlertNotNowButtonTitle;
- (id)permissionsScreenAlertOpenSettingsButtonTitle;
- (id)permissionScreenWhatThisMeanTitle;
- (id)permissionScreenWhatThisMeanBody;
- (id)permissionScreenHowWeUseItTitle;
- (id)permissionScreenHowWeUseItBody;
- (id)permissionScreenHowSettingsWorkTitle;
- (id)permissionScreenHowSettingsWorkBody;
- (id)confirmationScreenCancelActionSheetDiscardButtonTitle;
- (id)confirmationScreenCancelActionSheetBackButtonTitle;
- (id)confirmationScreenCancelActionSheetTitle;
- (id)confirmationScreenCancelActionSheetSubtitle;
- (id)errorMessage_generalError;
- (id)errorMessage_cameraFrameProviderFailedToObtainInput;
- (id)errorMessage_cameraFrameProviderCannotCaptureWhileRecordingVideo;
@end

#endif /* IGSCPSelfieCaptureTranslationProvider_h */
