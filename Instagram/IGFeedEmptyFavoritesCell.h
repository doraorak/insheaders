//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedEmptyFavoritesCell_h
#define IGFeedEmptyFavoritesCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDSHeadlineViewDelegate-Protocol.h"

@class IGDSHeadlineView, IGDSHeadlineViewModel, NSString;
@protocol IGFeedEmptyFavoritesCellDelegate;

@interface IGFeedEmptyFavoritesCell : UICollectionViewCell<IGDSHeadlineViewDelegate> {
  /* instance variables */
  IGDSHeadlineView *_emptyFavoritesView;
  IGDSHeadlineViewModel *_emptyFavoritesViewModel;
}

@property (weak, nonatomic) NSObject<IGFeedEmptyFavoritesCellDelegate> *delegate;
@property (nonatomic) BOOL isImmersive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureWithModel:(id)model;
- (void)headlineTextButtonWasTapped;
- (void)headlineProfileImageWasTapped;
@end

#endif /* IGFeedEmptyFavoritesCell_h */