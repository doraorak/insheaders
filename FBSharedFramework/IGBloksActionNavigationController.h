//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksActionNavigationController_h
#define IGBloksActionNavigationController_h
@import Foundation;

#include "IGNavigationController.h"

@interface IGBloksActionNavigationController : IGNavigationController {
  /* instance variables */
  id /* block */ _tapAction;
  id /* block */ _dismissBlock;
}

/* instance methods */
- (id)initWithAnalyticsModule:(id)module tapAction:(id /* block */)action dismissBlock:(id /* block */)block;
- (long long)preferredStatusBarStyle;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (void)presentViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)dismissViewControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)_tapped:(id)_tapped;
@end

#endif /* IGBloksActionNavigationController_h */
