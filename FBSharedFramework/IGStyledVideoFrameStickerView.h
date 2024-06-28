//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStyledVideoFrameStickerView_h
#define IGStyledVideoFrameStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGAnimatedStickerViewType-Protocol.h"
#include "IGConstrainedSizeStickerViewType-Protocol.h"
#include "IGDynamicSurfaceStickerViewType-Protocol.h"
#include "IGStoryStickerDeletable-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGStoryStyledFrameBundleView.h"
#include "IGStyledFrameStickerViewType-Protocol.h"
#include "IGVideoStickerContentView.h"

@class AVAsset, NSString, UIImageView, UIView;

@interface IGStyledVideoFrameStickerView : UIView<IGStyledFrameStickerViewType, IGAnimatedStickerViewType, IGDynamicSurfaceStickerViewType, IGConstrainedSizeStickerViewType, IGStoryStickerDeletable> {
  /* instance variables */
  IGStoryStyledFrameBundleView *_frameBundleView;
  UIView *_contentView;
  UIImageView *_previewImageView;
  IGVideoStickerContentView *_videoContentView;
  BOOL _isVideoMuted;
  long long _videoCameraPosition;
}

@property (readonly, nonatomic) AVAsset *videoAsset;
@property (nonatomic) double minScale;
@property (nonatomic) double maxScale;
@property (nonatomic) long long numberOfEdits;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double playbackTime;
@property (readonly, nonatomic) BOOL isDynamic;
@property (nonatomic) BOOL isNonDeletable;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithPreviewImage:(id)image styles:(id)styles;
- (void)layoutSubviews;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (id)frameBundleView;
- (id)asyncDynamicOverlayImageProvider;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
@end

#endif /* IGStyledVideoFrameStickerView_h */
