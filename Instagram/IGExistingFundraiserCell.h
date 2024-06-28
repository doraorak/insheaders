//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGExistingFundraiserCell_h
#define IGExistingFundraiserCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGCreationFlowToggle.h"
#include "IGCreationFlowToggleViewModel.h"

@class UIImage;
@protocol IGExistingFundraiserCellDelegate;

@interface IGExistingFundraiserCell : UICollectionViewCell {
  /* instance variables */
  IGCreationFlowToggle *_fundraiserRow;
  IGCreationFlowToggleViewModel *_viewModel;
}

@property (weak, nonatomic) NSObject<IGExistingFundraiserCellDelegate> *delegate;
@property (retain, nonatomic) UIImage *accessoryImage;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_didToggleSwitch:(id)switch;
@end

#endif /* IGExistingFundraiserCell_h */