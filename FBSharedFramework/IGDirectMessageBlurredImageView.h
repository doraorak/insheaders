//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageBlurredImageView_h
#define IGDirectMessageBlurredImageView_h
@import Foundation;

#include "UIView.h"
#include "IGBlurredImageView.h"
#include "IGDirectMessageBlurredImageViewModel.h"
#include "IGRingViewSpecFactory.h"
#include "IGStoryGradientRingView.h"

@class UIImageView, UILabel, UIView;

@interface IGDirectMessageBlurredImageView : UIView {
  /* instance variables */
  IGDirectMessageBlurredImageViewModel *_viewModel;
  IGRingViewSpecFactory *_ringViewSpecFactory;
}

@property (readonly, nonatomic) UIView *concealView;
@property (readonly, nonatomic) IGBlurredImageView *blurredBackgroundImageView;
@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UIImageView *overlayIconImageView;
@property (readonly, nonatomic) IGStoryGradientRingView *loadingView;

/* instance methods */
- (id)initWithRingViewSpecFactory:(id)factory;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
@end

#endif /* IGDirectMessageBlurredImageView_h */