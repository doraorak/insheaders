//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGSundialStackedTimeline50IGSundialStackedTimelineColorFiltersViewController_h
#define _TtC24IGSundialStackedTimeline50IGSundialStackedTimelineColorFiltersViewController_h
@import Foundation;

#include "UIViewController.h"

@interface _TtC24IGSundialStackedTimeline50IGSundialStackedTimelineColorFiltersViewController : UIViewController { // (Swift)
  /* instance variables */
   allFilterViews;
   allImages;
   allImageLabels;
   composition;
   userSession;
   selectedIndex;
   currentColorFilterIndex;
   initialColorFilterIndex;
   delegate;
   $__lazy_storage_$_contentCollectionView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;
@end

#endif /* _TtC24IGSundialStackedTimeline50IGSundialStackedTimelineColorFiltersViewController_h */