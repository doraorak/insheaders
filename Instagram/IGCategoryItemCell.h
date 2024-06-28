//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCategoryItemCell_h
#define IGCategoryItemCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGCategoryItemModel.h"
#include "IGCategoryPreviewMediasContainerView.h"
#include "IGFollowControllerDelegate-Protocol.h"

@class IGDirectAvatarView, IGFollowController, IGLabel, IGListSingleSectionController, IGStackLayout, IGUser, NSString, UICollectionView, UIImageView, UITapGestureRecognizer, UIView;
@protocol IGCategoryItemCellDelegate;

@interface IGCategoryItemCell : UICollectionViewCell<IGFollowControllerDelegate> {
  /* instance variables */
  IGUser *_recommendedAccount;
  IGCategoryItemModel *_viewModel;
  IGDirectAvatarView *_avatarView;
  UIImageView *_fallbackImageView;
  UITapGestureRecognizer *_avatarTapRecognizer;
  IGLabel *_titleLabel;
  IGLabel *_categoryLabel;
  UIView *_verifiedBadgeView;
  IGStackLayout *_labelStackLayout;
  IGFollowController *_followController;
  IGCategoryPreviewMediasContainerView *_previewMediasContainerView;
  IGListSingleSectionController *_sectionController;
  UIView *_separatorView;
  UICollectionView *_previewMediaCollectionView;
}

@property (weak, nonatomic) NSObject<IGCategoryItemCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)followController:(id)controller buttonWasTappedWithAction:(long long)action;
- (void)followController:(id)controller didCompleteAction:(long long)action success:(BOOL)success;
- (void)followControllerDidDetectNewButtonState:(id)state;
- (void)_avatarTapped;
@end

#endif /* IGCategoryItemCell_h */
