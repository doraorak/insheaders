//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSuggestedHighlightEndCardOverlayView_h
#define IGSuggestedHighlightEndCardOverlayView_h
@import Foundation;

#include "UIView.h"

@class IGImageView, IGMediaTextButton, IGTapButton, UILabel, UIView, UIVisualEffectView;
@protocol IGSuggestedHighlightEndCardOverlayViewDelegate;

@interface IGSuggestedHighlightEndCardOverlayView : UIView {
  /* instance variables */
  UIVisualEffectView *_blurView;
  UIView *_contentView;
  IGImageView *_imageView;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  IGMediaTextButton *_primaryButton;
  IGMediaTextButton *_secondaryButton;
  IGTapButton *_dismissButton;
  double _verticalOffset;
  double _imageTitleSpacing;
  double _titleSubtitleSpacing;
  double _subtitlePrimaryButtonSpacing;
  double _primarySecondaryButtonSpacing;
  BOOL _shouldVerticallyCenterOnSubtitle;
  double _dismissButtonTopPadding;
}

@property (weak, nonatomic) NSObject<IGSuggestedHighlightEndCardOverlayViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_primaryButtonTapped:(id)tapped;
- (void)_secondaryButtonTapped:(id)tapped;
- (void)_dismissTapped;
- (void)_createStoryTapped;
@end

#endif /* IGSuggestedHighlightEndCardOverlayView_h */
