//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMutedWordsEditDictionarySheetViewController_h
#define IGMutedWordsEditDictionarySheetViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGMutedWordsEditDictionaryPostModel.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class IGBottomButtonsView, NSString, UILabel, UITextView;
@protocol IGMutedWordsEditDictionarySheetViewControllerDelegate;

@interface IGMutedWordsEditDictionarySheetViewController : IGViewController<UITextViewDelegate, IGPartialModalSheetListener, IGGestureHandler> {
  /* instance variables */
  IGMutedWordsEditDictionaryPostModel *_model;
  UILabel *_explanationLabel;
  UITextView *_textView;
  UILabel *_placeholder;
  IGBottomButtonsView *_addButton;
  BOOL _didTapAdd;
  BOOL _shouldBecomeFirstResponder;
}

@property (weak, nonatomic) NSObject<IGMutedWordsEditDictionarySheetViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithModel:(id)model;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)prefersNavigationBarDividerHidden;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)textViewDidChange:(id)change;
- (void)textViewDidEndEditing:(id)editing;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)_didTapAddButton;
- (void)_resignResponder;
- (void)mutedWordsEditDictionaryPostModel:(id)model didFinishChangingWordsWithSuccess:(BOOL)success;
@end

#endif /* IGMutedWordsEditDictionarySheetViewController_h */