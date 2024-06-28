//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGuideUnifiedSearchViewController_h
#define IGGuideUnifiedSearchViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGuideCreationSearchClickHandler.h"
#include "IGGuideSearchCustomParametersProvider.h"
#include "IGGuideUnifiedSearchTabViewController.h"
#include "IGSearchBarDelegate-Protocol.h"

@class IGSearchAnalyticsLogger, IGSearchBarWithCancel, IGSearchSession, IGUserSession, NSString;
@protocol IGGuideUnifiedSearchDelegate, IGViewController<IGSearchResultsViewControllerType;

@interface IGGuideUnifiedSearchViewController : IGViewController<IGSearchBarDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSearchSession *_searchSession;
  IGSearchAnalyticsLogger *_searchAnalyticsLogger;
  IGGuideCreationSearchClickHandler *_searchClickHandler;
  IGGuideUnifiedSearchTabViewController *_searchTabsViewController;
  IGViewController<IGSearchResultsViewControllerType> *_userSearchViewController;
  IGViewController<IGSearchResultsViewControllerType> *_placesSearchViewController;
  IGViewController<IGSearchResultsViewControllerType> *_shopSearchViewController;
  IGGuideSearchCustomParametersProvider *_customParametersProvider;
}

@property (weak, nonatomic) NSObject<IGGuideUnifiedSearchDelegate> *delegate;
@property (readonly, nonatomic) IGSearchBarWithCancel *searchBar;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session defaultLocation:(id)location;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)_searchCancelTapped;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)pageViewController:(id)controller didPageToViewController:(id)controller;
- (void)pageViewController:(id)controller willPageToViewController:(id)controller;
- (void)guideCreationSearchClickHandler:(id)handler didSelectSearchableItem:(id)item;
- (id)currentSearchText;
- (id)currentKeywordModelPk;
- (id)searchAnalyticsLogger;
- (id)searchSession;
- (BOOL)isReadyForImpressionLogging;
- (void)childViewControllerWillPushView:(id)view;
- (void)scrollViewDidScroll:(id)scroll;
- (void)dimissKeyboard;
- (void)dismissSearchIfNeeded;
- (void)searchChildViewControllerShouldUpdateSearchResults;
- (BOOL)searchChildViewControllerShouldNavigateToSearchResult:(id)result;
- (void)searchChildViewControllerWillLoadNullStateResults:(id)results;
- (void)searchChildViewControllerDidLoadNullStateResults:(id)results;
- (void)searchChildViewControllerDidFailToLoadNullStateResults:(id)results error:(id)error;
- (void)searchChildViewControllerDidUpdateDisplayMode;
@end

#endif /* IGGuideUnifiedSearchViewController_h */
