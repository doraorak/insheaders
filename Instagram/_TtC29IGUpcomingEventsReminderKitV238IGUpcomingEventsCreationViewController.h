//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC29IGUpcomingEventsReminderKitV238IGUpcomingEventsCreationViewController_h
#define _TtC29IGUpcomingEventsReminderKitV238IGUpcomingEventsCreationViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "_TtP29IGUpcomingEventsReminderKitV246IGUpcomingEventsCreationViewControllerDelegate_-Protocol.h"

@interface _TtC29IGUpcomingEventsReminderKitV238IGUpcomingEventsCreationViewController : IGGroupedTableViewController { // (Swift)
  /* instance variables */
   reuseIdentifer;
   userSession;
   isGenericEventCreationEnabled;
   isLiveEventCreationEnabled;
   isProductEventCreationEnabled;
}

@property (nonatomic, retain) NSObject<_TtP29IGUpcomingEventsReminderKitV246IGUpcomingEventsCreationViewControllerDelegate_> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session isGenericEventCreationEnabled:(BOOL)enabled isLiveEventCreationEnabled:(BOOL)enabled isProductEventCreationEnabled:(BOOL)enabled;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)initWithAnalyticsModule:(id)module listRedesignEnabled:(BOOL)enabled;
@end

#endif /* _TtC29IGUpcomingEventsReminderKitV238IGUpcomingEventsCreationViewController_h */