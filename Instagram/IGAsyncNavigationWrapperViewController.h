//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAsyncNavigationWrapperViewController_h
#define IGAsyncNavigationWrapperViewController_h
@import Foundation;

#include "UIViewController.h"

@class IGActionableConfirmationToastPresenter, UIActivityIndicatorView;

@interface IGAsyncNavigationWrapperViewController : UIViewController {
  /* instance variables */
  id /* block */ _asyncProviderBlock;
  IGActionableConfirmationToastPresenter *_toastPresenter;
  UIActivityIndicatorView *_activityIndicator;
}

/* instance methods */
- (id)initWithAsyncProvider:(id /* block */)provider;
- (id)initWithAsyncProvider:(id /* block */)provider toastPresenter:(id)presenter;
- (void)viewDidLoad;
@end

#endif /* IGAsyncNavigationWrapperViewController_h */