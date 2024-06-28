//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdsManagerCarouselElementSectionController_h
#define IGAdsManagerCarouselElementSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGAdsManagerCarouselElementViewModel.h"

@protocol IGAdsManagerCarouselElementSectionControllerDelegate;

@interface IGAdsManagerCarouselElementSectionController : IGListSectionController {
  /* instance variables */
  IGAdsManagerCarouselElementViewModel *_carouselElementViewModel;
}

@property (weak, nonatomic) NSObject<IGAdsManagerCarouselElementSectionControllerDelegate> *delegate;

/* instance methods */
- (id)init;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (void)suggestedPostCardCell:(id)cell;
@end

#endif /* IGAdsManagerCarouselElementSectionController_h */