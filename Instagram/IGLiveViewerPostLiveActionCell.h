//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveViewerPostLiveActionCell_h
#define IGLiveViewerPostLiveActionCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class IGCustomAvatarStickerTrayItemView, UIImageView, UILabel, UIView;

@interface IGLiveViewerPostLiveActionCell : UICollectionViewCell {
  /* instance variables */
  UIView *_iconContainerView;
  UIImageView *_iconView;
  UIView *_labelContainerView;
  UILabel *_titleLabel;
  UILabel *_detailLabel;
  UIImageView *_disclosureIndicatorView;
  IGCustomAvatarStickerTrayItemView *_avatarView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (void)traitCollectionDidChange:(id)change;
- (void)configureWithViewModel:(id)model;
@end

#endif /* IGLiveViewerPostLiveActionCell_h */
