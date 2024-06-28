//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryDraftGalleryView_h
#define IGStoryDraftGalleryView_h
@import Foundation;

#include "UIView.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel;
@protocol IGStoryDraftGalleryViewDelegate;

@interface IGStoryDraftGalleryView : UIView<UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
  /* instance variables */
  UICollectionViewFlowLayout *_collectionViewLayout;
  UICollectionView *_collectionView;
  UILabel *_disclaimerLabel;
  NSMutableArray *_selectedDrafts;
  NSArray *_drafts;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _disclaimerLabelMargins;
}

@property (weak, nonatomic) NSObject<IGStoryDraftGalleryViewDelegate> *delegate;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) BOOL isEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didDeselectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
@end

#endif /* IGStoryDraftGalleryView_h */
