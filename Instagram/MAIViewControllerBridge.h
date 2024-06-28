//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MAIViewControllerBridge_h
#define MAIViewControllerBridge_h
@import Foundation;

#include "UIViewController.h"

@interface MAIViewControllerBridge : UIViewController

@property (copy, nonatomic) id /* block */ viewDidLoadCallback;
@property (copy, nonatomic) id /* block */ viewWillAppearCallback;
@property (copy, nonatomic) id /* block */ viewDidAppearCallback;
@property (copy, nonatomic) id /* block */ viewWillDisappearCallback;
@property (copy, nonatomic) id /* block */ viewDidDisappearCallback;

/* instance methods */
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
@end

#endif /* MAIViewControllerBridge_h */
