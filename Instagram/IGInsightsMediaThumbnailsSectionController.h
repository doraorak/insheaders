//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInsightsMediaThumbnailsSectionController_h
#define IGInsightsMediaThumbnailsSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGInsightsMediaThumbnailsSectionControllerDelegate-Protocol.h"
#include "IGInsightsMediaThumbnailsViewModel.h"

@interface IGInsightsMediaThumbnailsSectionController : IGListSectionController

@property (weak, nonatomic) NSObject<IGInsightsMediaThumbnailsSectionControllerDelegate> *delegate;
@property (readonly, nonatomic) IGInsightsMediaThumbnailsViewModel *viewModel;

/* instance methods */
- (id)initWithLauncherSet:(id)set;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
@end

#endif /* IGInsightsMediaThumbnailsSectionController_h */
