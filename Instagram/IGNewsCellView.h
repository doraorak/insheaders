//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNewsCellView_h
#define IGNewsCellView_h
@import Foundation;

#include "UIView.h"
#include "FBGNVGenericClickMetadataProvider-Protocol.h"
#include "IGActivityInlineSurveyDivider.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGFollowControllerDelegate-Protocol.h"
#include "IGNewsCellIconImagesView.h"
#include "IGNewsCellProfileImagesView.h"
#include "IGNewsCellProfileImagesViewDelegate-Protocol.h"
#include "IGNewsCellUFIModel.h"
#include "IGNewsStory.h"
#include "IGPollingStickerResultsView.h"
#include "IGTappableImageViewDelegate-Protocol.h"
#include "IGTappableStoryMediaImageView.h"
#include "IGTappableStoryMediaImageViewDelegate-Protocol.h"
#include "IGTooltipViewDelegate-Protocol.h"

@class IGCoreTextView, IGFollowController, IGPendingRequestController, IGStoryBadgeView, IGTableLayoutSpec, IGTextButton, IGUnreadBubbleView, IGUnseenIndicatorView, IGUserSession, NSMutableArray, NSString, UIButton, UIColor, UIImageView, UILabel, UIView;
@protocol IGFollowButtonAnalyticsDelegate, IGNewsCellViewDelegate, IGPendingRequestControllerDelegate;

@interface IGNewsCellView : UIView<FBGNVGenericClickMetadataProvider, IGCoreTextLinkHandler, IGFollowControllerDelegate, IGTappableImageViewDelegate, IGTappableStoryMediaImageViewDelegate, IGTooltipViewDelegate, IGNewsCellProfileImagesViewDelegate> {
  /* instance variables */
  NSString *_module;
  IGUserSession *_userSession;
  BOOL _showStoryRing;
  BOOL _storyIsSeen;
  BOOL _hasExpiredMedia;
  BOOL _shouldShowTappableStoryMediaImageView;
  BOOL _isFollowRequest;
  IGNewsCellUFIModel *_ufiModel;
  UIColor *_backgroundColorReference;
  IGPendingRequestController *_pendingRequestController;
  IGFollowController *_followController;
  IGTableLayoutSpec *_tableInterface;
  IGUnreadBubbleView *_requestCountBubbleView;
  IGCoreTextView *_textView;
  IGStoryBadgeView *_hashtagBadgeView;
  UIImageView *_accessoryIconView;
  UIImageView *_copyrightImageView;
  UIImageView *_infoImageView;
  UIImageView *_insightsImageView;
  UIImageView *_promoteImageView;
  UIImageView *_couponImageView;
  UIImageView *_loginMapImageView;
  UIImageView *_shopImageView;
  UIView *_topLine;
  UILabel *_expiredMediaLabel;
  UIImageView *_expiredMediaRoundedBackgroundView;
  UIImageView *_expiredMediaClockIcon;
  IGPollingStickerResultsView *_pollingStickResults;
  UIView *_followAccessoryView;
  UIButton *_likeButton;
  UIButton *_replyButton;
  UIButton *_privateReplyMessageButton;
  UIButton *_privateReplySeeResponseButton;
  UIButton *_deleteCommentButton;
  UIButton *_viewReplyButton;
  UIButton *_directMessageButton;
  IGTextButton *_rightAccessoryActionButton;
  IGUnseenIndicatorView *_unseenIndicatorView;
  IGActivityInlineSurveyDivider *_inlineSurveyCellDivider;
  IGNewsCellProfileImagesView *_profileImagesView;
  IGNewsCellIconImagesView *_iconImagesView;
  BOOL _isTruncationEligible;
  BOOL _hasUserExpandedTruncatedTextDisplay;
  BOOL _hasLikedComment;
  BOOL _showAccentedHighlight;
  BOOL _isInterceptFollowMessageCTAEnabled;
  NSObject<IGFollowButtonAnalyticsDelegate> *_analyticsDelegate;
  NSObject<IGPendingRequestControllerDelegate> *_pendingRequestControllerDelegate;
  IGTappableStoryMediaImageView *_tappableStoryMediaImageView;
  NSMutableArray *_imageViews;
  unsigned long long _tableRow;
}

@property (weak, nonatomic) NSObject<IGNewsCellViewDelegate> *delegate;
@property (readonly, nonatomic) IGNewsStory *story;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)color;
- (void)pendingControllerDidAcceptRequest:(id)request;
- (void)pendingControllerDidIgnoreRequest:(id)request;
- (void)followController:(id)controller didCompleteAction:(long long)action success:(BOOL)success;
- (void)followControllerDidDetectNewButtonState:(id)state;
- (void)followController:(id)controller buttonWasTappedWithAction:(long long)action;
- (void)followController:(id)controller didTapButtonWithAction:(long long)action actionExecutionBlock:(id /* block */)block;
- (void)didTapMessageButton:(id)button;
- (void)profileImagesViewTapped:(id)tapped isGroupedProfilePicture:(BOOL)picture;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)didTapTappableImageView:(id)view;
- (void)didTapTappableStoryMediaImageView:(id)view;
- (void)_didTapButtonForStory;
- (void)_didTapLikeButton;
- (void)_didTapReplyButton;
- (void)_didTapViewReplyButton;
- (void)_didTapDeleteCommentButton;
- (void)_didTapPrivateReplyMessageButton;
- (void)_didTapPrivateReplySeeResponseButton;
- (void)_didTapDirectMessageButton;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (BOOL)accessibilityActivate;
- (BOOL)_accessibilityLikeButtonTapped:(id)tapped;
- (BOOL)_didTapFollowButton:(id)button;
- (id)accessibilityCustomActions;
- (void)didTapTooltipView:(id)view;
- (id)contentMetadata;
@end

#endif /* IGNewsCellView_h */