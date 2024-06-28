//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerPhotoView_h
#define IGSundialViewerPhotoView_h
@import Foundation;

#include "UIView.h"
#include "IGImageViewDelegate-Protocol.h"
#include "IGSundialViewerControlsOverlayLayoutDelegate-Protocol.h"
#include "IGSundialViewerImmersiveTagsPhotoView.h"
#include "IGSundialViewerMediaBackgroundView.h"
#include "IGSundialViewerMediaPrefetchManager.h"
#include "_TtC17IGZoomInteraction17IGZoomInteraction.h"
#include "_TtP17IGZoomInteraction25IGZoomInteractionDelegate_-Protocol.h"

@class IGImageView, IGImmersiveFeedConfiguration, IGPhoto, NSString, UIView;
@protocol IGSundialViewerPhotoViewDelegate;

@interface IGSundialViewerPhotoView : UIView<IGImageViewDelegate, _TtP17IGZoomInteraction25IGZoomInteractionDelegate_, IGSundialViewerControlsOverlayLayoutDelegate> {
  /* instance variables */
  IGImageView *_photoView;
  UIView *_transformationView;
  IGSundialViewerImmersiveTagsPhotoView *_tagsView;
  IGSundialViewerMediaBackgroundView *_backgroundView;
  _TtC17IGZoomInteraction17IGZoomInteraction *_zoomInteraction;
  IGSundialViewerMediaPrefetchManager *_mediaPrefetchManager;
  IGImmersiveFeedConfiguration *_immersiveFeedConfiguration;
  IGPhoto *_photo;
  BOOL _hasDelayedMetadata;
  struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaFrameTransformed; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform; double cornerRadius; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleContentFrame; } _mediaLayout;
}

@property (weak, nonatomic) NSObject<IGSundialViewerPhotoViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (BOOL)hasProductTags;
- (BOOL)hasUserTags;
- (void)showTagHintDotsWithShowDelay:(double)delay hideDelay:(double)delay;
- (void)clearTagHintDots;
- (void)hideAllOverlays;
- (void)showTags:(BOOL)tags animated:(BOOL)animated tagVisibilityChangeReason:(unsigned long long)reason;
- (void)setTagViewDelegate:(id)delegate;
- (BOOL)_shouldDisableBackgroundView;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
- (void)zoomInteraction:(id)interaction willBeginForView:(id)view withLogging:(id)logging;
- (void)zoomInteraction:(id)interaction didEndForView:(id)view withLogging:(id)logging;
- (void)overlayDidLayoutWithMediaLayout:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x2; double x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; })layout;
- (void)overlayDidLayoutWithProgressIndicatorDesiredMinY:(double)y shouldLayout:(BOOL)layout frameMode:(long long)mode;
- (void)overlayDidLayoutWithMinTopYForBottomAFI:(double)afi shouldLayout:(BOOL)layout frameMode:(long long)mode;
- (void)prepareForReuse;
@end

#endif /* IGSundialViewerPhotoView_h */
