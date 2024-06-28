//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveWaveCommentCell_h
#define IGLiveWaveCommentCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class IGLiveCommentModel, IGProfilePictureImageView, IGTapButton, UIImageView, UILabel;

@interface IGLiveWaveCommentCell : UICollectionViewCell {
  /* instance variables */
  id /* block */ _buttonCallback;
  IGProfilePictureImageView *_profileImageView;
  UILabel *_commentHeadingLabel;
  UILabel *_commentBodyLabel;
  IGTapButton *_waveTapButton;
  UIImageView *_waveProfileImageOverlay;
  IGTapButton *_viewHeaderTapButton;
  BOOL _isAnimating;
}

@property (readonly, nonatomic) IGLiveCommentModel *comment;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)layoutSubviews;
- (void)_buttonTapped:(id)tapped;
@end

#endif /* IGLiveWaveCommentCell_h */
