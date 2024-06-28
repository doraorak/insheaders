//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTextFieldLengthConstraint_h
#define IGTextFieldLengthConstraint_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@class NSString;

@interface IGTextFieldLengthConstraint : NSObject<UITextFieldDelegate> {
  /* instance variables */
  struct { unsigned int x :1 shouldChangeCharactersInRange; } _delegateFlags;
  unsigned long long _maxLength;
  NSObject<UITextFieldDelegate> *_textFieldDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMaxLength:(unsigned long long)length;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)forwardingTargetForSelector:(SEL)selector;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
@end

#endif /* IGTextFieldLengthConstraint_h */