//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVVideoProgressHeaderView_h
#define IGTVVideoProgressHeaderView_h
@import Foundation;

#include "UIView.h"
#include "IGTVCardVideoHeaderViewModel.h"
#include "IGTVSeriesTagView.h"

@class IGTVProgressScrubber, UIImageView, UILabel;

@interface IGTVVideoProgressHeaderView : UIView {
  /* instance variables */
  IGTVSeriesTagView *_seriesTagView;
  UILabel *_durationLabel;
  IGTVProgressScrubber *_progressBar;
  UIImageView *_checkImageView;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _seriesTagInsets;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _checkInsets;
  IGTVCardVideoHeaderViewModel *_viewModel;
}

/* instance methods */
- (id)initWithStyle:(long long)style;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGTVVideoProgressHeaderView_h */
