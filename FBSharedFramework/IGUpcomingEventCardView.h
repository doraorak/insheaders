//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUpcomingEventCardView_h
#define IGUpcomingEventCardView_h
@import Foundation;

#include "UIView.h"
#include "IGGradientView.h"
#include "IGImageView.h"
#include "IGStickerFullWidthButtonView.h"

@class NSAttributedString, UILabel, UIView;

@interface IGUpcomingEventCardView : UIView {
  /* instance variables */
  UIView *_backgroundView;
  UILabel *_titleLabel;
  IGImageView *_iconImageView;
  UIView *_iconCircleBorderView;
  IGGradientView *_iconGradientView;
  UILabel *_subtitleLabel;
  unsigned long long _style;
  IGStickerFullWidthButtonView *_ctaButton;
}

@property (copy, nonatomic) NSAttributedString *subtitleAttributedText;
@property (nonatomic) unsigned long long iconImageAsset;

/* instance methods */
- (id)initWithStyle:(unsigned long long)style;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGUpcomingEventCardView_h */