//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryContainerCarouselCell_h
#define IGDiscoveryContainerCarouselCell_h
@import Foundation;

#include "IGDiscoveryGridItemCell.h"
#include "IGDiscoveryContainerHeaderView.h"
#include "IGFeedItemPageControlMediaOverlay.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSString, UICollectionView;

@interface IGDiscoveryContainerCarouselCell : IGDiscoveryGridItemCell<UIScrollViewDelegate> {
  /* instance variables */
  IGFeedItemPageControlMediaOverlay *_pageControlOverlay;
}

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGDiscoveryContainerHeaderView *headerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setCurrentPage:(long long)page;
@end

#endif /* IGDiscoveryContainerCarouselCell_h */
