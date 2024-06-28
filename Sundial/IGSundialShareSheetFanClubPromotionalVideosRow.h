//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialShareSheetFanClubPromotionalVideosRow_h
#define IGSundialShareSheetFanClubPromotionalVideosRow_h
@import Foundation;

#include "UIControl.h"

@class IGRadioButton, UILabel;

@interface IGSundialShareSheetFanClubPromotionalVideosRow : UIControl {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  IGRadioButton *_radioButton;
}

/* instance methods */
- (id)initWithFanClubPromotionalVideosRowType:(unsigned long long)type;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setSelected:(BOOL)selected;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
@end

#endif /* IGSundialShareSheetFanClubPromotionalVideosRow_h */
