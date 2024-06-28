//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingSizingChartViewController_h
#define IGShoppingSizingChartViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGFullsizeNavigationTitleViewContainerView.h"
#include "IGShoppingSizingChartDataModel.h"
#include "IGShoppingSizingChartNavigationBarTitleView.h"
#include "IGShoppingTextCellConfiguration.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class NSString, UICollectionView;

@interface IGShoppingSizingChartViewController : IGViewController<UICollectionViewDataSource, UICollectionViewDelegate> {
  /* instance variables */
  IGShoppingSizingChartDataModel *_sizingChart;
  UICollectionView *_collectionView;
  IGShoppingTextCellConfiguration *_valueCellConfiguration;
  IGShoppingTextCellConfiguration *_headerCellConfiguration;
  IGFullsizeNavigationTitleViewContainerView *_titleContainerView;
  IGShoppingSizingChartNavigationBarTitleView *_titleView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSizingChartDataModel:(id)model;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (void)scrollViewDidScroll:(id)scroll;
- (struct { BOOL x0; struct CGSize { double x0; double x1; } x1; })collectionView:(id)view layout:(id)layout layoutSpecForItemAtIndexPath:(id)path constrainedToWidth:(double)width constrainedToNumLines:(long long)lines;
- (struct { BOOL x0; struct CGSize { double x0; double x1; } x1; })collectionView:(id)view layout:(id)layout layoutSpecForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path constrainedToWidth:(double)width constrainedToNumLines:(long long)lines;
@end

#endif /* IGShoppingSizingChartViewController_h */
