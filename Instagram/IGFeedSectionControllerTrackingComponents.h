//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedSectionControllerTrackingComponents_h
#define IGFeedSectionControllerTrackingComponents_h
@import Foundation;

#include "IGFeedItemViewableImpressionTracker.h"

@class IGCollectionViewVisibility, IGLastActionTracker, IGListAdapter, IGUserSession;

@interface IGFeedSectionControllerTrackingComponents : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  BOOL _disableForcedCollectionViewLayout;
  IGFeedItemViewableImpressionTracker *_viewableImpressionTracker;
  IGCollectionViewVisibility *_collectionViewVisibility;
  IGLastActionTracker *_lastActionTracker;
}

@property (readonly, nonatomic) IGListAdapter *listAdapter;

/* instance methods */
- (id)initWithViewController:(id)controller collectionView:(id)view listAdapter:(id)adapter userSession:(id)session feedConfiguration:(id)configuration lastActionTracker:(id)tracker disableForcedCollectionViewLayout:(BOOL)layout;
- (void)viewWillDisappear;
- (void)scrollViewDidScroll:(double)scroll;
- (void)adapterDidCompleteUpdate;
@end

#endif /* IGFeedSectionControllerTrackingComponents_h */
