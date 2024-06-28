//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActionableConfirmationToastViewLeftButtonContent_h
#define IGActionableConfirmationToastViewLeftButtonContent_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString;

@interface IGActionableConfirmationToastViewLeftButtonContent : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_styledTextButton_text;
  long long _styledTextButton_style;
}

/* class methods */
+ (id)styledTextButtonWithText:(id)text style:(long long)style;

/* instance methods */
@end

#endif /* IGActionableConfirmationToastViewLeftButtonContent_h */
