//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGIFSticker_h
#define IGGIFSticker_h
@import Foundation;

#include "UIView.h"
#include "IGAnimatedImageRendering-Protocol.h"
#include "IGAnimatedStickerViewType-Protocol.h"
#include "IGDynamicSurfaceStickerViewType-Protocol.h"
#include "IGGIFView.h"
#include "IGSerializable-Protocol.h"
#include "IGStoryStickerExportModel.h"

@class NSString, NSURL, UIBezierPath;

@interface IGGIFSticker : UIView<IGDynamicSurfaceStickerViewType, IGAnimatedStickerViewType, IGSerializable> {
  /* instance variables */
  UIBezierPath *_cachedOutlinePath;
  BOOL _outlinePathComputationInProgress;
  NSURL *_cachedGIFDataURL;
  IGGIFView *_gifView;
}

@property (retain, nonatomic) NSObject<IGAnimatedImageRendering> *gif;
@property (readonly, nonatomic) BOOL isDynamic;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double playbackTime;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (long long)contentMode;
- (void)setContentMode:(long long)mode;
- (id)asyncDynamicOverlayImageProvider;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (id)thumbnailView;
- (id)outlinePath;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
@end

#endif /* IGGIFSticker_h */
