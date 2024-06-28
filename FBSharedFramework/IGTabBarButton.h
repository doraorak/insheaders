//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTabBarButton_h
#define IGTabBarButton_h
@import Foundation;

#include "UIButton.h"
#include "IGBadgeValue.h"
#include "IGPopoutViewDelegate-Protocol.h"
#include "IGUnreadBubbleView.h"

@class CAShapeLayer, IGTabBarButtonConfigBezierPaths, NSString, UIImageView, UIView;

@interface IGTabBarButton : UIButton<IGPopoutViewDelegate> {
  /* instance variables */
  UIView *_customView;
  UIImageView *_underneathDotView;
  IGUnreadBubbleView *_numberedTopRightBadgeView;
  UIView *_nonNumberedTopRightBadgeView;
  UIView *_errorDotTopRightBadgeView;
  struct CGPoint { double x; double y; } _nonNumberedTopRightBadgeViewOffset;
  BOOL _clearsBadgeWhenSelected;
  unsigned long long _badgeType;
  CAShapeLayer *_primaryShapeLayer;
  CAShapeLayer *_secondaryShapeLayer;
  CAShapeLayer *_tertiaryShapeLayer;
  IGTabBarButtonConfigBezierPaths *_defaultPaths;
  IGTabBarButtonConfigBezierPaths *_selectedPaths;
  BOOL _needsAttention;
  BOOL _isProfileButton;
}

@property (retain, nonatomic) IGBadgeValue *badgeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cameraButton;
+ (id)shoppingButton;

/* instance methods */
- (void)setCustomView:(id)view;
- (void)traitCollectionDidChange:(id)change;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setSelected:(BOOL)selected;
- (void)_updateShapeLayer;
- (struct CGPoint { double x0; double x1; })targetCenterWithPopoutView:(id)view;
- (BOOL)shouldAnimatePopoutView:(id)view;
- (void)popoutViewDidFinishAnimation:(id)animation;
- (long long)preferredAnimationDirectionForPopoutView:(id)view;
- (void)numberedBadgeViewWillBeginExpansion;
- (void)numberedBadgeViewDidEndCollapsing;
- (id)numberedBadgeView;
- (void)nonNumberedBadgeViewWillStartExpanding;
- (void)nonNumberedBadgeViewDidCompleteExpanding:(BOOL)expanding;
- (void)nonNumberedBadgeViewWillStartCollapsing;
- (void)nonNumberedBadgeViewDidCompleteCollapsing:(BOOL)collapsing;
- (id)nonNumberedBadgeView;
- (BOOL)isDisplayingTooltips;
- (void)layoutSubviews;
@end

#endif /* IGTabBarButton_h */
