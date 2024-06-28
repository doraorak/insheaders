//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectReactingUserListViewController_h
#define IGDirectReactingUserListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDirectCountBasedReactionsContainerDataSource.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGDirectMessagePublicThreadContext, IGListAdapter, IGScrollViewAnnouncer, IGStatefulNetworker, IGTapButton, IGUserSession, NSArray, NSMutableArray, NSSet, NSString, UIActivityIndicatorView, UICollectionView, UISwipeGestureRecognizer, UIView, UIViewController;

@interface IGDirectReactingUserListViewController : IGViewController<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGListAdapterDataSource, UIGestureRecognizerDelegate, IGScrollViewListener, IGGestureHandler> {
  /* instance variables */
  UICollectionView *_collectionView;
  UICollectionView *_horizontalCollectionView;
  UIView *_lineSeparatorView;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  NSArray *_reactions;
  IGUserSession *_userSession;
  NSSet *_selectedReactionsByCurrentUser;
  UIViewController *_sourceViewController;
  id /* block */ _unreactActionHandler;
  id /* block */ _likeActionHandler;
  IGTapButton *_heartButton;
  IGListAdapter *_listAdapter;
  BOOL _isConsumptionOnly;
  BOOL _undoReactionEnabled;
  BOOL _heartShortcutEnabled;
  BOOL _isCreatorSubscriberThread;
  BOOL _isCreatorBroadcastThread;
  BOOL _isDiscoverableThread;
  BOOL _isThreadCentricThread;
  BOOL _isUserScrolling;
  IGDirectCountBasedReactionsContainerDataSource *_countBasedReactionsContainerDataSource;
  IGStatefulNetworker *_networker;
  NSString *_threadId;
  NSString *_messageId;
  NSMutableArray *_countBasedReactionActors;
  NSString *_initialTabEmojiUnicode;
  NSString *_nextCursor;
  NSString *_originalMessageClientContext;
  UIActivityIndicatorView *_spinner;
  NSString *_threadIdV2ForInboxPaging;
  IGDirectMessagePublicThreadContext *_publicThreadContext;
  UISwipeGestureRecognizer *_leftSwipeRecognizer;
  UISwipeGestureRecognizer *_rightSwipeRecognizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithReactions:(id)reactions userSession:(id)session selectedReactionsByCurrentUser:(id)user sourceViewController:(id)controller unreactActionHandler:(id /* block */)handler likeActionHandler:(id /* block */)handler superReactActionHandler:(id /* block */)handler isConsumptionOnly:(BOOL)only undoReactionEnabled:(BOOL)enabled heartShortcutEnabled:(BOOL)enabled isCreatorSubscriberThread:(BOOL)thread isCreatorBroadcastThread:(BOOL)thread isDiscoverableThread:(BOOL)thread isThreadCentricThread:(BOOL)thread threadId:(id)id messageId:(id)id originalMessageClientContext:(id)context threadIdV2ForInboxPaging:(id)paging publicThreadContext:(id)context initialTabEmojiUnicode:(id)unicode;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)objectsForListAdapter:(id)adapter;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didDeselectItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)userListSectionController:(id)controller didTapUserListCell:(id)cell;
- (BOOL)prefersNavigationBarHidden;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredTabBarBehavior;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (void)scrollViewDidEndScrolling:(id)scrolling;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)_didTapHeartButton:(id)button;
- (void)swipeRecognizer:(id)recognizer;
- (id)analyticsModule;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)analyticsExtras;
@end

#endif /* IGDirectReactingUserListViewController_h */