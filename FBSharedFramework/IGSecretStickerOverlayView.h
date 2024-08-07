//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSecretStickerOverlayView_h
#define IGSecretStickerOverlayView_h
@import Foundation;

#include "UIView.h"
#include "IGHidableStickerViewType-Protocol.h"
#include "IGMediaTextButton.h"
#include "IGStoryStickerExportModel.h"
#include "IGStoryStickerUnmovable-Protocol.h"
#include "IGUserSession.h"

@class NSString, UIView;
@protocol IGSecretStickerOverlayViewDelegate;

@interface IGSecretStickerOverlayView : UIView<IGHidableStickerViewType, IGStoryStickerUnmovable> {
  /* instance variables */
  UIView *_backgroundBlurView;
  NSObject<IGSecretStickerOverlayViewDelegate> *_delegate;
  IGMediaTextButton *_previewButton;
  IGUserSession *_userSession;
  BOOL _previewBlurEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (nonatomic) BOOL isUnmovable;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame userSession:(id)session secretStickerView:(id)view isPreviewButtonEnabled:(BOOL)enabled delegate:(id)delegate;
- (void)layoutSubviews;
- (void)didTapSecretStickerMessageButton;
- (void)secretSticker:(id)sticker didChangeTextView:(id)view;
- (BOOL)shouldHideOnUpload;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (void)_didTapPreviewButton;
@end

#endif /* IGSecretStickerOverlayView_h */
