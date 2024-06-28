//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPCelebrationView_h
#define IGQPCelebrationView_h
@import Foundation;

#include "UIView.h"
#include "IGDSBlurView.h"
#include "IGMediaTextButton.h"
#include "IGProfilePictureImageView.h"
#include "IGTextButton.h"

@class UILabel, UIView;
@protocol IGQPCelebrationViewDelegate;

@interface IGQPCelebrationView : UIView {
  /* instance variables */
  IGDSBlurView *_blurView;
  UIView *_containerView;
  UILabel *_titleLabel;
  UILabel *_contentLabel;
  IGMediaTextButton *_primaryButton;
  IGTextButton *_secondaryButton;
}

@property (weak, nonatomic) NSObject<IGQPCelebrationViewDelegate> *delegate;
@property (readonly, nonatomic) IGProfilePictureImageView *imageView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_didTapPrimaryButton;
- (void)_didTapSecondaryButton;
@end

#endif /* IGQPCelebrationView_h */