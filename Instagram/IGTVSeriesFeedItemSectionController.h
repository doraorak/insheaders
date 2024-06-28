//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVSeriesFeedItemSectionController_h
#define IGTVSeriesFeedItemSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "IGListWorkingRangeDelegate-Protocol.h"
#include "IGTVFeedItemUpdateCoordinator.h"
#include "IGTVSeriesLoggingContext.h"
#include "IGTransitionZoomListCapable-Protocol.h"

@class IGUserSession, NSString;
@protocol IGTVChannelDataSourceType, IGTVSeriesFeedItemSectionControllerDelegate;

@interface IGTVSeriesFeedItemSectionController : IGListGenericSectionController<IGListWorkingRangeDelegate, IGTransitionZoomListCapable> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGTVChannelDataSourceType> *_dataSource;
  IGTVSeriesLoggingContext *_loggingContext;
  NSObject<IGTVSeriesFeedItemSectionControllerDelegate> *_delegate;
  IGTVFeedItemUpdateCoordinator *_feedItemUpdateCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session dataSource:(id)source loggingContext:(id)context delegate:(id)delegate;
- (void)didUpdateToObject:(id)object;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (void)listAdapter:(id)adapter sectionControllerWillEnterWorkingRange:(id)range;
- (void)listAdapter:(id)adapter sectionControllerDidExitWorkingRange:(id)range;
- (id)transitionZoomViewWithContext:(id)context;
- (long long)transitionZoomViewIndex;
- (void)didLongPressCollectionViewCell:(id)cell;
- (void)feedItemUpdateCoordinator:(id)coordinator didUpdateFeedItem:(id)item feedItemChange:(long long)change;
- (void)feedItemUpdateCoordinator:(id)coordinator didHideFeedItem:(id)item;
- (void)feedItemUpdateCoordinator:(id)coordinator didUnhideFeedItem:(id)item;
- (void)igtvSeenStateStoreDidUpdateMediaId:(id)id;
@end

#endif /* IGTVSeriesFeedItemSectionController_h */