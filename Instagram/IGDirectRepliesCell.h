//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRepliesCell_h
#define IGDirectRepliesCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGCoreTextNonLinkHandler-Protocol.h"
#include "IGDirectRepliesMessageContainerView.h"
#include "IGDirectRepliesViewModel.h"
#include "IGListBindable-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, IGCoreTextView, IGDirectAvatarView, IGDirectMessageAttachedBubbleBorderMaskView, IGDirectMessageAttachedBubbleView, IGDirectMessageCellAttachedBubbleViewLayoutSpec, IGUserSession, NSString, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol IGDirectRepliesCellDelegate;

@interface IGDirectRepliesCell : UICollectionViewCell<UIGestureRecognizerDelegate, IGCoreTextLinkHandler, IGCoreTextNonLinkHandler, IGListBindable> {
  /* instance variables */
  IGDirectRepliesViewModel *_viewModel;
  IGUserSession *_userSession;
  UILongPressGestureRecognizer *_longPressGesture;
  UITapGestureRecognizer *_doubleTapGesture;
  BOOL _isChildReply;
  IGDirectAvatarView *_avatarView;
  IGCoreTextView *_eyebrowView;
  IGCoreTextView *_postedStateView;
  IGCoreTextView *_unhideReplyView;
  double _messageContainerViewXOffsetForSwipe;
  IGDirectMessageAttachedBubbleView *_reactionsView;
  IGDirectMessageCellAttachedBubbleViewLayoutSpec *_reactionsViewLayoutSpec;
  IGDirectMessageAttachedBubbleBorderMaskView *_reactionsBorderMaskView;
  UIView *_maskedContainerViewForReactions;
  BOOL _panHasExceededSwipeToReplyThreshold;
  UIView *_swipeRightIndicatorView;
  UIImageView *_swipeRightImageView;
  CAShapeLayer *_swipeRightIndicatorProgressRing;
  CAShapeLayer *_strokeLayer;
  IGDirectRepliesMessageContainerView *_messageContainerView;
}

@property (weak, nonatomic) NSObject<IGDirectRepliesCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithViewModel:(id)model userSession:(id)session;
- (void)bindViewModel:(id)model;
- (void)messageContainerViewDidBeginPan:(id)pan;
- (void)messageContainerView:(id)view didChangeWithTranslation:(double)translation;
- (void)messageContainerView:(id)view didEndSwipeWithTranslation:(double)translation;
- (void)_didLongPressRepliesCell:(id)cell;
- (void)_didTapAvatar:(id)avatar;
- (void)_didDoubleTap:(id)tap;
- (void)_didTapPostedState:(id)state;
- (void)_didTapUnhide:(id)unhide;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextViewDidTapOnNonLinkedString:(id)string touchEvent:(unsigned long long)event;
- (void)directMessageAttachedBubbleViewWasLongPressed:(id)pressed gestureRecognizer:(id)recognizer;
- (void)directMessageAttachedBubbleViewWasTapped:(id)tapped;
- (void)directMessageAttachedBubbleViewWasDoubleTapped:(id)tapped;
- (void)directMessageAttachedBubbleViewCustomEmojiWasSelected:(id)selected emojiModel:(id)model;
@end

#endif /* IGDirectRepliesCell_h */