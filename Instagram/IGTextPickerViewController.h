//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTextPickerViewController_h
#define IGTextPickerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGLabelSectionControllerDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListAdapterUpdateListener-Protocol.h"
#include "IGTextPickerItem.h"

@class CALayer, IGListAdapter, NSArray, NSString, UICollectionView;
@protocol IGTextPickerViewControllerDelegate;

@interface IGTextPickerViewController : IGViewController<IGLabelSectionControllerDelegate, IGListAdapterDataSource, IGListAdapterUpdateListener, IGGestureHandler> {
  /* instance variables */
  NSArray *_items;
  IGTextPickerItem *_selectedItem;
  IGListAdapter *_listAdapter;
  UICollectionView *_collectionView;
  CALayer *_bottomSafeAreaSeparatorLayer;
}

@property (weak, nonatomic) NSObject<IGTextPickerViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithItems:(id)items selectedItem:(id)item analyticsModule:(id)module;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (void)viewSafeAreaInsetsDidChange;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)listAdapter:(id)adapter didFinishUpdate:(long long)update animated:(BOOL)animated;
- (void)didSelectLabelSectionController:(id)controller;
@end

#endif /* IGTextPickerViewController_h */
