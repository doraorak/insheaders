//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVAnalyticsModuleSuffix_h
#define IGTVAnalyticsModuleSuffix_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString;

@interface IGTVAnalyticsModuleSuffix : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_explorePivot_sourceAnalyticsModule;
  NSString *_feedPreview_sourceAnalyticsModule;
  NSString *_upcomingEvent_sourceAnalyticsModule;
}

/* class methods */
+ (id)accountInsights;
+ (id)activityCenter;
+ (id)adActivity;
+ (id)creationSandbox;
+ (id)destinationSaved;
+ (id)direct;
+ (id)exploreGrid;
+ (id)explorePinnedNavigation;
+ (id)explorePivotWithSourceAnalyticsModule:(id)module;
+ (id)externalURL;
+ (id)feed;
+ (id)feedPreviewWithSourceAnalyticsModule:(id)module;
+ (id)hashtagPage;
+ (id)igtvBrowse;
+ (id)igtvChannel;
+ (id)igtvDiscover;
+ (id)igtvFollowing;
+ (id)igtvHome;
+ (id)igtvLive;
+ (id)igtvMiniProfile;
+ (id)igtvSingleVideo;
+ (id)igtvStandaloneApp;
+ (id)igtvViewer;
+ (id)live;
+ (id)liveShoppingNetego;
+ (id)notifications;
+ (id)notificationsCenter;
+ (id)onboarding;
+ (id)profile;
+ (id)profileSelfVideoGrid;
+ (id)profileVideoGrid;
+ (id)recentlyDeleted;
+ (id)saved;
+ (id)search;
+ (id)shopHomeChannel;
+ (id)shopHomeContentTile;
+ (id)shopHomeVideoSubdestination;
+ (id)stories;
+ (id)storySticker;
+ (id)upcomingEventWithSourceAnalyticsModule:(id)module;
+ (id)watchHistory;

/* instance methods */
@end

#endif /* IGTVAnalyticsModuleSuffix_h */