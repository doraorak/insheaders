//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerLoadingSectionController_h
#define IGSundialViewerLoadingSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGSundialViewerLoadingModel.h"

@class IGImmersiveFeedConfiguration;

@interface IGSundialViewerLoadingSectionController : IGListSectionController {
  /* instance variables */
  BOOL _alwaysShowTabBar;
  IGImmersiveFeedConfiguration *_immersiveFeedConfiguration;
  IGSundialViewerLoadingModel *_loadingModel;
}

/* instance methods */
- (id)initWithAlwaysShowTabBar:(BOOL)bar immersiveFeedConfiguration:(id)configuration;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)didUpdateToObject:(id)object;
@end

#endif /* IGSundialViewerLoadingSectionController_h */
