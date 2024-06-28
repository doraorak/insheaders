//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTWrapperViewController_h
#define RCTWrapperViewController_h
@import Foundation;

#include "UIViewController.h"

@class UIView;

@interface RCTWrapperViewController : UIViewController {
  /* instance variables */
  UIView *_wrapperView;
  UIView *_contentView;
  double _previousTopInset;
  double _previousBottomInset;
  double _currentTopInset;
  double _currentBottomInset;
}

/* instance methods */
- (id)initWithContentView:(id)view;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)loadView;
@end

#endif /* RCTWrapperViewController_h */
