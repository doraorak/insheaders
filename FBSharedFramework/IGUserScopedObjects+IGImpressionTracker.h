//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGImpressionTracker_h
#define IGUserScopedObjects_IGImpressionTracker_h
@import Foundation;

#include "IGScopeEnding-Protocol.h"
#include "IGTimestampContainer.h"

@class NSString;

@interface IGUserScopedObjects (IGImpressionTracker)
/* instance methods */
- (id)carouselImpressionTracker;
- (id)exploreImpressionTracker;
- (id)liveImpressionTracker;
- (id)organicImpressionTracker;
- (id)sponsoredImpressionTracker;
- (id)storyReelImpressionTracker;
- (id)carouselExperimentalImpressionTracker;
- (id)exploreExperimentalImpressionTracker;
- (id)liveExperimentalImpressionTracker;
- (id)organicExperimentalImpressionTracker;
- (id)sponsoredExperimentalImpressionTracker;
- (id)storyReelExperimentalImpressionTracker;
- (id)organicSecondChannelImpressionTracker;
- (id)sponsoredSecondChannelImpressionTracker;
- (id)organicMerlinImpressionTracker;
@end

#endif /* IGUserScopedObjects_IGImpressionTracker_h */