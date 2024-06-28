//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPBIAProxyProfileLearnMoreController_h
#define IGPBIAProxyProfileLearnMoreController_h
@import Foundation;

#include "IGPBIAProxyProfileLearnMoreInfoModel.h"

@class IGPopoverController, IGUserSession, UIViewController;

@interface IGPBIAProxyProfileLearnMoreController : NSObject {
  /* instance variables */
  IGPBIAProxyProfileLearnMoreInfoModel *_model;
  IGUserSession *_userSession;
  UIViewController *_presentingViewController;
  IGPopoverController *_alertPopoverController;
}

/* instance methods */
- (id)initWithLearnMoreModel:(id)model userSession:(id)session presentingViewController:(id)controller;
@end

#endif /* IGPBIAProxyProfileLearnMoreController_h */
