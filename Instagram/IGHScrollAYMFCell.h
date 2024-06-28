//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHScrollAYMFCell_h
#define IGHScrollAYMFCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "FBGNVGenericClickMetadataProvider-Protocol.h"
#include "IGFollowControllerLoggingProvider-Protocol.h"
#include "IGHScrollAYMFActionButton.h"
#include "IGNewBadgeView.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGDirectAvatarView, IGFeaturedUserInfo, IGImageView, IGProfilePictureImageView, IGStoryFacepileView, IGUnseenIndicatorView, NSArray, NSString, UIButton, UILabel, UIView;
@protocol IGHScrollAYMFCellDelegate;

@interface IGHScrollAYMFCell : UICollectionViewCell<UIGestureRecognizerDelegate, IGFollowControllerLoggingProvider, FBGNVGenericClickMetadataProvider> {
  /* instance variables */
  UILabel *_primaryLabel;
  UILabel *_secondaryLabel;
  UILabel *_tertiaryLabel;
  IGProfilePictureImageView *_profilePicImageView;
  IGDirectAvatarView *_storyRingProfileImageView;
  UIView *_cardBackgroundView;
  IGHScrollAYMFActionButton *_actionButton;
  UIButton *_dismissButton;
  IGImageView *_actionCardImageView;
  UIView *_actionCardImageViewBackground;
  UIView *_verifiedBadgeView;
  UIView *_profileImageVerifiedBadgeView;
  IGUnseenIndicatorView *_unseenIndicatorView;
  IGNewBadgeView *_newBadgeView;
  UIView *_newBadgeIndicator;
  double _secondaryLabelHeight;
  BOOL _shouldShowNewBadge;
  BOOL _shouldShowFollowBack;
  NSArray *_accessibilityCustomActions;
  long long _unitType;
  IGDirectAvatarView *_facepileView;
  IGDirectAvatarView *_feedSUFacepileView;
  double _feedSUFacepileViewSize;
  BOOL _faceSUFacepileEnabled;
  BOOL _shouldUseUpdatedActionCardStyle;
  IGStoryFacepileView *_horizontalFacepileView;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  NSObject<IGFollowControllerLoggingProvider> *_followLoggingProvider;
}

@property (readonly, nonatomic) IGFeaturedUserInfo *userInfo;
@property (readonly, nonatomic) long long cellType;
@property (weak, nonatomic) NSObject<IGHScrollAYMFCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)traitCollectionDidChange:(id)change;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)_dismissButtonTapped;
- (void)_didTapAYMFCell;
- (void)AYMFActionButtonDidTap:(id)tap userAction:(long long)action;
- (void)_avatarTapped;
- (id)analyticsExtras;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (BOOL)_didTapAYMFActionButton:(id)button;
- (id)contentMetadata;
@end

#endif /* IGHScrollAYMFCell_h */
