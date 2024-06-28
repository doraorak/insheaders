//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLoginAccountCell_h
#define IGLoginAccountCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGLoginAccountCellViewModel.h"

@class IGImageView, IGTextButton, UIButton, UIImageView, UILabel, UIView;
@protocol IGLoginAccountCellDelegate;

@interface IGLoginAccountCell : UICollectionViewCell {
  /* instance variables */
  IGImageView *_profilePictureView;
  UIView *_usernameLoginView;
  IGTextButton *_loginButton;
  UIButton *_removeButton;
  UILabel *_usernameLabel;
  UILabel *_descriptionLabel;
  UIView *_topSeparatorView;
  UIView *_bottomSeparatorView;
  IGLoginAccountCellViewModel *_viewModel;
  unsigned long long _style;
  UIView *_notificationView;
  UIImageView *_notificationIndicator;
}

@property (weak, nonatomic) NSObject<IGLoginAccountCellDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
- (void)_didTapRemoveButton;
@end

#endif /* IGLoginAccountCell_h */