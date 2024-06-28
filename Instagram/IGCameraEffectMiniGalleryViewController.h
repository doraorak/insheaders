//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraEffectMiniGalleryViewController_h
#define IGCameraEffectMiniGalleryViewController_h
@import Foundation;

#include "IGPartialModalSheetNavigationController.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGCameraEffectCollectionDataSourceListener-Protocol.h"
#include "IGCameraEffectMiniGalleryCategoryProvider.h"
#include "IGCameraEffectMiniGalleryCategoryTray.h"
#include "IGCameraEffectMiniGalleryContentViewController.h"
#include "IGCameraEffectMiniGalleryDetailView.h"
#include "IGCameraEffectMiniGalleryFeedDataProvider.h"
#include "IGCameraEffectMiniGalleryFeedViewController.h"
#include "IGCameraEffectMiniGalleryLoggingContext.h"
#include "IGCameraEffectMiniGalleryPerfLoggingContext.h"
#include "IGCameraEffectMiniGallerySearchViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGPartialModalSheetCustomInteractionDelegate-Protocol.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGSearchBarDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIPageViewControllerDataSource-Protocol.h"
#include "UIPageViewControllerDelegate-Protocol.h"

@class IGAREffectModel, IGAREffectTargetModel, IGPartialModalSheetBackgroundResizingController, IGPartialModalSheetViewController, IGSearchBarWithCancel, IGUserSession, NSMutableDictionary, NSString, UIPageViewController;
@protocol IGCameraEffectMiniGalleryViewControllerDelegate, IGCameraEffectMiniGalleryViewControllerLicensingDataSource;

@interface IGCameraEffectMiniGalleryViewController : IGPartialModalSheetNavigationController<IGSearchBarDelegate, IGCameraEffectCollectionDataSourceListener, UIPageViewControllerDataSource, UIPageViewControllerDelegate, IGPartialModalSheetListener, UIGestureRecognizerDelegate, IGAnalyticsModule, IGGestureHandler> {
  /* instance variables */
  IGCameraEffectMiniGalleryDetailView *_detailView;
  IGCameraEffectMiniGalleryCategoryTray *_categoryTray;
  IGSearchBarWithCancel *_searchBarWithCancel;
  IGPartialModalSheetBackgroundResizingController *_resizingController;
  IGCameraEffectMiniGalleryContentViewController *_contentViewController;
  IGCameraEffectMiniGallerySearchViewController *_searchViewController;
  NSMutableDictionary *_pageChildViewControllers;
  NSMutableDictionary *_pageChildViewControllersPerCategory;
  UIPageViewController *_pageViewController;
  IGCameraEffectMiniGalleryCategoryProvider *_categoryDataProvider;
  IGCameraEffectMiniGalleryFeedDataProvider *_initialDataProvider;
  unsigned long long _previousPartialModalSheetTargetState;
  NSString *_previouslySelectedNonSearchCategoryID;
  IGAREffectTargetModel *_effectTarget;
  IGAREffectModel *_selectedEffect;
  BOOL _pageTransitionInProgress;
  BOOL _isPostcap;
  BOOL _forceScrollToTop;
  long long _searchIndex;
  long long _searchIndexOffset;
  NSString *_analyticsModule;
  BOOL _didCompleteInitialLoad;
  IGUserSession *_userSession;
  IGCameraEffectMiniGalleryLoggingContext *_loggingContext;
  IGCameraEffectMiniGalleryPerfLoggingContext *_perfLoggingContext;
}

@property (weak, nonatomic) NSObject<IGCameraEffectMiniGalleryViewControllerDelegate> *galleryDelegate;
@property (weak, nonatomic) NSObject<IGCameraEffectMiniGalleryViewControllerLicensingDataSource> *licensingDataSource;
@property (weak, nonatomic) NSObject<IGPartialModalSheetCustomInteractionDelegate> *backgroundCustomInteractionDelegate;
@property (readonly, nonatomic) IGCameraEffectMiniGalleryFeedViewController *selectedEffectFeedViewController;
@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL showSaved;
@property (nonatomic) BOOL showGreenScreenCategory;
@property (retain, nonatomic) IGPartialModalSheetViewController *partialModalSheetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithInteractingViewController:(id)controller interactingFocusRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region source:(unsigned long long)source categoryDataProvider:(id)provider initialDataProvider:(id)provider effectTarget:(id)target selectedEffect:(id)effect userSession:(id)session loggingContext:(id)context perfLoggingContext:(id)context cameraPosition:(long long)position isPostcap:(BOOL)postcap;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)dismissViewControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)navigationController:(id)controller didShowViewController:(id)controller animated:(BOOL)animated;
- (void)updateAccessibilityForCameraPosition:(long long)position;
- (void)addlistenerForPartialModalSheet:(id)sheet;
- (id)selectedCategoryID;
- (id)selectedEffect;
- (void)updateSelectedEffect:(id)effect;
- (id)effectMapInSelectedCategory;
- (void)_handleKeyboardDismissal:(id)dismissal;
- (void)_didTapCancel;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBarDidBeginEditing:(id)editing;
- (void)searchBarDidEndEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (id)pageViewController:(id)controller viewControllerAfterViewController:(id)controller;
- (id)pageViewController:(id)controller viewControllerBeforeViewController:(id)controller;
- (void)pageViewController:(id)controller didFinishAnimating:(BOOL)animating previousViewControllers:(id)controllers transitionCompleted:(BOOL)completed;
- (void)cameraEffectCategoryProviderDidUpdate:(id)update;
- (void)cameraEffectCategoryProvider:(id)provider didFailWithError:(id)error;
- (void)cameraEffectCollectionDataSource:(id)source didFailWithError:(id)error resultSource:(long long)source;
- (void)cameraEffectCollectionDataSource:(id)source didUpdateUsingPage:(id)page resultSource:(long long)source;
- (long long)numberOfItemsInMiniGalleryCategoryTray:(id)tray;
- (id)miniGalleryCategoryTray:(id)tray titleForItemAtIndex:(long long)index;
- (id)miniGalleryCategoryTray:(id)tray imageForItemAtIndex:(long long)index;
- (id)miniGalleryCategoryTray:(id)tray accessibilityTextForItemAtIndex:(long long)index;
- (BOOL)miniGalleryCategoryTray:(id)tray isItemAtIndexLoading:(long long)loading;
- (void)miniGalleryCategoryTray:(id)tray didSelectItemAtIndex:(long long)index;
- (void)miniGalleryInitialDataProviderDidFetchFeedSuccessfully:(id)successfully;
- (void)miniGalleryInitialDataProviderDidFailToFetchFeed:(id)feed;
- (void)cameraEffectMiniGalleryFeedViewControllerDidClearSelection:(id)selection;
- (void)cameraEffectMiniGalleryFeedViewController:(id)controller didSelectEffect:(id)effect index:(long long)index;
- (void)cameraEffectMiniGalleryFeedViewControllerDidLoadData:(id)data;
- (void)cameraEffectMiniGalleryFeedViewControllerDidLogImpressionForEffectID:(id)id;
- (BOOL)cameraEffectMiniGalleryFeedViewControllerEffectIdIsLogged:(id)logged;
- (void)cameraEffectMiniGallerySearchViewController:(id)controller didSelectSearchResult:(id)result;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)cameraEffectMiniGalleryDetailView:(id)view didToggleToSaveState:(BOOL)state;
- (void)cameraEffectMiniGalleryDetailViewDidTapImage:(id)image;
- (void)cameraEffectMiniGalleryDetailViewDidTapTitle:(id)title;
- (void)cameraEffectMiniGalleryDetailViewDidTapSubtitle:(id)subtitle;
- (void)cameraEffectMiniGalleryDetailViewDidTapNext:(id)next;
- (void)cameraEffectMiniGalleryDetailViewDidTapSwitchCamera:(id)camera;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)analyticsModule;
@end

#endif /* IGCameraEffectMiniGalleryViewController_h */