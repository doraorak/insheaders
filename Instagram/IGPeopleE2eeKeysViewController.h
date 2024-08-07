//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPeopleE2eeKeysViewController_h
#define IGPeopleE2eeKeysViewController_h
@import Foundation;

#include "UIViewController.h"

@interface IGPeopleE2eeKeysViewController : UIViewController { // (Swift)
  /* instance variables */
   e2eeSubtitleString;
   items;
   dataSource;
   collectionView;
   $__lazy_storage_$_adapter;
}

/* instance methods */
- (id)initWithViewModelPipe:(id)pipe currentUserKey:(id)key userDataSource:(id)source;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;
@end

#endif /* IGPeopleE2eeKeysViewController_h */
