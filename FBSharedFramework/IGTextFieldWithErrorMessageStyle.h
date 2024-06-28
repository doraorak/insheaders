//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTextFieldWithErrorMessageStyle_h
#define IGTextFieldWithErrorMessageStyle_h
@import Foundation;

@interface IGTextFieldWithErrorMessageStyle : NSObject {
  /* instance variables */
  BOOL _centerErrorIconInField;
  BOOL _usesFloatingPlaceholder;
  double _errorIconWidth;
  double _errorIconLeftPadding;
  double _errorFontSize;
  double _errorBottomPadding;
  double _oneLineErrorHeight;
  double _textFieldFontSize;
  double _textFieldHeight;
  double _separatorTopPadding;
  double _yPadding;
}

/* instance methods */
- (id)initWithErrorIconWidth:(double)width errorIconLeftPadding:(double)padding errorFontSize:(double)size errorBottomPadding:(double)padding oneLineErrorHeight:(double)height textFieldFontSize:(double)size textFieldHeight:(double)height separatorTopPadding:(double)padding yPadding:(double)padding centerErrorIconInField:(BOOL)field usesFloatingPlaceholder:(BOOL)placeholder;
@end

#endif /* IGTextFieldWithErrorMessageStyle_h */