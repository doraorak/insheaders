//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenFormFieldCell_h
#define IGLeadGenFormFieldCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGLeadGenFormFieldViewModel.h"
#include "UITextFieldDelegate-Protocol.h"

@class IGDSFormField, IGFormField, NSString;
@protocol IGLeadGenFormFieldCellDelegate;

@interface IGLeadGenFormFieldCell : UICollectionViewCell<UITextFieldDelegate> {
  /* instance variables */
  IGDSFormField *_igdsFormField;
  IGFormField *_formField;
  IGLeadGenFormFieldViewModel *_viewModel;
  BOOL _enablePrism;
}

@property (weak, nonatomic) NSObject<IGLeadGenFormFieldCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)textFieldDidEndEditing:(id)editing;
@end

#endif /* IGLeadGenFormFieldCell_h */