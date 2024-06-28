//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGScrollingSelectorViewCell_h
#define IGScrollingSelectorViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGImageView.h"
#include "IGImageViewDelegate-Protocol.h"
#include "IGRadialLoadingIndicatorView.h"
#include "IGScrollingSelectorViewCellAppearanceType-Protocol.h"

@class NSString, UIView, UIVisualEffectView;

@interface IGScrollingSelectorViewCell : UICollectionViewCell<IGImageViewDelegate, IGScrollingSelectorViewCellAppearanceType> {
  /* instance variables */
  IGRadialLoadingIndicatorView *_loadingView;
  UIView *_selectionRingView;
  UIView *_discoverabilityView;
  BOOL _isPrismNewBadgeEnabled;
  BOOL _usesBlurredBackground;
  BOOL _displayDiscoverabilityView;
  unsigned long long _selectionRingColor;
  long long _backgroundBlurStyle;
  double _cellCornerRadius;
  double _cellLength;
  UIVisualEffectView *_visualEffectView;
}

@property (readonly, nonatomic) IGImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long appearance;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setImageSpecifier:(id)specifier;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
@end

#endif /* IGScrollingSelectorViewCell_h */
