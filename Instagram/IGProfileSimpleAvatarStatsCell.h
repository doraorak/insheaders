//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileSimpleAvatarStatsCell_h
#define IGProfileSimpleAvatarStatsCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGProfileLayoutMetrics-Protocol.h"
#include "IGProfilePhotoCoinFlipViewDelegate-Protocol.h"
#include "IGProfilePhotoViewDelegate-Protocol.h"
#include "IGStatButton.h"
#include "IGStoryAnimatableDestinationView-Protocol.h"

@class IGUserSession, NSArray, NSString;
@protocol IGProfileSimpleAvatarStatsCellDelegate, UIView<IGProfileNoteViewType, UIView<IGProfilePhotoCoinFlipViewProtocol, UIView<IGProfilePhotoViewProtocol><IGStoryViewerEntryView;

@interface IGProfileSimpleAvatarStatsCell : UICollectionViewCell<IGProfilePhotoViewDelegate, IGProfilePhotoCoinFlipViewDelegate, IGStoryAnimatableDestinationView> {
  /* instance variables */
  UIView<IGProfilePhotoCoinFlipViewProtocol> *_coinFlipProfilePhotoView;
  UIView<IGProfilePhotoViewProtocol><IGStoryViewerEntryView> *_profilePhotoView;
  UIView<IGProfileNoteViewType> *_noteView;
  IGStatButton *_followersButton;
  IGStatButton *_postsButton;
  IGStatButton *_mutualsButton;
  NSObject<IGProfileLayoutMetrics> *_layoutMetrics;
  IGUserSession *_userSession;
  NSArray *_orderedStatButtons;
  BOOL _isEnlargedProfilePhotoEnabled;
  IGStatButton *_followingButton;
}

@property (weak, nonatomic) NSObject<IGProfileSimpleAvatarStatsCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)tryChangeCoinFlipViewSideToSide:(long long)side;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_followersButtonTapped:(id)tapped;
- (void)_followingButtonTapped:(id)tapped;
- (void)_postsButtonTapped:(id)tapped;
- (void)_mutualsButtonTapped:(id)tapped;
- (void)profilePhotoViewDidTapProfilePicture:(id)picture;
- (void)profilePhotoViewDidLongPressProfilePicture:(id)picture;
- (void)profilePhotoViewDidTapEmptyStoryBadge:(id)badge;
- (void)profilePhotoViewDidTapBirthdayBadge:(id)badge;
- (void)profilePhotoViewDidTapLiveStacked:(id)stacked;
- (void)didLongPressAvatarView;
- (void)didTapAvatarView;
- (void)didLongPressProfilePicture;
- (void)didTapProfilePicture;
- (void)didCompleteOnboardingAnimationFlip;
- (void)showAvatarCoinFlipCustomizationInterface;
- (void)isFlipInProgress;
- (void)willFlipToProfilePictureView;
- (void)didFlipToProfilePictureView;
- (void)willFlipToAvatarView;
- (void)didFlipToAvatarView;
- (BOOL)canPerformAnimation;
- (id)contentViewForTransitionAnimation;
- (void)animateVisualMessageSendWithDuration:(double)duration delay:(double)delay style:(long long)style ringViewSpecFactory:(id)factory completion:(id /* block */)completion;
- (void)animateVisualMessageSendWithDuration:(double)duration delay:(double)delay ringViewSpec:(id)spec completion:(id /* block */)completion;
@end

#endif /* IGProfileSimpleAvatarStatsCell_h */
