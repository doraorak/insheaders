//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC16IGCreatorAILinks34IGCreatorAILinksListViewController_h
#define _TtC16IGCreatorAILinks34IGCreatorAILinksListViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC16IGCreatorAILinks34IGCreatorAILinksListViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   creatorFBID;
   contentInsetsOverride;
   modelCount;
   currentModels;
   hasNextPage;
   isFetchingNextPage;
   lastFetchedCursor;
   currentVC;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredContentInsets;

/* instance methods */
- (id)title;
- (id)accessibilityLabel;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC16IGCreatorAILinks34IGCreatorAILinksListViewController_h */