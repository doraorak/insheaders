//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLogoutViewController_h
#define IGLogoutViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGLogoutAllAccountsSavePasswordView.h"
#include "IGLogoutView.h"
#include "IGLogoutViewControllerDataSource.h"
#include "IGLogoutViewControllerLogger.h"

@class IGListAdapter, IGUserSession, NSMutableArray, NSMutableOrderedSet, NSString;
@protocol IGLogoutViewControllerDelegate;

@interface IGLogoutViewController : IGViewController<IGListAdapterDataSource, IGGestureHandler, IGAnalyticsModule> {
  /* instance variables */
  IGLogoutView *_logoutView;
  IGLogoutAllAccountsSavePasswordView *_logoutAllAccountsSavePasswordView;
  IGLogoutViewControllerDataSource *_dataSource;
  IGListAdapter *_listAdapter;
  IGLogoutViewControllerLogger *_logger;
  IGUserSession *_userSession;
  NSObject<IGLogoutViewControllerDelegate> *_delegate;
  BOOL _useLogoutAllAccountsSavePasswordView;
  double _listHeight;
  NSMutableArray *_orderedRowAccountPKs;
  NSMutableOrderedSet *_allSelectedAccountPKs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)logoutSelectionMainSectionController:(id)controller didTapMainAccount:(id)account;
- (void)logoutSelectionChildSectionController:(id)controller didTapChildAccount:(id)account;
- (void)logoutSelectionIndividualSectionController:(id)controller didTapIndividualAccount:(id)account;
- (void)logoutAllAccountsSavePasswordViewDidTaplogOutButton:(id)button;
- (void)logoutViewDidTaplogOutButton:(id)button;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGLogoutViewController_h */