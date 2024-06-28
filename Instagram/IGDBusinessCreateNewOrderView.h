//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDBusinessCreateNewOrderView_h
#define IGDBusinessCreateNewOrderView_h
@import Foundation;

#include "UIView.h"
#include "IGDBusinessOrderManagementTextInputView.h"
#include "UITextViewDelegate-Protocol.h"

@class IGDSMultilineFormField, IGMultilineFormField, NSString, UILabel;
@protocol IGDBusinessCreateNewOrderViewDelegate;

@interface IGDBusinessCreateNewOrderView : UIView<UITextViewDelegate> {
  /* instance variables */
  UILabel *_totalSectionLabel;
  IGDBusinessOrderManagementTextInputView *_totalInputView;
  UILabel *_notesSectionLabel;
  IGMultilineFormField *_notesFormField;
  IGDSMultilineFormField *_igdsNotesFormField;
  BOOL _isPrismFormFieldEnabled;
}

@property (weak, nonatomic) NSObject<IGDBusinessCreateNewOrderViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (id)notes;
- (void)textViewDidChange:(id)change;
- (void)inputHasChangedWithStringLength:(unsigned long long)length;
@end

#endif /* IGDBusinessCreateNewOrderView_h */
