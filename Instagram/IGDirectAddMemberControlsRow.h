//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAddMemberControlsRow_h
#define IGDirectAddMemberControlsRow_h
@import Foundation;

#include "UIControl.h"

@class IGRadioButton, UILabel;

@interface IGDirectAddMemberControlsRow : UIControl {
  /* instance variables */
  UILabel *_titleLabel;
  IGRadioButton *_radioButton;
}

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
@end

#endif /* IGDirectAddMemberControlsRow_h */