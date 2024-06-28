//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayFormTextViewCell_h
#define FBPayFormTextViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "FBPayFormTextCellViewModel.h"

@class UILabel;

@interface FBPayFormTextViewCell : UICollectionViewCell {
  /* instance variables */
  FBPayFormTextCellViewModel *_viewModel;
  UILabel *_textLabel;
}

/* instance methods */
- (void)setViewModel:(id)model;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textLabelFrameThatFitsInSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* FBPayFormTextViewCell_h */
