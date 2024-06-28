//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainFeedListAdapterDataSource_h
#define IGMainFeedListAdapterDataSource_h
@import Foundation;

#include "IGListAdapterDataSource-Protocol.h"

@class IGFeedItemPlaceholder, IGFeedStatusView, IGMainFeedContext, IGQuickPromotionCoordinator, NSArray, NSString;
@protocol IGMainFeedListAdapterDataSourceDelegate;

@interface IGMainFeedListAdapterDataSource : NSObject<IGListAdapterDataSource> {
  /* instance variables */
  IGQuickPromotionCoordinator *_qpCoordinator;
  BOOL _containsTopOfFeed;
  IGMainFeedContext *_feedContext;
  IGFeedItemPlaceholder *_placeholder;
  BOOL _hideStoriesTray;
  BOOL _showWelcomeCard;
  IGFeedStatusView *_feedStatusView;
}

@property (readonly, weak, nonatomic) NSObject<IGMainFeedListAdapterDataSourceDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMainFeedContext:(id)context delegate:(id)delegate containsTopOfFeed:(BOOL)feed;
- (id)netEgoExtrasForObject:(id)object;
- (id)allSurfaceDataSourceItems;
- (id)adPodMediaLoggingManager;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)storyTrayViewModelsForLoggingContext;
- (id)immersiveSegueItem;
- (unsigned long long)immersiveSegueItemPosition;
- (unsigned long long)immersiveOriginItemPosition;
- (id)immersiveObjectForFeedItem:(id)item;
@end

#endif /* IGMainFeedListAdapterDataSource_h */
