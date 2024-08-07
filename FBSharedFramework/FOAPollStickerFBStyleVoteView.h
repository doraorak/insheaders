//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FOAPollStickerFBStyleVoteView_h
#define FOAPollStickerFBStyleVoteView_h
@import Foundation;

#include "FOAPollStickerVoteView.h"

@interface FOAPollStickerFBStyleVoteView : FOAPollStickerVoteView
/* instance methods */
- (void)layoutSubviews;
- (id)labelFont;
- (id)createLeftGradientLabel;
- (id)createRightGradientLabel;
- (id)numberLabelColor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })optionInsets;
- (double)textLabelConstrainSizeScale;
- (void)applySharedResultUIWithLeftPercent:(long long)percent;
- (id)attributedStringForPercent:(double)percent;
- (void)updateLabelWithOption:(id)option optionText:(id)text optionFontSize:(double)size;
@end

#endif /* FOAPollStickerFBStyleVoteView_h */
