//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryPreviewOverlayContainerView_h
#define IGStoryPreviewOverlayContainerView_h
@import Foundation;

#include "UIView.h"

@class IGDrawCanvasView, NSHashTable, UIImageView, UILabel, UIView;
@protocol IGStoryPreviewOverlayContainerViewDelegate;

@interface IGStoryPreviewOverlayContainerView : UIView {
  /* instance variables */
  IGDrawCanvasView *_drawCanvasView;
}

@property (readonly, nonatomic) UILabel *nuxLabel;
@property (readonly, nonatomic) UIView *dimmedView;
@property (retain, nonatomic) UIView *stickerViewWithNux;
@property (readonly, nonatomic) UIView *staticContainerViewBehindDrawingLayer;
@property (readonly, nonatomic) UIView *backgroundOverlayContainerView;
@property (readonly, nonatomic) UIImageView *drawRenderingImageView;
@property (readonly, nonatomic) NSHashTable *previewDynamicOverlays;
@property (readonly, nonatomic) UIView *overlayContainerView;
@property (readonly, nonatomic) UIView *staticContainerView_DEPRECATED;
@property (readonly, nonatomic) UIView *dynamicContainerView_DEPRECATED;
@property (weak, nonatomic) NSObject<IGStoryPreviewOverlayContainerViewDelegate> *delegate;
@property (readonly, nonatomic) UIView *drawingContainerView;
@property (readonly, nonatomic) UIView *activeStickerPinningContainerView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame enableUnifiedOverlayContainer:(BOOL)container;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)igFOAPollStickerView;
- (id)pollStickerView;
- (id)sliderStickerView;
- (BOOL)hasAnimatedSticker;
@end

#endif /* IGStoryPreviewOverlayContainerView_h */