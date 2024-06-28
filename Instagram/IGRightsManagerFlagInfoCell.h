//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRightsManagerFlagInfoCell_h
#define IGRightsManagerFlagInfoCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class UIButton, UILabel;
@protocol IGRightsManagerFlagInfoCellDelegate;

@interface IGRightsManagerFlagInfoCell : UICollectionViewCell {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_firstParagraphLabel;
  UILabel *_secondParagraphLabel;
  UIButton *_seeAllCountriesButton;
  UIButton *_deleteButton;
  UIButton *_learnMoreButton;
}

@property (weak, nonatomic) NSObject<IGRightsManagerFlagInfoCellDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_handleSeeAllCountriesButtonSelected:(id)selected;
- (void)_handleDeleteButtonSelected:(id)selected;
- (void)_handleLearnMoreButtonSelected:(id)selected;
@end

#endif /* IGRightsManagerFlagInfoCell_h */