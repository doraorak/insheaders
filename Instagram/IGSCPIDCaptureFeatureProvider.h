//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSCPIDCaptureFeatureProvider_h
#define IGSCPIDCaptureFeatureProvider_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGSCPIDCaptureFeatureProvider : NSObject<NSObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)isOnboardingEnabled;
- (BOOL)isFeatureLevelOverrideEnabled;
- (BOOL)shouldHideIDFrameInManualCaptureMode;
- (unsigned long long)getFeatureLevelOverride;
- (BOOL)isSecondaryPhotoWithFlashEnabled;
- (BOOL)isPostCaptureCVValidationEnabled;
- (BOOL)isHybridModeEnabled;
- (BOOL)isNewUIWithCustomAspectRatioEnabled;
- (long long)fileSizeLimit;
- (BOOL)isPyTorchCropperEnabled;
- (id)modelPath;
- (BOOL)isCreditCardScannerEnabled;
- (id)creditCardModels;
- (BOOL)isNewPermissionUIEnabled;
- (BOOL)isCreditCardModelsLoaderEnabled;
- (id)creditCardScanningModelsLoader;
- (BOOL)shouldSkipReviewScreen;
- (BOOL)shouldUseVisionFramework;
- (BOOL)isCancelConfirmationActionSheetEnabled;
@end

#endif /* IGSCPIDCaptureFeatureProvider_h */
