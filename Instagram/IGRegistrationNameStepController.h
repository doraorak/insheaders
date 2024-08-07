//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationNameStepController_h
#define IGRegistrationNameStepController_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGRegistrationFlowContext, NSString;
@protocol IGRegistrationCoordinatorProtocol;

@interface IGRegistrationNameStepController : NSObject<NSObject> {
  /* instance variables */
  IGRegistrationFlowContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGRegistrationCoordinatorProtocol> *coordinator;

/* class methods */
+ (BOOL)isValidForContext:(id)context;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)viewController;
- (id)stepName;
- (void)signupViewControllerDidTapBackButton:(id)button;
- (void)signupViewControllerDidTapLoginButton:(id)button;
- (void)signupViewControllerDidTapNextButton:(id)button withFullName:(id)name password:(id)password savePasswordEnabled:(BOOL)enabled;
- (BOOL)signupViewControllerIsSwitchingUsers;
- (long long)registrationFlowForSignUpViewController:(id)controller;
- (void)signupVCDidTapNextButton:(id)button;
- (void)signupVCDidFocusFullNameTextField:(id)field;
- (void)signupVCDidFocusPasswordTextField:(id)field;
- (void)signupVCDidExceedNameCharacterLimit:(id)limit;
@end

#endif /* IGRegistrationNameStepController_h */
