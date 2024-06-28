//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPollStickerVoteView_h
#define IGPollStickerVoteView_h
@import Foundation;

#include "UIView.h"
#include "IGAPIPollSticker.h"
#include "IGGradientLabel.h"
#include "IGGradientView.h"
#include "IGOverlayTransformViewType-Protocol.h"

@class NSArray, NSString, UIColor, UIFont, UILabel, UITextView, UIView;

@interface IGPollStickerVoteView : UIView<IGOverlayTransformViewType> {
  /* instance variables */
  UIView *_circleView;
  BOOL _showResults;
  UITextView *_questionView;
  BOOL _showQuestion;
  BOOL _useCalculatedFontSize;
  BOOL _userHasVoted;
  UIView *_voteView;
  UIView *_leftBackgroundView;
  IGGradientView *_leftBackgroundGradientView;
  UIView *_rightBackgroundView;
  IGGradientView *_rightBackgroundGradientView;
  IGGradientLabel *_leftTextLabel;
  IGGradientLabel *_rightTextLabel;
  UILabel *_leftNumberLabel;
  UILabel *_rightNumberLabel;
  IGGradientLabel *_highlightedTextLabel;
}

@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) NSArray *leftTextLabelGradientColors;
@property (retain, nonatomic) NSArray *rightTextLabelGradientColors;
@property (retain, nonatomic) UIColor *numberLabelColor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } optionInsets;
@property (nonatomic) double textLabelConstrainSizeScale;
@property (nonatomic) BOOL isCurrentUser;
@property (readonly, nonatomic) IGAPIPollSticker *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)updateLabelWithOption:(id)option model:(id)model;
- (id)attributedStringForPercent:(double)percent;
- (void)layoutSubviews;
- (void)applySharedResultUIWithLeftPercent:(long long)percent;
- (id)transformTargetView;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityHint;
@end

#endif /* IGPollStickerVoteView_h */