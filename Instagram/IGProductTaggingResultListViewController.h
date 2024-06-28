//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProductTaggingResultListViewController_h
#define IGProductTaggingResultListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListSingleSectionControllerDelegate-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGShoppingBloksDataSourceProvider.h"
#include "IGShoppingBrandSelectionViewControllerDelegate-Protocol.h"
#include "IGShoppingProductSourceSelectionConfiguration.h"
#include "IGShoppingSearchProductListGroupResultViewModel.h"
#include "IGTabControlSegment-Protocol.h"
#include "IGTaggingSearchLogger.h"

@class BKBloksHostingView, IGBottomButtonsView, IGKeyboardObserver, IGListAdapter, IGProductTaggingViewConfiguration, IGRefreshControl, IGScrollViewAnnouncer, IGShoppingInlineVariantSelectionController, IGShoppingNavigationAnalyticsContext, IGShoppingProductSourceModel, IGUserSession, NSString, UICollectionView, UIResponder;
@protocol IGProductTaggingResultListViewControllerDelegate, IGShoppingProductSearchDataSource;

@interface IGProductTaggingResultListViewController : IGViewController<IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGScrollViewListener, IGListAdapterDataSource, IGListSingleSectionControllerDelegate, IGShoppingBrandSelectionViewControllerDelegate, IGTabControlSegment> {
  /* instance variables */
  IGUserSession *_userSession;
  IGProductTaggingViewConfiguration *_taggingConfig;
  IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
  NSObject<IGShoppingProductSearchDataSource> *_searchDataSource;
  IGShoppingProductSourceModel *_lastLoadedProductSource;
  IGShoppingProductSourceSelectionConfiguration *_productSourceSelectionConfig;
  IGBottomButtonsView *_ctaButtonView;
  UICollectionView *_collectionView;
  IGRefreshControl *_refreshControl;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  IGListAdapter *_listAdapter;
  IGShoppingBloksDataSourceProvider *_bloksDataSourceProvider;
  BKBloksHostingView *_embeddedBloksView;
  NSString *_filterQuery;
  IGShoppingInlineVariantSelectionController *_variantSelectionController;
  IGShoppingSearchProductListGroupResultViewModel *_presentedGroupResultViewModel;
  double _keyboardHeight;
  IGKeyboardObserver *_keyboardObserver;
  IGTaggingSearchLogger *_taggingLogger;
  UIResponder *_searchResponder;
  NSObject<IGShoppingBrandSelectionViewControllerDelegate> *_brandSelectionDelegate;
}

@property (weak, nonatomic) NSObject<IGProductTaggingResultListViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session taggingConfig:(id)config searchDataSource:(id)source;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)taggingSearchDataSourceDidStartLoading;
- (void)taggingSearchDataSourceDidUpdateResults;
- (void)taggingSearchDataSourceDidFailLoading;
- (void)didSelectSectionController:(id)controller withObject:(id)object;
- (void)sectionController:(id)controller didSelectItemWithViewModel:(id)model;
- (void)sectionController:(id)controller didTapDecoratorForItemWithViewModel:(id)model;
- (void)shoppingBrandSelectionViewController:(id)controller didSelectUser:(id)user;
- (void)bloksDataSourceProvider:(id)provider didUpdateBloksView:(id)view;
- (void)bloksDataSourceProvider:(id)provider didReceiveErrorFetchingBloksViewModel:(id)model;
- (void)_refreshSearchResultsIfNeeded;
- (void)_didTapCTA;
- (void)shoppingInlineVariantSelectionController:(id)controller didResolveWithProductItem:(id)item productSelectionBehavior:(id)behavior;
@end

#endif /* IGProductTaggingResultListViewController_h */