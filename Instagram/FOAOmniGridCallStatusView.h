//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FOAOmniGridCallStatusView_h
#define FOAOmniGridCallStatusView_h
@import Foundation;

#include "UIView.h"
#include "FOAOmniGridIconLabel.h"

@class CAShapeLayer, FOAOmniGridCallStatusViewModel, NSLayoutConstraint, NSString, NSTimer, UIActivityIndicatorView, UIImageView, UILabel, UIStackView, UIView;

@interface FOAOmniGridCallStatusView : UIView {
  /* instance variables */
  id _proxyContext;
  UIStackView *_stackView;
  FOAOmniGridIconLabel *_titleView;
  BOOL _shouldShowE2EELabel;
  BOOL _shouldShowE2EEPrivacyIconView;
  BOOL _usesLargeMuteIcon;
  UIView *_topSpacerView;
  UIView *_spacerViewAboveTitleView;
  NSString *_titleText;
  long long _titleIconName;
  UIStackView *_subtitleStackView;
  UILabel *_subtitleLabel;
  UIImageView *_subtitleIconView;
  UIView *_extraSpacerView;
  UIView *_extraSpacerAboveDescriptionView;
  UILabel *_descriptionLabel;
  UIView *_extraSpacerAboveSubtitleView;
  UIView *_profileImageView;
  UIView *_singleProfileLiveBorderContainerView;
  FOAOmniGridCallStatusViewModel *_viewModel;
  UIImageView *_iconView;
  UIView *_profileViewRing;
  UIView *_muteIcon;
  struct CGSize { double width; double height; } _intrinsicContentSize;
  UIActivityIndicatorView *_spinner;
  UIStackView *_topCenterTextView;
  UIView *_liveBadgeView;
  UIView *_liveBorderView;
  NSLayoutConstraint *_stackViewWidthConstraint;
  NSLayoutConstraint *_stackViewTopConstraint;
  NSLayoutConstraint *_stackViewCenterConstraint;
  NSLayoutConstraint *_avatarViewWidthConstraint;
  NSLayoutConstraint *_avatarViewHeightConstraint;
  NSLayoutConstraint *_subtitleStackViewMaxWidthConstraint;
  NSLayoutConstraint *_subtitleStackViewContentWidthConstraint;
  NSLayoutConstraint *_subtitleStackViewCenterConstraint;
  unsigned long long _avatarCount;
  long long _subtitleType;
  long long _profileImageState;
  CAShapeLayer *_pulsingLayer;
  NSTimer *_timer;
}

/* instance methods */
- (id)initWithProxyContext:(id)context;
- (void)dealloc;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)setHidden:(BOOL)hidden;
- (void)setViewModel:(id)model;
- (id)contentView;
@end

#endif /* FOAOmniGridCallStatusView_h */
