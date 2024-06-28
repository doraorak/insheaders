//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentGroupContentWithLikeView_h
#define IGCommentGroupContentWithLikeView_h
@import Foundation;

#include "UIView.h"
#include "IGCommentContentWithLikeViewDelegate-Protocol.h"
#include "IGCommentGroupTextViewProtocol-Protocol.h"
#include "IGCommentSectionViewModelProtocol-Protocol.h"
#include "IGProfilePhotoViewDelegate-Protocol.h"
#include "IGProfilePictureImageViewTapDelegate-Protocol.h"
#include "IGUnsupportedCommentAttachmentView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, IGAnimatedImageView, IGCheckmarkButton, IGImageView, IGProfilePhotoView, IGProfilePictureImageView, IGRingViewSpecFactory, IGSimpleButton, IGUserSession, IGVideoView, NSArray, NSString, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UIView;

@interface IGCommentGroupContentWithLikeView : UIView<IGCommentGroupTextViewProtocol, UIGestureRecognizerDelegate, IGProfilePhotoViewDelegate, IGProfilePictureImageViewTapDelegate> {
  /* instance variables */
  NSObject<IGCommentSectionViewModelProtocol> *_commentViewModel;
  IGRingViewSpecFactory *_ringViewSpecFactory;
  NSArray *_hashtagAccessibilityLinks;
  NSArray *_mentionsAccessibilityLinks;
  IGSimpleButton *_likeCountWithLikeIconButton;
  BOOL _isPending;
  BOOL _isFacebookComment;
  IGAnimatedImageView *_animatedImageView;
  BOOL _isBroadcastChannelReply;
  double _subtitleActionsMaxY;
  IGUserSession *_userSession;
  IGVideoView *_videoView;
  UIView *_likesBackgroundView;
  UILongPressGestureRecognizer *_likeButtonLongPressGesture;
  UILongPressGestureRecognizer *_likeCountLongPressGesture;
  UILongPressGestureRecognizer *_likesBackgroundViewGesture;
  UILongPressGestureRecognizer *_likeButtonMediaOwnerProfilePicLongPressGesture;
  IGProfilePictureImageView *_likeButtonMediaOwnerProfilePic;
  CAShapeLayer *_leftOverlapBorderShapeLayer;
  IGProfilePhotoView *_profileView;
  UILabel *_timestampTextView;
  UIButton *_likeCountButton;
  UIButton *_replyButton;
  UIButton *_shareButton;
  UIButton *_translateButton;
  UIButton *_translateAllButton;
  UIButton *_approveButton;
  UIButton *_deleteButton;
  UIButton *_tapToReadButton;
  UIButton *_failureStatusButton;
  UILabel *_postingStatusView;
  UILabel *_pinTextView;
  UIImageView *_pinIconView;
  UIButton *_unhideButton;
  IGCheckmarkButton *_checkmarkButton;
  IGImageView *_mediaCoverImageView;
  IGUnsupportedCommentAttachmentView *_unsupportedCommentAttachmentView;
  UIButton *_reactionCountButton;
  UIButton *_moreButton;
}

@property (readonly, nonatomic) IGProfilePictureImageView *profilePic;
@property (nonatomic) long long likeButtonPosition;
@property (readonly, nonatomic) UIView *coreTextView;
@property (readonly, nonatomic) UIView *replyButtonView;
@property (readonly, nonatomic) UIButton *likeButton;
@property (readonly, nonatomic) UIButton *messageButton;
@property (readonly, nonatomic) UIButton *privateReplyButton;
@property (readonly, nonatomic) UIButton *hideButton;
@property (readonly, nonatomic) UIButton *facebookLikeButton;
@property (readonly, nonatomic) UIView *profilePicAndCommentContentWrapperViewForLongPress;
@property (weak, nonatomic) NSObject<IGCommentContentWithLikeViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)textMediaContentViewHeightForCommentViewModel:(id)model width:(double)width;
+ (double)heightForCommentViewModel:(id)model userSession:(id)session useInlineStyle:(BOOL)style removeLikeButtonPadding:(BOOL)padding width:(double)width likeCountAndReplyButtonHidden:(BOOL)hidden;
+ (double)profilePictureColumnWidthWithUseInlineStyle:(BOOL)style useFacebookProfileImageStyle:(BOOL)style;
+ (struct CGSize { double x0; double x1; })_imageViewSizeForCommentAttachment:(id)attachment replyCommentMedia:(id)media carouselChildMentionThumbnailURL:(id)url isHidden:(BOOL)hidden isChildComment:(BOOL)comment maxWidth:(double)width;

/* instance methods */
- (id)initWithRingViewSpecFactory:(id)factory isBroadcastChannelReply:(BOOL)reply userSession:(id)session;
- (id)textMediaContentView;
- (void)updateTextMediaContentViewWithCommentViewModel:(id)model;
- (double)textMediaContentViewHeightForWidth:(double)width;
- (void)setCoreTextLinkHandler:(id)handler;
- (void)setShowFanClubBadge:(BOOL)badge;
- (void)layoutSubviews;
- (void)updateViewWithCommentViewModel:(id)model mediaOwner:(id)owner;
- (void)_handleAvatarImageTap:(id)tap;
- (void)updatePinTextAndIconViews:(BOOL)views;
- (void)updateLikeCountButtonWithLikeCount:(long long)count;
- (void)updateLikedByButtonWithLikers:(id)likers module:(id)module;
- (void)updatePrivateReplyText;
- (void)updateFacebookReactionButtonCountWithCommentViewModel:(id)model;
- (void)updateFacebookLikeButtonSelectedWithCommentViewModel:(id)model;
- (void)_likeButtonTapped:(id)tapped;
- (void)_facebookReactionCountButtonTapped;
- (void)_facebookLikeButtonTapped;
- (void)_facebookLikeButtonLongPressed:(id)pressed;
- (void)_unsupportedMediaViewTapped:(id)tapped;
- (void)_accessibilityLikeButtonTapped:(id)tapped;
- (void)_likeCountButtonTapped:(id)tapped;
- (void)_replyButtonTapped:(id)tapped;
- (void)_privateReplyButtonTapped:(id)tapped;
- (void)_messageButtonTapped:(id)tapped;
- (void)_shareButtonTapped:(id)tapped;
- (void)_unhideButtonTapped:(id)tapped;
- (void)_hideButtonTapped:(id)tapped;
- (void)_failureStateButtonTapped:(id)tapped;
- (void)_translateButtonTapped:(id)tapped;
- (void)_translateAllButtonTapped:(id)tapped;
- (void)_tapToReadButtonTapped:(id)tapped;
- (void)_approveButtonTapped:(id)tapped;
- (void)_deleteButtonTapped:(id)tapped;
- (void)_moreButtonTapped:(id)tapped;
- (void)_checkmarkButtonTapped:(id)tapped;
- (void)_didSingleTapMediaCoverImageView:(id)view;
- (void)_didDoubleTapMediaCoverImageView:(id)view;
- (void)_didDoubleTapAnimatedImageView:(id)view;
- (void)_didLongPressLikeButton:(id)button;
- (id)accessibilityLabel;
- (BOOL)_viewProfile;
- (id)accessibilityCustomActions;
- (BOOL)_viewHashtags;
- (BOOL)_viewMentions;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)userDidTapOnCommentMusicAttachmentType:(id)type inMusicAttachmentView:(id)view;
- (void)profilePhotoViewDidTapProfilePicture:(id)picture;
- (void)profilePhotoViewDidLongPressProfilePicture:(id)picture;
- (void)profilePhotoViewDidTapEmptyStoryBadge:(id)badge;
- (void)profilePhotoViewDidTapBirthdayBadge:(id)badge;
- (void)traitCollectionDidChange:(id)change;
- (void)profilePictureTapped:(id)tapped;
@end

#endif /* IGCommentGroupContentWithLikeView_h */