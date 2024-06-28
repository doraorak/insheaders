//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSubscriberCategoryListViewController_h
#define IGSubscriberCategoryListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDirectSubscriberMessagingThreadCreationDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGUserListSectionControllerSelectionDelegate-Protocol.h"

@class IGBasicListViewController, IGBottomButtonsView, IGSpinnerLabelViewModel, IGSubscriberCategoryMemberListDataSource, IGUserSession, NSArray, NSDictionary, NSString, UITapGestureRecognizer;
@protocol IGSubscriberCategoryListViewControllerDelegate;

@interface IGSubscriberCategoryListViewController : IGViewController<IGDirectSubscriberMessagingThreadCreationDelegate, IGListAdapterDataSource, IGUserListSectionControllerSelectionDelegate> {
  /* instance variables */
  IGBasicListViewController *_mainListViewController;
  NSArray *_users;
  IGUserSession *_userSession;
  NSDictionary *_memberDates;
  IGSubscriberCategoryMemberListDataSource *_dataSource;
  NSString *_category;
  NSString *_categoryType;
  NSString *_categoryDescription;
  NSString *_sessionID;
  IGSpinnerLabelViewModel *_spinnerModel;
  IGBottomButtonsView *_bottomButtonView;
  UITapGestureRecognizer *_disabledCreateGroupChatButtonTapGesture;
  unsigned long long _actionStyle;
  long long _style;
  NSArray *_selectedMembers;
}

@property (weak, nonatomic) NSObject<IGSubscriberCategoryListViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session category:(id)category categoryType:(id)type actionStyle:(unsigned long long)style style:(long long)style sessionID:(id)id;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)subscriberCategoryMemberListDataSourceDidCompleteRequest:(id)request response:(id)response;
- (void)subscriberCategoryMemberListDataSourceDidFailRequest:(id)request error:(id)error;
- (void)subscriberMessagingDidCreateThread:(id)thread;
- (void)_didTapDisabledCreateGroupChatButton:(id)button;
- (void)userListSectionController:(id)controller didRemoveSubscriber:(id)subscriber isSuccess:(BOOL)success;
- (void)userListSectionControllerDidSelectUser:(id)user;
- (void)userListSectionControllerDidDeselectUser:(id)user;
@end

#endif /* IGSubscriberCategoryListViewController_h */
