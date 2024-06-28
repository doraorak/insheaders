//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MAIAppStoreContainerViewController_Legacy_h
#define MAIAppStoreContainerViewController_Legacy_h
@import Foundation;

#include "UIViewController.h"
#include "MAISKStoreProductViewController_Legacy.h"

@class NSString;

@interface MAIAppStoreContainerViewController_Legacy : UIViewController {
  /* instance variables */
  MAISKStoreProductViewController_Legacy *_storeProductViewController;
}

@property (readonly, copy, nonatomic) NSString *analyticsModule;

/* instance methods */
- (id)initWithStoreProductViewController:(id)controller analyticsModule:(id)module;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillLayoutSubviews;
@end

#endif /* MAIAppStoreContainerViewController_Legacy_h */