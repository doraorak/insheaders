//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInfoPageLinkedBusinessCardCollectionViewCell_h
#define IGInfoPageLinkedBusinessCardCollectionViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGLocalImagesDisplayCardView.h"
#include "IGLocalInfoDisplaySectionView.h"
#include "NSObject-Protocol.h"

@class IGInfoLinkedBusinessViewModel, NSString, UIView;
@protocol IGInfoPageLinkedBusinessCardCollectionViewCellDelegate;

@interface IGInfoPageLinkedBusinessCardCollectionViewCell : UICollectionViewCell<NSObject> {
  /* instance variables */
  IGInfoLinkedBusinessViewModel *_viewModel;
  IGLocalInfoDisplaySectionView *_infoBannerView;
  UIView *_cardBackgroundView;
  IGLocalImagesDisplayCardView *_imagesView;
}

@property (weak, nonatomic) NSObject<IGInfoPageLinkedBusinessCardCollectionViewCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)localBusinessImagesDisplayCardView:(id)view didSelectFeedItem:(id)item;
- (void)localBusinessTileCardView:(id)view didTapViewProfileButton:(id)button;
- (void)localBusinessTileCardView:(id)view didTapProfilePicture:(id)picture;
- (void)localBusinessTileCardView:(id)view didTapTitle:(id)title;
- (void)localBusinessTileCardView:(id)view didTapStoryReel:(id)reel;
@end

#endif /* IGInfoPageLinkedBusinessCardCollectionViewCell_h */
