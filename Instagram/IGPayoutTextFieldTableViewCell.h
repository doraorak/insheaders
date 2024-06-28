//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPayoutTextFieldTableViewCell_h
#define IGPayoutTextFieldTableViewCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "UITextFieldDelegate-Protocol.h"

@class IGTextFieldWithErrorMessage, NSString;
@protocol IGPayoutTextFieldTableViewCellDelegate;

@interface IGPayoutTextFieldTableViewCell : UITableViewCell<UITextFieldDelegate> {
  /* instance variables */
  IGTextFieldWithErrorMessage *_textField;
  long long _identifier;
}

@property (weak, nonatomic) NSObject<IGPayoutTextFieldTableViewCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)disableEditing;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_datePickerDidSelectDate:(id)date;
- (void)_editingChanged:(id)changed;
- (void)_editingEndedOnExit:(id)exit;
- (void)_editingEnded:(id)ended;
- (void)_textFieldDoneButtonTapped:(id)tapped;
@end

#endif /* IGPayoutTextFieldTableViewCell_h */