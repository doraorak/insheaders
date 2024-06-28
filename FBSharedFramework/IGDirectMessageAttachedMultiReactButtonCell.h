//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageAttachedMultiReactButtonCell_h
#define IGDirectMessageAttachedMultiReactButtonCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDirectAnimatedReactionView.h"
#include "IGDirectMessageAttachedMultiReactButtonCellViewModel.h"
#include "IGDirectMessageAttachedMultiReactCountLabelView.h"
#include "IGDirectMessageCellAttachedBubbleViewLayoutSpec.h"
#include "IGDirectMessageReactionsViewThemeable-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;
@protocol IGDirectMessageAttachedMultiReactButtonCellDelegate;

@interface IGDirectMessageAttachedMultiReactButtonCell : UICollectionViewCell {
  /* instance variables */
  IGDirectMessageAttachedMultiReactButtonCellViewModel *_viewModel;
  IGDirectMessageCellAttachedBubbleViewLayoutSpec *_layoutSpec;
  NSObject<IGDirectMessageReactionsViewThemeable> *_theme;
  UIView *_pillView;
  UIImageView *_iconView;
  IGDirectMessageAttachedMultiReactCountLabelView *_countLabelView;
  BOOL _shouldAnimateCountView;
  BOOL _shouldAnimateForReplyUpsell;
  unsigned long long _additionalReactionsCount;
  unsigned long long _previousAdditionalReactionsCount;
  IGDirectAnimatedReactionView *_emojiView;
  UILabel *_emojiLabel;
  NSString *_emojiUnicodeCurrentlyAnimating;
}

@property BOOL shouldAnimate;
@property (weak, nonatomic) NSObject<IGDirectMessageAttachedMultiReactButtonCellDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model layoutSpec:(id)spec theme:(id)theme delegate:(id)delegate;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_animateCountLabelView;
- (void)_updateEmojiLabelWithEmojiUnicodeToAnimate:(id)animate;
- (void)_transitionedToEmoji;
- (void)_transitionedFromEmoji;
- (void)_animateTextOutWithCompletion:(id /* block */)completion;
- (void)_animateTextInWithCompletion:(id /* block */)completion;
- (void)_hideEmojiAnimationWithCompletion:(id /* block */)completion;
- (void)_animate;
- (void)_animateForReplyUpsell;
@end

#endif /* IGDirectMessageAttachedMultiReactButtonCell_h */
