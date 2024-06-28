//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoPreviewThumbnailView_h
#define IGVideoPreviewThumbnailView_h
@import Foundation;

#include "UIView.h"
#include "IGVideoPreviewThumbnailDataSource-Protocol.h"

@class IGGradientView, IGLazyView, UIImageView, UILabel;

@interface IGVideoPreviewThumbnailView : UIView {
  /* instance variables */
  UIImageView *_imageView;
  IGGradientView *_legibilityGradientView;
  IGLazyView *_lazyTimeView;
  UILabel *_timeLabelIfLoaded;
  struct { unsigned long long displayNoThumbnailOption; unsigned long long verticalAlignment; double currentTimeLabelSize; BOOL lazyLoadEnabled; } _viewConfig;
  double _progress;
  double _duration;
  BOOL _hasImage;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _scrubberInsets;
}

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (weak, nonatomic) NSObject<IGVideoPreviewThumbnailDataSource> *dataSource;

/* instance methods */
- (id)initWithConfig:(struct { unsigned long long x0; unsigned long long x1; double x2; BOOL x3; })config;
- (void)layoutSubviews;
- (void)prepareForReuse;
@end

#endif /* IGVideoPreviewThumbnailView_h */
