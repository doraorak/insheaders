//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLivePinnedCommentView_h
#define IGLivePinnedCommentView_h
@import Foundation;

#include "UIControl.h"
#include "IGCoreTextLinkHandler-Protocol.h"

@class CAGradientLayer, IGCoreTextView, IGLiveCommentModel, IGLiveUserPayBadgeCountView, IGLiveUserPaySupporterBadgeView, IGProfilePictureImageView, IGTapButton, NSString, UIImageView, UILabel, UIView;
@protocol IGLivePinnedCommentViewDelegate;

@interface IGLivePinnedCommentView : UIControl<IGCoreTextLinkHandler> {
  /* instance variables */
  UILabel *_userNameLabel;
  UIImageView *_verifiedBadgeView;
  IGCoreTextView *_defaultCommentTextLabel;
  IGCoreTextView *_expandedCommentTextLabel;
  IGLiveUserPaySupporterBadgeView *_supporterBadgeView;
  IGLiveUserPayBadgeCountView *_badgeCountView;
  IGProfilePictureImageView *_profileImageView;
  CAGradientLayer *_gradientLayerForProfileImageView;
  IGTapButton *_crossImageButton;
  BOOL _isInBroadcastView;
  UIImageView *_pinImageView;
  UILabel *_pinLabel;
  UIView *_separator;
}

@property (readonly, nonatomic) IGLiveCommentModel *comment;
@property (weak, nonatomic) NSObject<IGLivePinnedCommentViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_pinnedCommentStyleConfiguration;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_unpinTapped;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
@end

#endif /* IGLivePinnedCommentView_h */