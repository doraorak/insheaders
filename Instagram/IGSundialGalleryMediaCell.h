//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialGalleryMediaCell_h
#define IGSundialGalleryMediaCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class IGGallerySelectionBadge, IGGradientView, IGStoryGradientRingView, UIImage, UIImageView, UILabel, UIView, _TtC23IGGalleryZoomableLayout26IGGalleryZoomConfiguration;
@protocol IGSundialGalleryMediaCellAsset;

@interface IGSundialGalleryMediaCell : UICollectionViewCell {
  /* instance variables */
  UIImageView *_imageView;
  IGGradientView *_durationLabelProtectionGradient;
  UILabel *_durationLabel;
  UIView *_dimmingView;
  IGGallerySelectionBadge *_selectionBadge;
  UIImageView *_livePhotoView;
  UIImageView *_favoriteView;
  UIImageView *_cloudMediaView;
  UIImageView *_invalidCloudMediaView;
  IGStoryGradientRingView *_loadingSpinnerView;
  BOOL _showsCloudIcon;
  BOOL _showsInvalidMediaCloudIcon;
  _TtC23IGGalleryZoomableLayout26IGGalleryZoomConfiguration *_galleryConfiguration;
}

@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) NSObject<IGSundialGalleryMediaCellAsset> *asset;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) long long selectionIndex;
@property (nonatomic) BOOL selectionChromeVisible;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setThumbnailContentMode:(long long)mode;
- (void)setSelectionChromeVisible:(BOOL)visible animated:(BOOL)animated;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
@end

#endif /* IGSundialGalleryMediaCell_h */