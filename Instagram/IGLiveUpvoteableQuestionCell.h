//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveUpvoteableQuestionCell_h
#define IGLiveUpvoteableQuestionCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGLiveQuestionModel.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CAGradientLayer, CALayer, CAShapeLayer, IGCoreTextView, IGLiveUserPayBadgeCountView, IGLiveUserPaySupporterBadgeView, IGProfilePictureImageView, IGStackLayout, IGUser, NSString, UIButton, UIImage, UITapGestureRecognizer, UIView, UIVisualEffectView;
@protocol IGLiveUpvoteableQuestionCellDelegate;

@interface IGLiveUpvoteableQuestionCell : UICollectionViewCell<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGLiveQuestionModel *_model;
  UIView *_backgroundView;
  CALayer *_progressBarLayer;
  IGProfilePictureImageView *_profilePic;
  IGCoreTextView *_commentCoreTextView;
  UIButton *_likeCountLabel;
  UIButton *_deleteButton;
  UIButton *_reportButton;
  UIButton *_likeButton;
  UIVisualEffectView *_blurEffectView;
  CAShapeLayer *_blurEffectMask;
  IGStackLayout *_stackLayout;
  CAGradientLayer *_gradientLayer;
  CALayer *_backgroundColorLayer;
  long long _likeCount;
  long long _maxLikeCount;
  double _likeCountRatio;
  BOOL _isActive;
  long long _index;
  UITapGestureRecognizer *_tapGesture;
  IGLiveUserPaySupporterBadgeView *_supporterBadgeView;
  IGLiveUserPayBadgeCountView *_badgeCountView;
  UIImage *_supporterBadgeImage;
  UIImage *_badgeCountImage;
}

@property (nonatomic) unsigned long long entryPoint;
@property (retain, nonatomic) IGUser *user;
@property (weak, nonatomic) NSObject<IGLiveUpvoteableQuestionCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_toggledLikeButton;
- (void)_reportButtonTapped:(id)tapped;
- (void)_deleteButtonTapped:(id)tapped;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)_handleTapGesture:(id)gesture;
- (void)configureWithViewModel:(id)model;
- (void)setSelected:(BOOL)selected;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityHint;
- (id)accessibilityCustomActions;
- (void)_accessibilityToggledLikeButton:(id)button;
@end

#endif /* IGLiveUpvoteableQuestionCell_h */
