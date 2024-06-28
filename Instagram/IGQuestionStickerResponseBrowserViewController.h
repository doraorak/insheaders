//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuestionStickerResponseBrowserViewController_h
#define IGQuestionStickerResponseBrowserViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGBottomSheetArrowButton.h"
#include "IGGestureHandler-Protocol.h"
#include "IGPageViewControllerDataSource-Protocol.h"
#include "IGPageViewControllerDelegate-Protocol.h"
#include "IGQuestionStickerResponseBrowserNavigationBar.h"
#include "IGStoryItemType-Protocol.h"

@class IGPageViewController, IGQuestionAnswerStickerResponder, IGUserSession, NSArray, NSString;
@protocol IGQuestionStickerResponseBrowserViewControllerDelegate;

@interface IGQuestionStickerResponseBrowserViewController : IGViewController<IGPageViewControllerDelegate, IGPageViewControllerDataSource, IGGestureHandler, IGAnalyticsModule> {
  /* instance variables */
  IGUserSession *_userSession;
  IGPageViewController *_pageViewController;
  IGQuestionStickerResponseBrowserNavigationBar *_navigationBar;
  IGBottomSheetArrowButton *_forwardButton;
  IGBottomSheetArrowButton *_backButton;
  NSObject<IGStoryItemType> *_storyItem;
  NSString *_reelId;
  IGQuestionAnswerStickerResponder *_initiallySelectedResponse;
  BOOL _shouldShowSeeAllPage;
  NSArray *_questionStickerResponses;
  long long _displayedQuestionStickerResponseIndex;
  double _selectedPageIndex;
}

@property (readonly, nonatomic) long long numberOfPages;
@property (weak, nonatomic) NSObject<IGQuestionStickerResponseBrowserViewControllerDelegate> *delegate;
@property (readonly, nonatomic) double preferredHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQuestionStickerResponses:(id)responses initiallySelectedResponse:(id)response userSession:(id)session storyItem:(id)item reelId:(id)id;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)_didTapBackButton:(id)button;
- (void)_didTapForwardButton:(id)button;
- (void)pageViewControllerDidScroll:(id)scroll;
- (long long)numberOfPagesForPageViewController:(id)controller;
- (id)pageViewController:(id)controller controllerForIndex:(long long)index;
- (void)_didTapSeeAllButton:(id)button;
- (BOOL)pageViewController:(id)controller touchesShouldCancelInContentView:(id)view;
- (void)pageViewController:(id)controller didChangeCurrentViewControllerToController:(id)controller atIndex:(long long)index;
- (unsigned long long)numberOfItemsInQuestionStickerResponseBrowserNavigationBar:(id)bar;
- (id)questionStickerResponseBrowserNavigationBar:(id)bar titleForItemAtIndex:(unsigned long long)index;
- (BOOL)questionStickerResponseBrowserNavigationBar:(id)bar isExplicitItemAtIndex:(unsigned long long)index;
- (void)questionStickerResponseBrowserNavigationBar:(id)bar didTapMoreButton:(id)button atIndex:(unsigned long long)index;
- (void)questionStickerResponseViewController:(id)controller didDeleteQuestionStickerResponse:(id)response;
- (id)analyticsModule;
@end

#endif /* IGQuestionStickerResponseBrowserViewController_h */