//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSaveCollectionTitleFieldValidator_h
#define IGSaveCollectionTitleFieldValidator_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@class NSString;
@protocol IGSaveCollectionTitleFieldValidatorDelegate;

@interface IGSaveCollectionTitleFieldValidator : NSObject<UITextFieldDelegate>

@property (weak, nonatomic) NSObject<IGSaveCollectionTitleFieldValidatorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (BOOL)textFieldShouldReturn:(id)return;
@end

#endif /* IGSaveCollectionTitleFieldValidator_h */
