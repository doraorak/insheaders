//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromptParticipantCollectionViewCell_h
#define IGPromptParticipantCollectionViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGPromptParticipantListViewModel.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGRingViewSpecFactory, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol IGPromptParticipantCollectionViewCellDelegate;

@interface IGPromptParticipantCollectionViewCell : UICollectionViewCell<UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
  /* instance variables */
  IGPromptParticipantListViewModel *_viewModel;
  UICollectionViewFlowLayout *_flowLayout;
  IGRingViewSpecFactory *_ringViewSpecFactory;
  BOOL _useBrandRefreshColors;
}

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) NSObject<IGPromptParticipantCollectionViewCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory;
- (void)layoutSubviews;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplaySupplementaryView:(id)view forElementKind:(id)kind atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout referenceSizeForFooterInSection:(long long)section;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
@end

#endif /* IGPromptParticipantCollectionViewCell_h */
