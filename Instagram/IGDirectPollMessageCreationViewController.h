//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPollMessageCreationViewController_h
#define IGDirectPollMessageCreationViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class IGDirectThreadTheme, IGKeyboardObserver, IGTextButton, NSArray, NSString, UITableView;
@protocol IGDirectPollMessageCreationDelegate;

@interface IGDirectPollMessageCreationViewController : IGViewController<UITableViewDelegate, UITableViewDataSource, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGGestureHandler> {
  /* instance variables */
  IGDirectThreadTheme *_threadTheme;
  UITableView *_tableView;
  NSString *_question;
  NSArray *_options;
  IGTextButton *_createPollButton;
  IGKeyboardObserver *_keyboardObserver;
  BOOL _keyboardIsVisible;
}

@property (weak, nonatomic) NSObject<IGDirectPollMessageCreationDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (void)_didTapCreatePoll:(id)poll;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)questionCell:(id)cell didUpdateQuestion:(id)question;
- (void)questionCell:(id)cell editingQuestionText:(id)text;
- (void)optionCell:(id)cell didUpdateOption:(id)option;
- (void)optionCellDidTapClearButton:(id)button;
- (void)optionCellDidReturn:(id)return withOption:(id)option;
- (void)optionCellIsAddingText:(id)text replacementString:(id)string;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
- (BOOL)prefersStatusBarHidden;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGDirectPollMessageCreationViewController_h */
