//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentToolsUpsellController_h
#define IGCommentToolsUpsellController_h
@import Foundation;

#include "IGCommentToolsUpsellModel.h"

@class IGActionableConfirmationToastController, IGUserSession, NSString, UIViewController;

@interface IGCommentToolsUpsellController : NSObject {
  /* instance variables */
  IGCommentToolsUpsellModel *_model;
  IGActionableConfirmationToastController *_toastController;
  IGUserSession *_userSession;
  NSString *_sourceModule;
  UIViewController *_presentingViewController;
}

/* instance methods */
- (id)initWithUpsellModel:(id)model userSession:(id)session sourceModule:(id)module presentingViewController:(id)controller;
@end

#endif /* IGCommentToolsUpsellController_h */
