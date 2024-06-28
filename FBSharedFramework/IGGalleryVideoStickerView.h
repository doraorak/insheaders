//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGalleryVideoStickerView_h
#define IGGalleryVideoStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGAnimatedStickerViewType-Protocol.h"
#include "IGAssetPlayerView.h"
#include "IGGalleryStickerEditingProtocol-Protocol.h"
#include "IGGalleryVideoStickerModel.h"
#include "IGSerializableV2-Protocol.h"
#include "IGStackableStickerViewType-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGVideoStickerContentView.h"
#include "IGVideoStickerViewType-Protocol.h"

@class NSNumber, NSString, UIView;

@interface IGGalleryVideoStickerView : UIView<IGAnimatedStickerViewType, IGGalleryStickerEditingProtocol, IGStackableStickerViewType, IGVideoStickerViewType, IGSerializableV2> {
  /* instance variables */
  IGAssetPlayerView *_playerView;
  IGVideoStickerContentView *_contentView;
  UIView *_containerView;
  BOOL _roundedCornersEnabled;
}

@property (readonly, nonatomic) IGGalleryVideoStickerModel *model;
@property (readonly, nonatomic) double videoDuration;
@property (nonatomic) BOOL muted;
@property (nonatomic) double playbackTime;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long galleryStickerStyle;
@property (retain, nonatomic) NSNumber *stackedLayerIndex;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) BOOL containsAudio;
@property (nonatomic) BOOL mutedForComposition;
@property (readonly, nonatomic) BOOL isDynamic;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithModel:(id)model launcherSetProvider:(id)provider;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)asyncDynamicOverlayImageProvider;
- (id)asyncVideoClip;
- (id)asyncAudioClip;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (id)outlinePath;
- (id)copyWithUserSession:(id)session;
- (void)updateWithMetadata:(id)metadata;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (id)availableStyles;
@end

#endif /* IGGalleryVideoStickerView_h */
