//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMusicStickerDisclosureViewController_h
#define IGMusicStickerDisclosureViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGBottomButtonsView, IGListAdapter, IGUserSession, NSString, UICollectionView;

@interface IGMusicStickerDisclosureViewController : IGViewController<IGListAdapterDataSource, IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGBottomButtonsView *_bottomButtonView;
  BOOL _isPrivateAccount;
  BOOL _showNavigationTitle;
  id /* block */ _shareButtonCompletion;
  id /* block */ _goBackButtonCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session shareButtonCompletion:(id /* block */)completion goBackButtonCompletion:(id /* block */)completion isPrivateAccount:(BOOL)account showNavigationTitle:(BOOL)title;
- (long long)preferredTabBarBehavior;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGMusicStickerDisclosureViewController_h */