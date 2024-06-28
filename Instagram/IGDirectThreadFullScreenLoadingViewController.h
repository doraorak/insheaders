//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadFullScreenLoadingViewController_h
#define IGDirectThreadFullScreenLoadingViewController_h
@import Foundation;

#include "UIViewController.h"

@class UIActivityIndicatorView, UIColor;

@interface IGDirectThreadFullScreenLoadingViewController : UIViewController {
  /* instance variables */
  UIActivityIndicatorView *_spinnerView;
  UIColor *_backgroundColor;
}

/* instance methods */
- (id)initWithBackgroundColor:(id)color;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)dismiss;
@end

#endif /* IGDirectThreadFullScreenLoadingViewController_h */