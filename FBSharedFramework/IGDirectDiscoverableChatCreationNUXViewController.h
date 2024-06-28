//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectDiscoverableChatCreationNUXViewController_h
#define IGDirectDiscoverableChatCreationNUXViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGBottomButtonsView.h"
#include "IGImageTitleSectionControllerDelegate-Protocol.h"
#include "IGListAdapter.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGUserSession.h"

@class NSString, UICollectionView;
@protocol IGDirectDiscoverableChatCreationNUXViewControllerDelegate;

@interface IGDirectDiscoverableChatCreationNUXViewController : IGViewController<IGListAdapterDataSource, IGImageTitleSectionControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_sessionID;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGBottomButtonsView *_bottomButtonView;
}

@property (weak, nonatomic) NSObject<IGDirectDiscoverableChatCreationNUXViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session sessionID:(id)id;
- (BOOL)prefersNavigationBarDividerHidden;
- (long long)preferredTabBarBehavior;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)_backButtonTapped;
- (void)_primaryButtonTapped;
- (void)imageTitleSectionController:(id)controller didSelectActionForViewModel:(id)model;
- (void)imageTitleSectionController:(id)controller didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGDirectDiscoverableChatCreationNUXViewController_h */