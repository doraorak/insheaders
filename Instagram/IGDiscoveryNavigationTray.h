//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryNavigationTray_h
#define IGDiscoveryNavigationTray_h
@import Foundation;

#include "UIView.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class CALayer, IGListAdapter, IGShimmeringView, IGUserSession, NSArray, NSString, UIAccessibilityElement, UICollectionView, UICollectionViewFlowLayout;
@protocol IGDiscoveryNavigationTrayDelegate, IGDiscoveryNavigationTrayImpressionHandler;

@interface IGDiscoveryNavigationTray : UIView<IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate> {
  /* instance variables */
  IGListAdapter *_listAdapter;
  NSObject<IGDiscoveryNavigationTrayImpressionHandler> *_impressionHandler;
  UICollectionView *_collectionView;
  UICollectionViewFlowLayout *_collectionViewLayout;
  NSString *_analyticsModule;
  NSArray *_trayItems;
  CALayer *_separatorLayer;
  IGShimmeringView *_shimmeringView;
  UIAccessibilityElement *_collectionAccessibilityElement;
  BOOL _isLoading;
  IGUserSession *_userSession;
  BOOL _hideSeparatorLayer;
}

@property (weak, nonatomic) NSObject<IGDiscoveryNavigationTrayDelegate> *delegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) long long itemStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session impressionHandler:(id)handler analyticsModule:(id)module;
- (void)setLoading:(BOOL)loading;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)setPercentCollapsed:(double)collapsed preservingHeight:(BOOL)height;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits expanded:(BOOL)expanded;
@end

#endif /* IGDiscoveryNavigationTray_h */
