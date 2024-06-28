//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchSerpViewController_h
#define IGSearchSerpViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGenericSearchBarTitleView.h"
#include "IGScopedListener-Protocol.h"
#include "IGSearchBarDelegate-Protocol.h"
#include "IGSearchContainerSerpViewController.h"
#include "IGSearchTypeaheadViewController.h"
#include "_TtC27IGSearchResultsSerpKitUtils28IGHashtagFollowStatusFetcher.h"
#include "_TtP27IGSearchResultsSerpKitUtils36IGHashtagFollowStatusFetcherDelegate_-Protocol.h"

@class IGCollapsibleNavigationCoordinator, IGNavigationBar, IGSearchAnalyticsLogger, IGSearchBar, IGSearchSession, IGUserSession, NSString, UINavigationItem;

@interface IGSearchSerpViewController : IGViewController<IGSearchBarDelegate, _TtP27IGSearchResultsSerpKitUtils36IGHashtagFollowStatusFetcherDelegate_, IGScopedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSearchSession *_serpSession;
  NSString *_searchText;
  IGSearchAnalyticsLogger *_searchAnalyticsLogger;
  IGSearchContainerSerpViewController *_searchContainerSerpViewController;
  IGGenericSearchBarTitleView *_searchSerpNavigationTitleView;
  IGNavigationBar *_localNavigationBar;
  UINavigationItem *_localNavigationItem;
  IGSearchTypeaheadViewController *_typeaheadViewController;
  IGSearchBar *_searchAnimationSourceSearchBar;
  NSString *_priorModule;
  BOOL _isOpenInCurrentTab;
  BOOL _enableScrollawayTopNav;
  IGCollapsibleNavigationCoordinator *_collapsibleNavCoordinator;
  BOOL _isSearchBarAtBottom;
  _TtC27IGSearchResultsSerpKitUtils28IGHashtagFollowStatusFetcher *_hashtagFetcher;
  BOOL _metaAIEntrypointsImpressionLogged;
  BOOL _animatedMetaAiRingForSearchBarEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session searchText:(id)text serpSession:(id)session priorModule:(id)module keywordModelPk:(id)pk searchAnalyticsLogger:(id)logger enableScrollawayTopNav:(BOOL)nav;
- (void)dealloc;
- (void)hashtagFollowFetcher:(id)fetcher didFetch:(id)fetch;
- (BOOL)prefersNavigationBarDividerHidden;
- (BOOL)prefersNavigationBarHidden;
- (long long)statusBarStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)_logMetaAIEntrypointsImpressionWhenViewFirstAppears;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)searchBarRightAccessoryButtonTappedOnSearchBar:(id)bar;
- (void)searchBarMetaAIButtonTappedOnSearchBar:(id)bar;
- (void)searchBarDirectSendButtonTappedOnSearchBar:(id)bar;
- (void)searchViewControllerDidCancelSearch:(id)search;
- (void)searchViewControllerDidExitSearch:(id)search;
- (BOOL)searchViewControllerShouldTriggerSearchWithReturnKeyClick:(id)click;
- (void)searchEntityRouterDidRouteToSerpPage:(id)page;
- (void)_setUpTabBar;
- (void)_dismissVC;
- (void)searchHasNoGrid;
- (void)containerSerpViewControllerDidChangeCurrentViewController:(id)controller;
- (void)containerSerpViewControllerDidUpdateViewControllerDisplayMode:(id)mode;
- (void)tabBarChangedTab:(id)tab launcherSetProvider:(id)provider;
- (void)_stopMetaAiRingAnimation;
@end

#endif /* IGSearchSerpViewController_h */