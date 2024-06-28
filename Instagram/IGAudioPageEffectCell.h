//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioPageEffectCell_h
#define IGAudioPageEffectCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class NSString, UIImageView, UILabel, UIView;

@interface IGAudioPageEffectCell : UICollectionViewCell {
  /* instance variables */
  UIImageView *_iconImageView;
  UILabel *_label;
  UIView *_pill;
}

@property (retain, nonatomic) NSString *text;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setUserInteractionEnabled:(BOOL)enabled;
- (void)setSelected:(BOOL)selected;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* IGAudioPageEffectCell_h */