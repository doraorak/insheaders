//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNativeScreenDemoViewController_h
#define IGNativeScreenDemoViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;

@interface IGNativeScreenDemoViewController : UIViewController<UITextFieldDelegate> {
  /* instance variables */
  UITextField *_textField;
  id /* block */ _lispyAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLispyAction:(id /* block */)action;
- (void)_submit:(id)_submit;
- (void)viewDidLoad;
@end

#endif /* IGNativeScreenDemoViewController_h */
