//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryTrayCell_h
#define IGStoryTrayCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGStoryAnimatableDestinationView-Protocol.h"
#include "IGStoryTrayCellProtocol-Protocol.h"
#include "IGStoryTrayCellViewModel.h"

@class CAShapeLayer, IGLazyView, NSString, UILabel;
@protocol IGStorySuggestedFriendsFollowButtonDelegate, IGStoryTrayBaseCellDelegate, UIView<IGStoryTrayAvatarViewProtocol;

@interface IGStoryTrayCell : UICollectionViewCell<IGStoryTrayCellProtocol, IGStoryAnimatableDestinationView> {
  /* instance variables */
  IGLazyView *_lazyFollowButton;
  BOOL _animatedLiveCreationEntrypointEnabled;
  BOOL _showError;
  BOOL _showPendingUpload;
  NSObject<IGStorySuggestedFriendsFollowButtonDelegate> *_followButtonDelegate;
  IGLazyView *_lazyVerifiedBadgeView;
  IGLazyView *_lazyFanClubCrownBadgeView;
  IGLazyView *_lazyBadgeView;
  CAShapeLayer *_overlayLayer;
}

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) IGStoryTrayCellViewModel *model;
@property (nonatomic) BOOL enableDynamicFont;
@property (weak, nonatomic) NSObject<IGStoryTrayBaseCellDelegate> *baseCellDelegate;
@property (readonly, nonatomic) UIView<IGStoryTrayAvatarViewProtocol> *avatarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame imagePriority:(long long)priority;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory;
- (void)setLoading:(BOOL)loading;
- (void)setShowError:(BOOL)error;
- (void)setShowPendingUpload:(BOOL)upload;
- (id)profilePictureView;
- (id)cellTitleLabel;
- (id)presentationAnimationFromView;
- (id)presentationAnimationToView;
- (BOOL)presentationAnimationNeedsCrossfade;
- (void)conformsToIGStoryTrayBaseCell;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setProgress:(double)progress;
- (void)hideAnimatableUI:(BOOL)ui;
- (id)accessibilityLabel;
- (BOOL)canPerformAnimation;
- (id)contentViewForTransitionAnimation;
- (void)animateVisualMessageSendWithDuration:(double)duration delay:(double)delay style:(long long)style ringViewSpecFactory:(id)factory completion:(id /* block */)completion;
- (void)animateVisualMessageSendWithDuration:(double)duration delay:(double)delay ringViewSpec:(id)spec completion:(id /* block */)completion;
- (void)_followButtonTapped:(id)tapped;
@end

#endif /* IGStoryTrayCell_h */
