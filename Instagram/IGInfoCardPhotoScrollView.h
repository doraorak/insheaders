//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInfoCardPhotoScrollView_h
#define IGInfoCardPhotoScrollView_h
@import Foundation;

#include "IGFeedMediaView.h"
#include "IGALLogContextModelProvider-Protocol.h"
#include "IGFeedItemInfoCardInteractiveView.h"
#include "IGFeedItemInfoCardInteractiveViewDelegate-Protocol.h"
#include "IGFeedItemInfoCardViewDelegate-Protocol.h"

@class IGGradientView, NSArray, NSMutableArray, NSString, UIImageView, UIScrollView, UIViewPropertyAnimator;

@interface IGInfoCardPhotoScrollView : IGFeedMediaView<IGFeedItemInfoCardInteractiveViewDelegate, IGALLogContextModelProvider> {
  /* instance variables */
  NSArray *_photos;
  NSMutableArray *_viewImages;
  UIScrollView *_scrollView;
  IGGradientView *_tintView;
  NSString *_module;
  double _totalWidth;
  double _xPosition;
  double _velocity;
  long long _badgeType;
  long long _badgeAlignment;
  NSObject<IGFeedItemInfoCardViewDelegate> *_delegate;
  IGFeedItemInfoCardInteractiveView *_interactiveView;
  BOOL _isAnimating;
  UIViewPropertyAnimator *_animator;
  UIImageView *_badgeView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)resetAnimation;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)_createTintView;
- (double)_calculateAnimationVelocity:(id)velocity;
- (id)_createBadgeImage;
- (unsigned long long)_getBadgeType;
- (void)_stopOrRestartAnimation;
- (void)infoCardDidDoubleTapToLikeWithLocationInfo:(id)info;
- (void)infoCardDidSingleTapOnPosition:(struct CGPoint { double x0; double x1; })position;
- (void)infoCardViewDidShowTagWithReason:(unsigned long long)reason;
- (void)infoCardViewDidHideTagWithReason:(unsigned long long)reason;
- (id)trackingModel;
@end

#endif /* IGInfoCardPhotoScrollView_h */
