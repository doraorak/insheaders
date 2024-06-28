//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainFeedScrollViewListener_h
#define IGMainFeedScrollViewListener_h
@import Foundation;

#include "ARVirtualObjectScrollListener.h"
#include "IGFeedSectionControllerTrackingComponents.h"
#include "IGFeedSectionViewabilityTracker.h"
#include "IGFeedUFINUXManager.h"
#include "IGScrollViewListener-Protocol.h"

@class IGListAdapterScrollingContext, IGUserSession, NSString;

@interface IGMainFeedScrollViewListener : NSObject<IGScrollViewListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGFeedSectionViewabilityTracker *_sectionViewabilityTracker;
  IGFeedSectionControllerTrackingComponents *_trackingComponents;
  ARVirtualObjectScrollListener *_virtualObjectScrollListener;
  IGListAdapterScrollingContext *_scrollingContext;
  IGFeedUFINUXManager *_ufiNUXManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session sectionViewabilityTracker:(id)tracker trackingComponents:(id)components virtualObjectScrollListener:(id)listener scrollingContext:(id)context ufiNUXManager:(id)nuxmanager;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndScrolling:(id)scrolling;
- (void)scrollViewDidScrollToTop:(id)top;
@end

#endif /* IGMainFeedScrollViewListener_h */
