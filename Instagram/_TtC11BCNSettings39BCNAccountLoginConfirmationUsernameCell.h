//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11BCNSettings39BCNAccountLoginConfirmationUsernameCell_h
#define _TtC11BCNSettings39BCNAccountLoginConfirmationUsernameCell_h
@import Foundation;

#include "_TtC11BCNSettings35BCNAccountLoginConfirmationBaseCell.h"
#include "UITextFieldDelegate-Protocol.h"

@interface _TtC11BCNSettings39BCNAccountLoginConfirmationUsernameCell : _TtC11BCNSettings35BCNAccountLoginConfirmationBaseCell<UITextFieldDelegate> { // (Swift)
  /* instance variables */
   profilePictureView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)textFieldShouldBeginEditing:(id)editing;
@end

#endif /* _TtC11BCNSettings39BCNAccountLoginConfirmationUsernameCell_h */
