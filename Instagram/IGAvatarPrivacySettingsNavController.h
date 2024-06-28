//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAvatarPrivacySettingsNavController_h
#define IGAvatarPrivacySettingsNavController_h
@import Foundation;

#include "UINavigationController.h"

@interface IGAvatarPrivacySettingsNavController : UINavigationController {
  /* instance variables */
  id /* block */ _completion;
}

/* class methods */
+ (id)newWithCompletionCallback:(id /* block */)callback;

/* instance methods */
- (id)popViewControllerAnimated:(BOOL)animated;
@end

#endif /* IGAvatarPrivacySettingsNavController_h */