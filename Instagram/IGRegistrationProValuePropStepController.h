//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationProValuePropStepController_h
#define IGRegistrationProValuePropStepController_h
@import Foundation;

#include "IGProValuePropositionViewController.h"
#include "NSObject-Protocol.h"

@class IGProAccountLoggingProvider, IGRegistrationFlowContext, NSString;
@protocol IGRegistrationCoordinatorProtocol;

@interface IGRegistrationProValuePropStepController : NSObject<NSObject> {
  /* instance variables */
  IGProAccountLoggingProvider *_loggingProvider;
  IGProValuePropositionViewController *_valuePropViewController;
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
- (void)valuePropositionViewControllerDidFinish;
- (void)valuePropositionViewControllerDidCancelWithModalDismiss:(BOOL)dismiss;
@end

#endif /* IGRegistrationProValuePropStepController_h */