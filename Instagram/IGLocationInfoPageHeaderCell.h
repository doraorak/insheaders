//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationInfoPageHeaderCell_h
#define IGLocationInfoPageHeaderCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGStoryOwnerView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGLocationInfoPageModel, IGProfilePictureImageView, IGStory, IGStoryTrayViewModel, IGTextButton, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol IGLocationInfoPageHeaderCellDelegate;

@interface IGLocationInfoPageHeaderCell : UICollectionViewCell<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGLocationInfoPageModel *_infoPageModel;
  IGTextButton *_infoPageButton;
  UILabel *_categoryLabel;
  UILabel *_regionLabel;
  UIView *_contentContainerView;
  IGStory *_reel;
  IGStoryTrayViewModel *_reelViewModel;
  IGProfilePictureImageView *_profileImageView;
  long long _locationHeaderLayoutType;
  UIImageView *_iconView;
  UIButton *_numberGuidesButton;
  IGStoryOwnerView *_reelOwnerView;
}

@property (weak, nonatomic) NSObject<IGLocationInfoPageHeaderCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_moreInfoButtonTapped;
- (void)_didTapStoryView:(id)view;
- (void)_numberGuidesTapped;
@end

#endif /* IGLocationInfoPageHeaderCell_h */
