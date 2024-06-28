//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPDPHeroCarouselMediaCell_h
#define IGShoppingPDPHeroCarouselMediaCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGImageProgressViewDelegate-Protocol.h"
#include "IGShoppingPDPMediaWithFeaturedProductPendingOverlay.h"
#include "IGZoomController.h"
#include "IGZoomControllerZoomingDelegate-Protocol.h"

@class CALayer, IGGradientView, IGImageProgressView, IGStoryOverlayTapModel, NSString, UIButton, UITapGestureRecognizer, UIView;
@protocol IGShoppingPDPHeroCarouselMediaCellDelegate;

@interface IGShoppingPDPHeroCarouselMediaCell : UICollectionViewCell<IGImageProgressViewDelegate> {
  /* instance variables */
  UIView *_mediaContainerView;
  IGImageProgressView *_imageView;
  struct CGSize { double width; double height; } _imageSize;
  IGStoryOverlayTapModel *_overlayTapModel;
  struct CGSize { double width; double height; } _storyViewerMediaSize;
  IGGradientView *_gradientView;
  UIButton *_moreButton;
  CALayer *_dimmingLayer;
  IGShoppingPDPMediaWithFeaturedProductPendingOverlay *_pendingRequestOverlay;
  IGZoomController *_zoomController;
  UIView *_mediaZoomRecognizerView;
  UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (retain, nonatomic) UIView *videoView;
@property (readonly, nonatomic) UIView *animationTransitionMediaView;
@property (retain, nonatomic) UIView *productSticker;
@property (weak, nonatomic) NSObject<IGShoppingPDPHeroCarouselMediaCellDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGZoomControllerZoomingDelegate> *zoomingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (void)prepareForReuse;
- (void)progressImageView:(id)view didUpdateLoadingState:(id)state;
- (void)progressImageView:(id)view didLoadImage:(id)image loadSource:(id)source networkRequestSummary:(id)summary;
- (void)progressImageView:(id)view didFailLoadWithError:(id)error networkRequestSummary:(id)summary;
- (BOOL)shoppingPDPHeroCarouselImageAnimationTransitionProvider:(id)provider shouldAnimationTransitionFromState:(id)state toState:(id)state;
- (void)shoppingPDPMediaWithFeaturedProductPendingOverlay:(id)overlay didTapCancelButton:(id)button;
- (void)_didTapCell:(id)cell;
- (void)_didTapMoreButton:(id)button;
@end

#endif /* IGShoppingPDPHeroCarouselMediaCell_h */