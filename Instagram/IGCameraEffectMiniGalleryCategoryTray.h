//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraEffectMiniGalleryCategoryTray_h
#define IGCameraEffectMiniGalleryCategoryTray_h
@import Foundation;

#include "UIView.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGAccessibilityCollectionController, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;
@protocol IGCameraEffectMiniGalleryCategoryTrayDataSource, IGCameraEffectMiniGalleryCategoryTrayDelegate;

@interface IGCameraEffectMiniGalleryCategoryTray : UIView<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
  /* instance variables */
  UICollectionViewFlowLayout *_collectionViewFlowLayout;
  UICollectionView *_collectionView;
  UIView *_underlineView;
  IGAccessibilityCollectionController *_accessibilityCollectionController;
  NSMutableArray *_cellSizes;
  double _additionalHorizontalPadding;
  BOOL _isPrismSegmentedTabsEnabled;
}

@property (nonatomic) long long selectedItemIndex;
@property (weak, nonatomic) NSObject<IGCameraEffectMiniGalleryCategoryTrayDataSource> *dataSource;
@property (weak, nonatomic) NSObject<IGCameraEffectMiniGalleryCategoryTrayDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (void)reloadData;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)path;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)scroll;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)accessibilityActivate;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityPerformMagicTap;
@end

#endif /* IGCameraEffectMiniGalleryCategoryTray_h */
