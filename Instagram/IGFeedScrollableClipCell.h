//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedScrollableClipCell_h
#define IGFeedScrollableClipCell_h
@import Foundation;

#include "IGBouncyCollectionViewCell.h"
#include "IGAudioDiscoveryMetadataView.h"
#include "IGImageViewDelegate-Protocol.h"
#include "IGSpriteSheetView.h"
#include "IGTransitionZoomViewCustomizable-Protocol.h"
#include "IGVideoIconCountLabel.h"

@class IGClipsCoverMetadataOverlayContainerView, IGGradientView, IGImageView, IGStackLayout, NSString, UILabel, UIView;

@interface IGFeedScrollableClipCell : IGBouncyCollectionViewCell<IGImageViewDelegate, IGTransitionZoomViewCustomizable> {
  /* instance variables */
  IGImageView *_coverImageView;
  IGGradientView *_titleAndPlayCountGradient;
  IGAudioDiscoveryMetadataView *_audioMetadataView;
  UIView *_overlayView;
  UILabel *_titleLabel;
  IGVideoIconCountLabel *_viewCountLabel;
  IGClipsCoverMetadataOverlayContainerView *_metadataOverlayView;
  IGGradientView *_metadataOverlayGradient;
  IGStackLayout *_layout;
  IGSpriteSheetView *_spriteSheetView;
  double _cornerRadius;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (double)zoomTransitionViewCornerRadius;
- (long long)zoomTransitionViewType;
@end

#endif /* IGFeedScrollableClipCell_h */
