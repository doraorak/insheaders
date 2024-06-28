//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUpcomingEventsViewController_h
#define IGUpcomingEventsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGListAdapter, IGUserSession, NSMutableOrderedSet, NSString, UICollectionView;
@protocol IGUpcomingEventsViewControllerDelegate;

@interface IGUpcomingEventsViewController : IGViewController<IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_creationSessionId;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  BOOL _hasLoadedEvents;
  NSMutableOrderedSet *_upcomingEvents;
}

@property (weak, nonatomic) NSObject<IGUpcomingEventsViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session creationSessionId:(id)id;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_onTapCancelButton;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)upcomingEventCreateSectionControllerDidTapCreate:(id)create;
- (void)upcomingEventDetailsViewController:(id)controller didCreateUpcomingEvent:(id)event;
- (void)upcomingEventDetailsViewController:(id)controller didEditUpcomingEvent:(id)event;
- (void)upcomingEventDetailsViewController:(id)controller didDeleteUpcomingEvent:(id)event;
- (void)upcomingEventSectionController:(id)controller didSelectUpcomingEvent:(id)event;
- (void)upcomingEventSectionControllerDidTapAccessoryView:(id)view;
- (void)upcomingEventServiceDidLoadUpcomingEvents:(id)events;
- (void)upcomingEventServiceDidFailLoad;
- (void)upcomingEventServiceDidLoadForProductIds:(id)ids upcomingEvent:(id)event;
- (void)upcomingEventServiceDidFailLoadForProductIds:(id)ids;
@end

#endif /* IGUpcomingEventsViewController_h */
