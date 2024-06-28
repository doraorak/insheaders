//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPivotPageMetadataView_h
#define IGPivotPageMetadataView_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGPivotPageMetadataViewModel.h"
#include "IGPivotPageUsernameButton.h"

@class IGAudioExplicitLabel, IGAudioMultiThumbnailView, IGRoundedImageView, IGTextButton, NSString, UIImageView, UILabel;

@interface IGPivotPageMetadataView : IGPassthroughView {
  /* instance variables */
  IGRoundedImageView *_albumArtImageView;
  IGAudioMultiThumbnailView *_multiThumbnailView;
  double _roundedImageViewHeight;
  IGAudioExplicitLabel *_titleView;
  IGPivotPageUsernameButton *_artistView;
  UILabel *_videoCountLabel;
  NSString *_videoCountLabelText;
  UIImageView *_trendingIcon;
  UIImageView *_audioMixIcon;
  IGTextButton *_mainActionButton;
}

@property (copy, nonatomic) IGPivotPageMetadataViewModel *viewModel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGPivotPageMetadataView_h */