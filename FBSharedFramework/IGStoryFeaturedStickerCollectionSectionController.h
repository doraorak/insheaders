//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFeaturedStickerCollectionSectionController_h
#define IGStoryFeaturedStickerCollectionSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGStoryFeaturedStickerCollectionSectionControllerDelegate-Protocol.h"

@interface IGStoryFeaturedStickerCollectionSectionController : IGListSectionController { // (Swift)
  /* instance variables */
   layoutConfig;
   userSession;
   cellConfig;
}

@property (nonatomic, weak) NSObject<IGStoryFeaturedStickerCollectionSectionControllerDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session layoutConfig:(struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; })config cellConfig:(id)config;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (id)init;
@end

#endif /* IGStoryFeaturedStickerCollectionSectionController_h */
