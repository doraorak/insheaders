//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGalleryThumbnailStickerCell_h
#define IGGalleryThumbnailStickerCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "FBTimer.h"
#include "IGGalleryThumbnailStickerCellCardView.h"
#include "IGStoryStickerTooltipPresentable-Protocol.h"
#include "IGTooltipView.h"

@class NSArray, NSString, UIView;

@interface IGGalleryThumbnailStickerCell : UICollectionViewCell<IGStoryStickerTooltipPresentable> {
  /* instance variables */
  IGGalleryThumbnailStickerCellCardView *_iconCardView;
  IGGalleryThumbnailStickerCellCardView *_firstGalleryCardView;
  IGGalleryThumbnailStickerCellCardView *_secondGalleryCardView;
  IGGalleryThumbnailStickerCellCardView *_thirdGalleryCardView;
  UIView *_bottomLayer;
  NSArray *_animatedCardViews;
  FBTimer *_animationTimer;
  int _topViewIndex;
  BOOL _isAnimating;
  IGTooltipView *_tooltipView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)dealloc;
- (void)prepareForReuse;
- (void)startAnimating;
- (void)stopAnimating;
- (id)accessibilityLabel;
- (void)showTooltipWithText:(id)text duration:(double)duration analyticsTag:(id)tag referenceView:(id)view userSession:(id)session completion:(id /* block */)completion;
- (void)hideToolTip;
@end

#endif /* IGGalleryThumbnailStickerCell_h */