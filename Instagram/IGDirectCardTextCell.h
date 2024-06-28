//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectCardTextCell_h
#define IGDirectCardTextCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDirectCardTextViewModel.h"
#include "IGDirectMessageReactionsViewThemeable-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGDirectMessageAttachedBubbleBorderMaskView, IGProfilePictureImageView, IGSingleDoubleTapGestureRecognizer, IGUserSession, NSString, UILabel, UILongPressGestureRecognizer, UIView;
@protocol IGDirectCardTextCellDelegate, UIView<IGDirectMessageAttachedView;

@interface IGDirectCardTextCell : UICollectionViewCell<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGProfilePictureImageView *_avatarView;
  UIView *_containerView;
  UILabel *_usernameLabel;
  UILabel *_responseLabel;
  UILabel *_timestampLabel;
  UIView<IGDirectMessageAttachedView> *_reactionsView;
  NSObject<IGDirectMessageReactionsViewThemeable> *_reactionsViewThemeable;
  IGDirectMessageAttachedBubbleBorderMaskView *_reactionsBorderMaskView;
  UIView *_maskedContainerViewForReactions;
  IGUserSession *_userSession;
  IGDirectCardTextViewModel *_viewModel;
  UILongPressGestureRecognizer *_longPressGestureRecognizer;
  IGSingleDoubleTapGestureRecognizer *_doubleTapGestureRecognizer;
  BOOL _touchesBegan;
  BOOL _isOptimisticUpload;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentAccessoryFrame;
}

@property (retain, nonatomic) NSString *itemId;
@property (weak, nonatomic) NSObject<IGDirectCardTextCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_didReceiveLongPress:(id)press;
- (void)animateUserReaction:(id)reaction;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)directMessageAttachedBubbleViewWasLongPressed:(id)pressed gestureRecognizer:(id)recognizer;
- (void)directMessageAttachedBubbleViewWasTapped:(id)tapped;
- (void)directMessageAttachedBubbleViewWasDoubleTapped:(id)tapped;
- (void)directMessageAttachedBubbleViewCustomEmojiWasSelected:(id)selected emojiModel:(id)model;
- (void)_usernameLabelTapped:(id)tapped;
@end

#endif /* IGDirectCardTextCell_h */