//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC16IGProfileBanners33IGProfileBannersSectionController_h
#define _TtC16IGProfileBanners33IGProfileBannersSectionController_h
@import Foundation;

#include "IGListSectionController.h"

@interface _TtC16IGProfileBanners33IGProfileBannersSectionController : IGListSectionController { // (Swift)
  /* instance variables */
   userSession;
   model;
   bannerModelsProvider;
   bannerModels;
}

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)didUpdateToObject:(id)object;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)presentAllBannersBottomSheet;
- (id)init;
@end

#endif /* _TtC16IGProfileBanners33IGProfileBannersSectionController_h */
