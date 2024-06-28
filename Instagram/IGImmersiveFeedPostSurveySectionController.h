//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImmersiveFeedPostSurveySectionController_h
#define IGImmersiveFeedPostSurveySectionController_h
@import Foundation;

#include "IGListSectionController.h"

@class IGFeedItemTracker, IGImmersiveFeedConfiguration, IGImmersiveInlineSurvey, IGListAdapter, IGSponsoredSupportConfiguration, IGUserSession;

@interface IGImmersiveFeedPostSurveySectionController : IGListSectionController {
  /* instance variables */
  IGImmersiveInlineSurvey *_inlineSurvey;
  IGUserSession *_userSession;
  IGImmersiveFeedConfiguration *_immersiveFeedConfiguration;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
  IGFeedItemTracker *_feedItemTracker;
  IGListAdapter *_listAdapter;
  BOOL _isSurveyCompleted;
}

/* instance methods */
- (id)initWithInlineSurvey:(id)survey immersiveFeedConfiguration:(id)configuration sponsoredSupportConfiguration:(id)configuration feedItemTracker:(id)tracker listAdapter:(id)adapter userSession:(id)session;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)didUpdateToObject:(id)object;
@end

#endif /* IGImmersiveFeedPostSurveySectionController_h */
