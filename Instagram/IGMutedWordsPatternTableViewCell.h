//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMutedWordsPatternTableViewCell_h
#define IGMutedWordsPatternTableViewCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "UITextFieldDelegate-Protocol.h"

@class IGTapButton, NSString, UITextField, UIView;
@protocol IGMutedWordsPatternTableViewCellDelegate;

@interface IGMutedWordsPatternTableViewCell : UITableViewCell<UITextFieldDelegate> {
  /* instance variables */
  UITextField *_textField;
  IGTapButton *_clearButton;
  UIView *_separatorView;
}

@property (weak, nonatomic) NSObject<IGMutedWordsPatternTableViewCellDelegate> *delegate;
@property (readonly, nonatomic) NSString *pattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)_clearContent;
@end

#endif /* IGMutedWordsPatternTableViewCell_h */
