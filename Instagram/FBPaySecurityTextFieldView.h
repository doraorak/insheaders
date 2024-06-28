//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPaySecurityTextFieldView_h
#define FBPaySecurityTextFieldView_h
@import Foundation;

#include "UIView.h"
#include "FBPayPINLoadingCircleView.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSNumber, NSString, UIImageView, UILabel, UITextField, UIView;
@protocol FBPaySecurityTextFieldViewDataSource, FBPaySecurityTextFieldViewDelegate;

@interface FBPaySecurityTextFieldView : UIView<UITextFieldDelegate> {
  /* instance variables */
  UILabel *_topLabel;
  UITextField *_textField;
  UIImageView *_iconImageView;
  FBPayPINLoadingCircleView *_loadingView;
  UIView *_textFieldUnderlineView;
  UILabel *_errorPromptLabel;
  long long _currentStep;
  BOOL _iconHidden;
}

@property (weak, nonatomic) NSObject<FBPaySecurityTextFieldViewDataSource> *dataSource;
@property (weak, nonatomic) NSObject<FBPaySecurityTextFieldViewDelegate> *delegate;
@property (retain, nonatomic) NSNumber *maxNumberOfCharacters;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setKeyboardType:(long long)type;
- (void)reloadView;
- (BOOL)textFieldShouldReturn:(id)return;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
@end

#endif /* FBPaySecurityTextFieldView_h */