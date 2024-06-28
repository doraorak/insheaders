//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPublicChatJoinNUXViewController_h
#define IGDirectPublicChatJoinNUXViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGBottomButtonsView.h"
#include "IGGestureHandler-Protocol.h"
#include "IGImageTitleSectionControllerDelegate-Protocol.h"
#include "IGListAdapter.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGUser.h"
#include "IGUserSession.h"

@class NSNumber, NSString, UICollectionView;
@protocol IGDirectPublicChatJoinNUXViewControllerDelegate;

@interface IGDirectPublicChatJoinNUXViewController : IGViewController<IGListAdapterDataSource, IGImageTitleSectionControllerDelegate, IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_sessionID;
  NSString *_threadID;
  NSNumber *_consistentThreadFbid;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGBottomButtonsView *_bottomButtonView;
  unsigned long long _type;
  NSNumber *_audienceType;
  IGUser *_creatorUser;
  BOOL _useNewDesign;
}

@property (weak, nonatomic) NSObject<IGDirectPublicChatJoinNUXViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session sessionID:(id)id threadID:(id)id consistentThreadFbid:(id)fbid type:(unsigned long long)type audienceType:(id)type creatorUser:(id)user useNewDesign:(BOOL)design;
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
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGDirectPublicChatJoinNUXViewController_h */
