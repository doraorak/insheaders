//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingTextVariantPickerViewController_h
#define IGShoppingTextVariantPickerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAPIProductDetailsProductItemDict.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapter.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListSingleSectionControllerDelegate-Protocol.h"
#include "IGShoppingTextVariantPickerConfiguration.h"
#include "IGShoppingVariantDimensionViewModel.h"
#include "IGTextViewSectionControllerDelegate-Protocol.h"
#include "IGUserSession.h"

@class NSString, UICollectionView;
@protocol IGShoppingTextVariantPickerViewControllerDelegate;

@interface IGShoppingTextVariantPickerViewController : IGViewController<IGGestureHandler, IGListAdapterDataSource, IGListSingleSectionControllerDelegate, IGTextViewSectionControllerDelegate> {
  /* instance variables */
  IGShoppingVariantDimensionViewModel *_variantDimensionViewModel;
  IGShoppingTextVariantPickerConfiguration *_configuration;
  IGUserSession *_userSession;
  IGAPIProductDetailsProductItemDict *_productItem;
  IGListAdapter *_listAdapter;
  UICollectionView *_collectionView;
  NSString *_sizeScore;
  NSString *_sizeRecommendation;
  long long _numColumns;
  double _rowHeight;
}

@property (weak, nonatomic) NSObject<IGShoppingTextVariantPickerViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVariantDimensionViewModel:(id)model configuration:(id)configuration userSession:(id)session productItem:(id)item;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)didSelectSectionController:(id)controller withObject:(id)object;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)_handleSizingChartTap;
- (void)_handleSizingChartTapBState;
- (void)textViewSectionController:(id)controller didTapOnString:(id)string URL:(id)url;
- (void)didSelectTextViewSectionController:(id)controller;
- (void)textViewSectionController:(id)controller didLongTapOnString:(id)string URL:(id)url;
- (void)textViewSectionController:(id)controller didTapOnNonLinkedString:(id)string touchEvent:(unsigned long long)event;
@end

#endif /* IGShoppingTextVariantPickerViewController_h */
