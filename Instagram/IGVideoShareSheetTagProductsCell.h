//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoShareSheetTagProductsCell_h
#define IGVideoShareSheetTagProductsCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGCreationMetadataButtonRow.h"
#include "IGVideoShareSheetTagProductsCellViewModel.h"

@protocol IGVideoShareSheetTagProductsCellDelegate;

@interface IGVideoShareSheetTagProductsCell : UICollectionViewCell {
  /* instance variables */
  IGCreationMetadataButtonRow *_tagProductsRow;
  IGVideoShareSheetTagProductsCellViewModel *_viewModel;
}

@property (weak, nonatomic) NSObject<IGVideoShareSheetTagProductsCellDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
- (void)_didSelectTagProductsRow;
@end

#endif /* IGVideoShareSheetTagProductsCell_h */
