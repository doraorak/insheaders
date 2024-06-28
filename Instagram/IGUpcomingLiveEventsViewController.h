//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUpcomingLiveEventsViewController_h
#define IGUpcomingLiveEventsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGListAdapter, IGUpcomingEventManagementLogger, IGUpcomingEventsViewerLogger, IGUserSession, NSMutableOrderedSet, NSString, UICollectionView;
@protocol IGUpcomingLiveEventsViewControllerDelegate;

@interface IGUpcomingLiveEventsViewController : IGViewController<IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_creationSessionId;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  BOOL _shouldRefetchEvents;
  BOOL _hasLoadedEvents;
  BOOL _fromFeedPostEventTaggingEntryPoint;
  NSMutableOrderedSet *_upcomingLiveEvents;
  IGUpcomingEventManagementLogger *_logger;
  NSString *_priorModule;
  IGUpcomingEventsViewerLogger *_upcomingEventsLogger;
}

@property (weak, nonatomic) NSObject<IGUpcomingLiveEventsViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session creationSessionId:(id)id shouldRefetchEvents:(BOOL)events priorModule:(id)module fromFeedPostEventTaggingEntryPoint:(BOOL)point;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)_didTapCancelBarButtonItem:(id)item;
- (void)_didTapAddBarButtonItem:(id)item;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)upcomingEventDetailsViewController:(id)controller didCreateUpcomingEvent:(id)event;
- (void)upcomingEventDetailsViewController:(id)controller didEditUpcomingEvent:(id)event;
- (void)upcomingEventDetailsViewController:(id)controller didDeleteUpcomingEvent:(id)event;
- (void)shareUpcomingLiveViewController:(id)controller didTapShareLaterForEvent:(id)event;
- (void)shareUpcomingLiveViewController:(id)controller didTapShareAsPostForEvent:(id)event;
- (void)shareUpcomingLiveViewController:(id)controller didTapShareForEvent:(id)event;
- (void)upcomingEventSectionController:(id)controller didSelectUpcomingEvent:(id)event;
- (void)upcomingEventSectionControllerDidTapAccessoryView:(id)view;
- (void)upcomingEventServiceDidLoadUpcomingEvents:(id)events;
- (void)upcomingEventServiceDidFailLoad;
- (void)upcomingEventServiceDidLoadForProductIds:(id)ids upcomingEvent:(id)event;
- (void)upcomingEventServiceDidFailLoadForProductIds:(id)ids;
- (void)shoppingEmptyStateSectionController:(id)controller didTapActionButtonWithViewModel:(id)model;
- (void)shoppingEmptyStateSectionController:(id)controller didTapSubtitleWithURL:(id)url;
@end

#endif /* IGUpcomingLiveEventsViewController_h */