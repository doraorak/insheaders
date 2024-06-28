//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAlertActionBar_h
#define IGAlertActionBar_h
@import Foundation;

#include "IGAlertBar.h"

@class UITapGestureRecognizer;

@interface IGAlertActionBar : IGAlertBar {
  /* instance variables */
  BOOL _shouldDismissOnTap;
  id /* block */ _tapActionBlock;
  id /* block */ _completeBlock;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;

/* class methods */
+ (id)sharedAlertBar;

/* instance methods */
- (id)init;
- (void)willMoveToWindow:(id)window;
- (void)_handleTap:(id)tap;
- (void)didShowAlertView;
- (void)didHideAlertView;
- (double)displayDuration;
@end

#endif /* IGAlertActionBar_h */
