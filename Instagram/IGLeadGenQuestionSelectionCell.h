//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenQuestionSelectionCell_h
#define IGLeadGenQuestionSelectionCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGLeadGenInfoFieldDataViewModel.h"
#include "UIPickerViewDataSource-Protocol.h"
#include "UIPickerViewDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UIPickerView, UITextField, UIView;
@protocol IGLeadGenQuestionCellDelegate;

@interface IGLeadGenQuestionSelectionCell : UICollectionViewCell<UIPickerViewDelegate, UIPickerViewDataSource, UITextFieldDelegate> {
  /* instance variables */
  UIView *_hairline;
  UILabel *_questionView;
  UIPickerView *_pickerView;
  UITextField *_answerView;
  UILabel *_errorMessage;
  long long _pickedRow;
  IGLeadGenInfoFieldDataViewModel *_viewModel;
  NSObject<IGLeadGenQuestionCellDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (void)configureWithModel:(id)model delegate:(id)delegate;
- (long long)numberOfComponentsInPickerView:(id)view;
- (long long)pickerView:(id)view numberOfRowsInComponent:(long long)component;
- (id)pickerView:(id)view titleForRow:(long long)row forComponent:(long long)component;
- (void)pickerView:(id)view didSelectRow:(long long)row inComponent:(long long)component;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (struct CGSize { double x0; double x1; })dynamicSizeWithConstrainingSize:(struct CGSize { double x0; double x1; })size;
- (void)_didFinishPick;
@end

#endif /* IGLeadGenQuestionSelectionCell_h */