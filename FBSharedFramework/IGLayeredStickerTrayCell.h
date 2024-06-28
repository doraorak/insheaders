//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLayeredStickerTrayCell_h
#define IGLayeredStickerTrayCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGStoryStickerTooltipPresentable-Protocol.h"
#include "IGTooltipView.h"

@class CAShapeLayer, NSString, UIImageView, UILabel;

@interface IGLayeredStickerTrayCell : UICollectionViewCell<IGStoryStickerTooltipPresentable> {
  /* instance variables */
  CAShapeLayer *_topViewContainerShapeLayer;
  UILabel *_topViewLabel;
  CAShapeLayer *_bottomViewContainerShapeLayer;
  UILabel *_bottomViewLabel;
  UIImageView *_bottomViewIconView;
  CAShapeLayer *_topViewMaskShapeLayer;
  IGTooltipView *_tooltipView;
  long long _type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)showTooltipWithText:(id)text duration:(double)duration analyticsTag:(id)tag referenceView:(id)view userSession:(id)session completion:(id /* block */)completion;
- (void)hideToolTip;
- (id)reuseIdentifier;
@end

#endif /* IGLayeredStickerTrayCell_h */