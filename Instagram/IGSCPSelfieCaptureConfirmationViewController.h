//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSCPSelfieCaptureConfirmationViewController_h
#define IGSCPSelfieCaptureConfirmationViewController_h
@import Foundation;

#include "SCPSelfieCaptureConfirmationViewController.h"
#include "IGAPIClient-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGMediaUploaderDelegate-Protocol.h"

@class IGMediaUploader, IGSessionContext, IGStepperHeaderControl, IGTextButton, NSNumber, NSString, UIBarButtonItem, UILabel;

@interface IGSCPSelfieCaptureConfirmationViewController : SCPSelfieCaptureConfirmationViewController<IGMediaUploaderDelegate, IGAnalyticsModule> {
  /* instance variables */
  IGSessionContext *_context;
  NSString *_challengeID;
  NSString *_product;
  IGTextButton *_submitButton;
  UIBarButtonItem *_cancelButton;
  UIBarButtonItem *_backButton;
  IGMediaUploader *_photoUploader;
  IGMediaUploader *_videoUploader;
  NSString *_instanceID;
  NSString *_userID;
  NSString *_userFbID;
  NSString *_entityID;
  NSNumber *_flowID;
  NSString *_avSessionID;
  NSString *_ageVerificationResult;
  BOOL _uploadPhotoAfterVideo;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  NSObject<IGAPIClient> *_networker;
  BOOL _isProgressBarEnabled;
  IGStepperHeaderControl *_stepperHeaderControl;
  UILabel *_footerText;
  BOOL _reinforce_deletion;
  NSString *_productSurface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context challengeID:(id)id product:(id)product userFbID:(id)id instanceID:(id)id entityID:(id)id flowID:(id)id avSessionID:(id)id isProgressBarEnabled:(BOOL)enabled productSurface:(id)surface;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)mediaUploaderDidSucceed:(id)succeed withResponse:(id)response;
- (void)mediaUploader:(id)uploader didFailWithReason:(id)reason;
- (void)mediaUploader:(id)uploader didChangeProgress:(double)progress;
- (void)_didTapOnSubmitButton;
- (void)_didTapOnCancelButton;
- (void)_didTapOnBackButton;
- (id)analyticsModule;
@end

#endif /* IGSCPSelfieCaptureConfirmationViewController_h */
