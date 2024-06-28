//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageAttachedMultiReactCell_h
#define IGDirectMessageAttachedMultiReactCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDirectAnimatedReactionView.h"
#include "IGDirectMessageAttachedMultiReactCellViewModel.h"
#include "IGDirectMessageAttachedMultiReactCountLabelView.h"
#include "IGDirectMessageCellAttachedBubbleViewLayoutSpec.h"
#include "IGDirectMessageReactionsViewThemeable-Protocol.h"

@class NSString, UILabel, UILongPressGestureRecognizer, UIView;
@protocol IGDirectMessageAttachedMultiReactCellDelegate;

@interface IGDirectMessageAttachedMultiReactCell : UICollectionViewCell {
  /* instance variables */
  IGDirectMessageAttachedMultiReactCellViewModel *_viewModel;
  IGDirectMessageCellAttachedBubbleViewLayoutSpec *_layoutSpec;
  NSObject<IGDirectMessageReactionsViewThemeable> *_theme;
  NSString *_previousReactionCount;
  UIView *_pillBackgroundView;
  UIView *_pillView;
  IGDirectAnimatedReactionView *_emojiView;
  UILabel *_emojiLabel;
  IGDirectMessageAttachedMultiReactCountLabelView *_reactionsCountView;
  BOOL _shouldAnimateCountView;
  UILongPressGestureRecognizer *_longPressRecognizer;
}

@property BOOL shouldAnimate;
@property (weak, nonatomic) NSObject<IGDirectMessageAttachedMultiReactCellDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model layoutSpec:(id)spec theme:(id)theme shouldAnimate:(BOOL)animate previousReactionCount:(id)count delegate:(id)delegate;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_didLongPress;
- (id)_reactionCountLabelCountentStringFromString:(id)string;
- (void)_updateAccessibility;
- (void)animateStreamingReaction;
- (void)_animateCountLabelView;
@end

#endif /* IGDirectMessageAttachedMultiReactCell_h */
