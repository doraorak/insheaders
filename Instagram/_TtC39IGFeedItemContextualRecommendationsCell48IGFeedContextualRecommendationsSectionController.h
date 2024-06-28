//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC39IGFeedItemContextualRecommendationsCell48IGFeedContextualRecommendationsSectionController_h
#define _TtC39IGFeedItemContextualRecommendationsCell48IGFeedContextualRecommendationsSectionController_h
@import Foundation;

#include "IGListSectionController.h"

@interface _TtC39IGFeedItemContextualRecommendationsCell48IGFeedContextualRecommendationsSectionController : IGListSectionController { // (Swift)
  /* instance variables */
   recommendations;
   userSession;
   cellHeight;
   playbackSession;
   analyticsModule;
   sourceMedia;
   delegate;
}

/* instance methods */
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (id)init;
@end

#endif /* _TtC39IGFeedItemContextualRecommendationsCell48IGFeedContextualRecommendationsSectionController_h */
