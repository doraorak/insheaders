//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxThreadCell_h
#define IGDirectInboxThreadCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGBirthdayConfettiManager.h"
#include "IGDirectInboxCellNudgePillView.h"
#include "IGDirectInboxCellReelsPlayPileView.h"
#include "IGDirectInboxThreadCellSendAnimationConfig.h"
#include "IGDirectInboxThreadCellViewModel.h"
#include "IGStoryAnimatableDestinationView-Protocol.h"
#include "IGUsernameLabel.h"
#include "THTypeAnimatedLabel.h"

@class CAShapeLayer, IGCellSwipeActionManager, IGDirectAvatarView, IGLabel, IGLoadingRingView, IGPulsatingShimmeringView, IGTapButton, IGUnseenIndicatorView, IGUserSession, NSArray, NSDictionary, NSString, UIImageView, UILabel, UILongPressGestureRecognizer, UIView;
@protocol IGDirectInboxThreadCellInteractionDelegate, IGDirectInboxThreadCellSwipingDelegate, IGDirectVaulting;

@interface IGDirectInboxThreadCell : UICollectionViewCell<IGStoryAnimatableDestinationView> {
  /* instance variables */
  IGDirectInboxThreadCellViewModel *_viewModel;
  IGDirectInboxThreadCellSendAnimationConfig *_sendAnimationConfig;
  struct IGUsernameLabelConfiguration { BOOL isVerified; BOOL isCloseFriend; BOOL shouldShowNewBadge; BOOL shouldShowInternalBadge; BOOL shouldShowHIPOBadge; BOOL isPinned; BOOL shouldShowSubscriberGroupBadge; NSArray *pronouns; struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets; unsigned long long displayMode; } _usernameLabelConfiguration;
  UIView *_flaggedIconView;
  long long _statusAnimationSyncTick;
  UIView *_unseenIndicatorContainerView;
  UIView *_unseenRingView;
  CAShapeLayer *_unseenRingShapeLayer;
  NSDictionary *_axActionNameToContextButton;
  NSObject<IGDirectVaulting> *_vault;
  NSArray *_filteredLabels;
  IGBirthdayConfettiManager *_confettiManager;
  IGUserSession *_userSession;
  BOOL _isPrismEnabled;
  NSObject<IGDirectInboxThreadCellSwipingDelegate> *_swipeDelegate;
  UILabel *_socialContextLabel;
  IGLoadingRingView *_loadingRingView;
  IGDirectInboxCellReelsPlayPileView *_reelsPlayPileView;
  IGUnseenIndicatorView *_smallUnseenDotView;
  UIImageView *_selectView;
  IGDirectInboxCellNudgePillView *_nudgePillView;
  UILongPressGestureRecognizer *_longPressGesture;
  IGLabel *_primaryLabel;
  IGLabel *_labelCounter;
  IGCellSwipeActionManager *_cellSwipeActionManager;
  struct CGSize { double width; double height; } _accessoryButtonSize;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _accessoryButtonImageEdgeInsets;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _accessoryButtonTitleEdgeInsets;
}

@property (readonly, nonatomic) UILabel *messageLabel;
@property (readonly, nonatomic) UILabel *timestampLabel;
@property (readonly, nonatomic) THTypeAnimatedLabel *statusLabel;
@property (readonly, nonatomic) UIImageView *muteIcon;
@property (readonly, nonatomic) IGPulsatingShimmeringView *pulsatingView;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) BOOL isSwipeEnabled;
@property (nonatomic) BOOL isSelected;
@property (readonly, nonatomic) IGLabel *secondaryLabel;
@property (readonly, nonatomic) IGDirectAvatarView *avatarView;
@property (readonly, nonatomic) IGUsernameLabel *usernameLabel;
@property (readonly, nonatomic) UIView *accessoryButton;
@property (weak, nonatomic) NSObject<IGDirectInboxThreadCellInteractionDelegate> *interactionDelegate;
@property (nonatomic) BOOL isMultiSelectEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_didTapAvatarView;
- (void)_didActivateAccessoryButtonAccessibilityAction;
- (void)_didTapAccessoryButton:(id)button;
- (void)_didTapContextButton:(id)button;
- (void)setVault:(id)vault;
- (void)_didSelectCustomAccessibilityAction:(id)action;
- (void)_setupSwipeActionManager;
- (BOOL)cellSwipeActionManagerShouldShowActions:(id)actions panGestureRecognizer:(id)recognizer;
- (void)cellSwipeActionManagerDidShowActions:(id)actions;
- (void)cellSwipeActionManagerDidHideActions:(id)actions;
- (void)cellSwipeActionManagerDidStartPanGestureRecognition:(id)recognition;
- (void)directCacheDidUpdateCustomFolders;
- (BOOL)canPerformAnimation;
- (id)contentViewForTransitionAnimation;
- (void)animateVisualMessageSendWithDuration:(double)duration delay:(double)delay style:(long long)style ringViewSpecFactory:(id)factory completion:(id /* block */)completion;
- (void)animateVisualMessageSendWithDuration:(double)duration delay:(double)delay ringViewSpec:(id)spec completion:(id /* block */)completion;
- (long long)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;
- (id)accessibilityElements;
@end

#endif /* IGDirectInboxThreadCell_h */
