//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstantReplyManager_h
#define IGDirectInstantReplyManager_h
@import Foundation;

#include "IGDirectBusinessWelcomeMessageView.h"
#include "IGDirectInstantReplyCollectionView.h"
#include "IGDirectInstantReplyDataSource.h"
#include "IGDirectInstantReplyTopLevelViewModel.h"
#include "IGDirectInstantReplyViewWrapper.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGDirectBusinessWelcomeMessage, IGDirectMessageCellContentTheme, IGDirectThreadTheme, IGListAdapter, IGUser, IGUserSession, NSString, UIView;
@protocol IGDirectInstantReplyManagerDelegate, IGDirectThreadInfoProviding;

@interface IGDirectInstantReplyManager : NSObject<UIGestureRecognizerDelegate, UIScrollViewDelegate> {
  /* instance variables */
  NSObject<IGDirectInstantReplyManagerDelegate> *_delegate;
  NSObject<UIScrollViewDelegate> *_scrollDelegate;
  IGUserSession *_userSession;
  NSObject<IGDirectThreadInfoProviding> *_threadInfoProvider;
  IGListAdapter *_listAdapter;
  IGDirectThreadTheme *_theme;
  IGDirectMessageCellContentTheme *_contentTheme;
  IGDirectInstantReplyCollectionView *_collectionView;
  IGDirectInstantReplyDataSource *_dataSource;
  id /* block */ _constrainingWidthProvider;
  IGUser *_businessUser;
  long long _entryPoint;
  IGDirectBusinessWelcomeMessageView *_welcomeMessageView;
  IGDirectBusinessWelcomeMessage *_welcomeMessage;
  UIView *_headerView;
  UIView *_footerView;
  NSString *_threadEntryReferralParameter;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _footerViewPadding;
}

@property (readonly, nonatomic) IGDirectInstantReplyViewWrapper *view;
@property (readonly, nonatomic) IGDirectInstantReplyTopLevelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate userSession:(id)session threadInfoProvider:(id)provider theme:(id)theme contentTheme:(id)theme entryPoint:(long long)point constrainingWidthProvider:(id /* block */)provider footerView:(id)view scrollDelegate:(id)delegate threadEntryReferralParameter:(id)parameter;
- (void)didTapOnInstantReplyMessageBubbleWithTitle:(id)title instantReplyTrackingString:(id)string ibCTAType:(id)ctatype index:(long long)index;
- (void)didTapOnConversationStarterBubbleWithConversationStarterType:(unsigned long long)type;
- (void)_handleSwipeDownGesture:(id)gesture;
@end

#endif /* IGDirectInstantReplyManager_h */
