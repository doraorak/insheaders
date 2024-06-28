//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTitleAndSubtitleAndActionCell_h
#define IGTitleAndSubtitleAndActionCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGTitleAndSubtitleAndActionViewModel.h"

@class CALayer, UIButton, UILabel;
@protocol IGTitleAndSubtitleAndActionCellDelegate;

@interface IGTitleAndSubtitleAndActionCell : UICollectionViewCell {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  IGTitleAndSubtitleAndActionViewModel *_viewModel;
  UIButton *_actionButton;
  CALayer *_bottomSeparator;
}

@property (weak, nonatomic) NSObject<IGTitleAndSubtitleAndActionCellDelegate> *delegate;

/* instance methods */
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
- (void)_titleAndSubtitleAndActionACell:(id)acell didTapActionButton:(id)button;
@end

#endif /* IGTitleAndSubtitleAndActionCell_h */
