//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SCPIDCaptureRequirementsViewControllerConfiguration_h
#define SCPIDCaptureRequirementsViewControllerConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSString;
@protocol SCPIDCaptureUITheming;

@interface SCPIDCaptureRequirementsViewControllerConfiguration : NSObject<NSCopying> {
  /* instance variables */
  BOOL _shouldHideManualCaptureSwitch;
  NSString *_surfaceRequirementTitle;
  NSString *_surfaceRequirementExplanation;
  NSString *_lightingRequirementTitle;
  NSString *_lightingRequirementExplanation;
  NSString *_frameRequirementTitle;
  NSString *_frameRequirementExplanation;
  NSString *_manualFallbackTitle;
  NSString *_manualFallbackExplanation;
  NSArray *_requirementsExplanationImageViews;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL isAutoCaptureOn;
@property (readonly, nonatomic) NSObject<SCPIDCaptureUITheming> *uiTheme;

/* instance methods */
- (id)initWithTitle:(id)title surfaceRequirementTitle:(id)title surfaceRequirementExplanation:(id)explanation lightingRequirementTitle:(id)title lightingRequirementExplanation:(id)explanation frameRequirementTitle:(id)title frameRequirementExplanation:(id)explanation manualFallbackTitle:(id)title manualFallbackExplanation:(id)explanation isAutoCaptureOn:(BOOL)on requirementsExplanationImageViews:(id)views uiTheme:(id)theme shouldHideManualCaptureSwitch:(BOOL)switch;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SCPIDCaptureRequirementsViewControllerConfiguration_h */