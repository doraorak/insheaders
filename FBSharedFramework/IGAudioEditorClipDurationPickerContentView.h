//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioEditorClipDurationPickerContentView_h
#define IGAudioEditorClipDurationPickerContentView_h
@import Foundation;

#include "UIView.h"
#include "UIPickerViewDataSource-Protocol.h"
#include "UIPickerViewDelegate-Protocol.h"

@class CALayer, NSString, UIButton, UILabel, UIPickerView;
@protocol IGAudioEditorClipDurationPickerContentViewDelegate;

@interface IGAudioEditorClipDurationPickerContentView : UIView<UIPickerViewDataSource, UIPickerViewDelegate> {
  /* instance variables */
  UIPickerView *_pickerView;
  UIButton *_doneButton;
  UILabel *_headerLabel;
  CALayer *_headerAndPickerLineSeparator;
  CALayer *_pickerAndDoneButtonLineSeparator;
  long long _currentLength;
}

@property (weak, nonatomic) NSObject<IGAudioEditorClipDurationPickerContentViewDelegate> *delegate;
@property (nonatomic) long long maxLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_didTapDoneButton:(id)button;
- (long long)numberOfComponentsInPickerView:(id)view;
- (long long)pickerView:(id)view numberOfRowsInComponent:(long long)component;
- (double)pickerView:(id)view widthForComponent:(long long)component;
- (double)pickerView:(id)view rowHeightForComponent:(long long)component;
- (id)pickerView:(id)view titleForRow:(long long)row forComponent:(long long)component;
- (void)pickerView:(id)view didSelectRow:(long long)row inComponent:(long long)component;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* IGAudioEditorClipDurationPickerContentView_h */