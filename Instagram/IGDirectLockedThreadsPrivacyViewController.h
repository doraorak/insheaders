//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectLockedThreadsPrivacyViewController_h
#define IGDirectLockedThreadsPrivacyViewController_h
@import Foundation;

#include "UIViewController.h"

@class UIImageView;

@interface IGDirectLockedThreadsPrivacyViewController : UIViewController {
  /* instance variables */
  UIImageView *_logoImageView;
}

/* instance methods */
- (void)viewDidLoad;
- (void)_setupUI;
- (void)viewWillAppear:(BOOL)appear;
@end

#endif /* IGDirectLockedThreadsPrivacyViewController_h */