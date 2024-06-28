//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductTileCell_h
#define IGShoppingProductTileCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGFeedPreviewableCell-Protocol.h"
#include "IGImageViewDelegate-Protocol.h"
#include "IGShoppingProductTileBannerView.h"
#include "IGShoppingProductTileMediaCarouselView.h"
#include "IGShoppingProductTileMediaOverlayFooterView.h"
#include "IGShoppingProductTileMediaOverlayHeaderView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, IGCoreTextView, IGGradientView, IGProfilePictureImageView, IGShoppingDropsTimer, IGShoppingProductThumbnailImageView, IGTapButton, IGUserSession, NSNumber, NSString, UIButton, UILabel, UITapGestureRecognizer, UIView;
@protocol IGShoppingGenericProductTileViewModel, IGShoppingProductTileCellDelegate;

@interface IGShoppingProductTileCell : UICollectionViewCell<IGImageViewDelegate, UIGestureRecognizerDelegate, IGFeedPreviewableCell> {
  /* instance variables */
  NSObject<IGShoppingGenericProductTileViewModel> *_viewModel;
  IGUserSession *_userSession;
  NSString *_shoppingSessionId;
  NSString *_analyticsModule;
  UITapGestureRecognizer *_mediaTapGestureRecognizer;
  UITapGestureRecognizer *_cellTapGestureRecognizer;
  UIView *_cardContainerView;
  CALayer *_highlightOverlay;
  IGShoppingProductThumbnailImageView *_productThumbnail;
  UIView *_overlayView;
  UIView *_videoContainerView;
  UIView *_videoView;
  IGShoppingProductTileMediaCarouselView *_mediaCarouselView;
  IGShoppingProductTileMediaOverlayHeaderView *_headerView;
  IGShoppingProductTileMediaOverlayFooterView *_footerView;
  IGGradientView *_gradientView;
  IGCoreTextView *_titleLabel;
  IGCoreTextView *_firstSubtitleLabel;
  IGCoreTextView *_secondSubtitleLabel;
  IGTapButton *_ctaButton;
  UIButton *_saveButton;
  UIButton *_threeDotMenu;
  IGShoppingProductTileBannerView *_bannerView;
  IGShoppingDropsTimer *_dropsTimer;
  UILabel *_sponsoredTitleLabel;
  UILabel *_sponsoredHeaderLabel;
  IGProfilePictureImageView *_profilePictureImageView;
  IGGradientView *_topGradientView;
  IGGradientView *_bottomGradientView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *currentPlaybackTime;
@property (weak, nonatomic) NSObject<IGShoppingProductTileCellDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)transitionZoomView;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (void)configureWithViewModel:(id)model cellWidth:(double)width analyticsModule:(id)module shoppingSessionId:(id)id videoManager:(id)manager userSession:(id)session;
- (void)undoSaveAction;
- (id)displayedCoverMedia;
- (void)scrollToCoverMedia:(id)media animated:(BOOL)animated;
- (void)_didTapThreeDotMenu:(id)menu;
- (void)_didTapDismissButton:(id)button;
- (void)_didTapSaveButton:(id)button;
- (void)_didTapCtaButton:(id)button;
- (void)_mediaViewTapped:(id)tapped;
- (void)_cellTapped;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)change;
- (id)sessionId;
- (id)image;
- (BOOL)shouldAllowPreviewForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)shoppingProductTileMediaCarouselView:(id)view didTapMedia:(id)media;
- (void)shoppingProductTileMediaCarouselView:(id)view didSwipeToMedia:(id)media;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)shoppingDropsTimerDidFire:(id)fire;
@end

#endif /* IGShoppingProductTileCell_h */
