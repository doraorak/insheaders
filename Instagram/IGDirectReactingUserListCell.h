//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectReactingUserListCell_h
#define IGDirectReactingUserListCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class FBPerlinNoise, IGImageTitleSubtitleView, UILabel;

@interface IGDirectReactingUserListCell : UICollectionViewCell {
  /* instance variables */
  IGImageTitleSubtitleView *_coreView;
  UILabel *_emojiLabel;
  struct CGSize { double width; double height; } _emojiSize;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _emojiPadding;
  UILabel *_superReactEmojiLabel1;
  UILabel *_superReactEmojiLabel2;
  UILabel *_superReactEmojiLabel3;
  UILabel *_superReactEmojiLabel4;
  UILabel *_superReactEmojiLabel5;
  UILabel *_superReactEmojiLabel6;
  UILabel *_superReactEmojiLabel7;
  UILabel *_superReactEmojiLabel8;
  FBPerlinNoise *_perlinNoise;
  BOOL _shouldHideReactionEmoji;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model;
- (void)layoutSubviews;
@end

#endif /* IGDirectReactingUserListCell_h */