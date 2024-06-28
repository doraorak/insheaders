//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMultiLineTokenField_h
#define IGMultiLineTokenField_h
@import Foundation;

#include "UIView.h"
#include "IGMultiLineTokenFieldDelegate-Protocol.h"
#include "IGTableLayoutSpec.h"
#include "IGTextFieldDelegate-Protocol.h"
#include "IGTokenFieldTheme.h"
#include "IGTokenSearchField.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSMutableOrderedSet, NSString, UIButton, UILabel, UIScrollView, UIView;

@interface IGMultiLineTokenField : UIView<IGTextFieldDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate> {
  /* instance variables */
  IGTokenFieldTheme *_tokenFieldTheme;
  IGTokenSearchField *_tokenSearchField;
  UIButton *_addButton;
  UIScrollView *_scrollView;
  BOOL _shadowVisible;
  NSMutableArray *_tokenViews;
  UIView *_borderedView;
}

@property (retain, nonatomic) NSMutableOrderedSet *tokens;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isEditing;
@property (readonly, nonatomic) IGTableLayoutSpec *tableInterface;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) BOOL isDisabled;
@property (weak, nonatomic) NSObject<IGMultiLineTokenFieldDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFieldTheme:(id)theme addButtonEnabled:(BOOL)enabled;
- (void)traitCollectionDidChange:(id)change;
- (void)_didTapAddButton;
- (void)_didTapOnScrollView:(id)view;
- (id)searchQuery;
- (BOOL)textFieldShouldBeginEditing:(id)editing;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (void)textFieldDidChange:(id)change;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)textFieldDidTapBackspaceKey:(id)key previousText:(id)text;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)tokenViewDidBecomeFirstResponder:(id)responder;
- (void)tokenViewDidResignFirstResponder:(id)responder;
- (void)tokenViewWantsDelete:(id)delete replacementString:(id)string;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGMultiLineTokenField_h */