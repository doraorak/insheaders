//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectQuickReplyListCell_h
#define IGDirectQuickReplyListCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDirectQuickReplyListCellViewModel.h"
#include "NSObject-Protocol.h"

@class CALayer, IGCellSwipeActionManager, NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer;
@protocol IGDirectQuickReplyListCellDelegate;

@interface IGDirectQuickReplyListCell : UICollectionViewCell<NSObject> {
  /* instance variables */
  NSObject<IGDirectQuickReplyListCellDelegate> *_delegate;
  UITapGestureRecognizer *_tapGestureRecognizer;
  IGCellSwipeActionManager *_cellSwipeActionManager;
  UILabel *_shortcutLabel;
  UILabel *_messageLabel;
  CALayer *_bottomSeparator;
  UIImageView *_chevronView;
  UIButton *_editButton;
  UIButton *_deleteButton;
}

@property (readonly, nonatomic) IGDirectQuickReplyListCellViewModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)preferredHeight;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (BOOL)cellSwipeActionManagerShouldShowActions:(id)actions panGestureRecognizer:(id)recognizer;
- (void)cellSwipeActionManagerDidShowActions:(id)actions;
- (void)cellSwipeActionManagerDidHideActions:(id)actions;
- (void)_didTapCell:(id)cell;
- (void)_didTapEditButton:(id)button;
- (void)_didTapDeleteButton:(id)button;
@end

#endif /* IGDirectQuickReplyListCell_h */