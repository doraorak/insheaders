//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveFooterButtonsView_h
#define IGLiveFooterButtonsView_h
@import Foundation;

#include "UIView.h"
#include "IGLiveNumberBadgedButtonView.h"

@class FBTimer, IGLiveBroadcastWhileLiveViewExperiments, IGTapButton, NSArray, UILongPressGestureRecognizer, UIStackView;
@protocol IGLiveFooterButtonsViewDelegate;

@interface IGLiveFooterButtonsView : UIView {
  /* instance variables */
  UIStackView *_buttonStack;
  BOOL _expanded;
  FBTimer *_expandedFooterRevertTimer;
  UILongPressGestureRecognizer *_longPress;
  long long _role;
  IGLiveBroadcastWhileLiveViewExperiments *_experimentConfig;
  BOOL _expandingEnabled;
  BOOL _avatarMixedReactionIconEnabled;
  NSArray *_enabledButtons;
  IGTapButton *_expansionButton;
  IGTapButton *_optionButton;
  IGTapButton *_liveResourceButton;
  IGLiveNumberBadgedButtonView *_liveRoomBadgedButton;
  IGTapButton *_inviteGuestButton;
  IGTapButton *_requestToJoinButton;
  IGTapButton *_submitQuestionButton;
  IGLiveNumberBadgedButtonView *_selectQuestionBadgedButton;
  IGTapButton *_badgeButton;
  IGTapButton *_inviteButton;
}

@property (weak, nonatomic) NSObject<IGLiveFooterButtonsViewDelegate> *delegate;
@property (readonly, nonatomic) IGTapButton *likeButton;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame liveBroadcastWhileLiveViewExperiments:(id)experiments role:(long long)role;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_expansionButtonTapped;
- (void)_optionButtonTapped;
- (void)_liveResourceButtonTapped;
- (void)_liveRoomButtonTapped;
- (void)_inviteGuestButtonTapped;
- (void)_unifiedInviteGuestButtonTapped;
- (void)_selectQuestionButtonTapped;
- (void)_requestToJoinButtonTapped;
- (void)_submitQuestionButtonTapped;
- (void)_badgeButtonTapped;
- (void)_viewerInviteButtonTapped;
- (void)_likeButtonTapped;
- (void)_likeButtonLongPressed:(id)pressed;
@end

#endif /* IGLiveFooterButtonsView_h */
