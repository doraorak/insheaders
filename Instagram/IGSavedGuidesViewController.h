//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSavedGuidesViewController_h
#define IGSavedGuidesViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGFeedStarterKit.h"
#include "IGFeedStatusViewDelegate-Protocol.h"
#include "IGGuidesFeedNetworkSource.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGTransitionZoomFromCapable-Protocol.h"

@class IGUserSession, NSDictionary, NSString;

@interface IGSavedGuidesViewController : IGViewController<IGListAdapterDataSource, IGScrollViewListener, IGFeedStatusViewDelegate, IGTransitionZoomFromCapable> {
  /* instance variables */
  IGUserSession *_userSession;
  IGGuidesFeedNetworkSource *_networkSource;
  IGFeedStarterKit *_feedStarterKit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *magicMoveSubviews;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)_reload;
- (void)guidesFeedNetworkSourceDidUpdate:(id)update;
- (id)emptyFeedModelForGuidesNetworkSource:(id)source;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)guidesGridSectionControllerDidTap:(id)tap;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (void)feedStatusViewDidTap:(id)tap;
- (void)feedStatusEmptyStateButtonWasTapped:(id)tapped;
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (BOOL)shouldZoomFromTransition;
- (void)prepareBackwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
- (id)transitionZoomViewFromItem:(id)item withZoomContext:(id)context shouldMoveToVisiblePosition:(BOOL)position;
- (void)didCompleteBackwardZoomTransition;
@end

#endif /* IGSavedGuidesViewController_h */
