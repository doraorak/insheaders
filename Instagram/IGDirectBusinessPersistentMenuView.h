//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectBusinessPersistentMenuView_h
#define IGDirectBusinessPersistentMenuView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectBusinessPersistentMenuButtonCollectionView.h"
#include "IGDirectBusinessPersistentMenuButtonDataSource.h"
#include "IGDirectInstantReplyManager.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGDirectBusinessPersistentMenu, IGListAdapter, IGUser, IGUserSession, NSString, UIView;
@protocol IGDirectBusinessPersistentMenuViewDelegate;

@interface IGDirectBusinessPersistentMenuView : UIView<UIScrollViewDelegate> {
  /* instance variables */
  IGDirectBusinessPersistentMenu *_viewModel;
  IGUserSession *_userSession;
  IGUser *_businessUser;
  UIView *_instantReplyView;
  IGDirectInstantReplyManager *_instantReplyManager;
  IGDirectBusinessPersistentMenuButtonCollectionView *_buttonCollectionView;
  IGDirectBusinessPersistentMenuButtonDataSource *_buttonDataSource;
  IGListAdapter *_buttonListAdapter;
  NSObject<UIScrollViewDelegate> *_scrollDelegate;
}

@property (weak, nonatomic) NSObject<IGDirectBusinessPersistentMenuViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame scrollDelegate:(id)delegate;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)instantReplyManager:(id)manager informDelegateToPresentWithAnimation:(id /* block */)animation instantReplyView:(id)view;
- (void)instantReplyManager:(id)manager didTapOnInstantReplyWithTitle:(id)title instantReplyTrackingString:(id)string ibCTAType:(id)ctatype powerupsMetadata:(id)metadata index:(long long)index;
- (void)instantReplyManager:(id)manager didSwipeDownWithView:(id)view;
- (void)instantReplyManager:(id)manager didTapOnConversationStarterWithConversationStarterType:(unsigned long long)type;
- (void)didTapOnPersistentMenuButtonWithURL:(id)url;
@end

#endif /* IGDirectBusinessPersistentMenuView_h */