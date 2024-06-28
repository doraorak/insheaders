//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UINavigationController_IGHashtag_h
#define UINavigationController_IGHashtag_h
@import Foundation;

@interface UINavigationController (IGHashtag)
/* instance methods */
- (id)intentTargetForHashtag:(id)hashtag entryTrigger:(id)trigger;
- (id)intentTargetForHashtag:(id)hashtag entryTrigger:(id)trigger previousAnalyticsModule:(id)module;
- (id)intentTargetForHashtag:(id)hashtag entryTrigger:(id)trigger searchQueryText:(id)text searchSessionId:(id)id priorSerpSessionId:(id)id;
- (id)intentTargetForHashtag:(id)hashtag sourceMediaPk:(id)pk entryTrigger:(id)trigger searchQueryText:(id)text followLoggingExtras:(id)extras previousAnalyticsModule:(id)module isChallenge:(BOOL)challenge searchSessionId:(id)id priorSerpSessionId:(id)id pivotPageEntryPoint:(id)point;
@end

#endif /* UINavigationController_IGHashtag_h */