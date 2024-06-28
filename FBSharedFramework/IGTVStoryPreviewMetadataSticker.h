//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVStoryPreviewMetadataSticker_h
#define IGTVStoryPreviewMetadataSticker_h
@import Foundation;

#include "UIView.h"
#include "IGAnimatedStickerViewType-Protocol.h"
#include "IGDynamicSurfaceStickerViewType-Protocol.h"
#include "IGGradientView.h"
#include "IGPlaybackTimeline.h"
#include "IGPlaybackTimelineDelegate-Protocol.h"
#include "IGStickerViewBackendIdentifiableType-Protocol.h"
#include "IGStickerViewType-Protocol.h"
#include "IGStoryOverlayTapModelObject.h"
#include "IGStoryStickerExportModel.h"
#include "IGTVStoryPreviewMetadataStickerViewModel.h"
#include "IGUserLauncherSet-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface IGTVStoryPreviewMetadataSticker : UIView<IGPlaybackTimelineDelegate, NSCopying, IGAnimatedStickerViewType, IGDynamicSurfaceStickerViewType, IGStickerViewType, IGStickerViewBackendIdentifiableType> {
  /* instance variables */
  BOOL _shouldUseLowFrameRate;
  BOOL _isViewShopLinkEnabled;
  IGTVStoryPreviewMetadataStickerViewModel *_viewModel;
  IGPlaybackTimeline *_timeline;
  double _videoDuration;
  double _stickerDuration;
  UILabel *_durationLabel;
  UIImageView *_iconImageView;
  UILabel *_titleLabel;
  UILabel *_usernameLabel;
  UILabel *_usernameDotSeparatorLabel;
  IGGradientView *_topGradient;
  IGGradientView *_bottomGradient;
  NSObject<IGUserLauncherSet> *_launcherSet;
}

@property (nonatomic) BOOL durationLabelHidden;
@property (retain, nonatomic) IGStoryOverlayTapModelObject *tapModelObject;
@property (retain, nonatomic) IGStoryOverlayTapModelObject *viewShopCtaTapModelObject;
@property (readonly, nonatomic) UILabel *viewShopLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double playbackTime;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly, nonatomic) BOOL isDynamic;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithTapModelObject:(id)object viewShopCtaTapModelObject:(id)object viewModel:(id)model launcherSet:(id)set;
- (id)initWithTapModelObject:(id)object viewShopCtaTapModelObject:(id)object viewModel:(id)model shouldUseLowFrameRate:(BOOL)rate launcherSet:(id)set;
- (void)layoutSubviews;
- (id)resharedMediaId;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)playbackTimeline:(id)timeline didUpdateCurrentTime:(double)time;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)isDraftSupported;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (id)asyncDynamicOverlayImageProvider;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (id)xpostingModel;
@end

#endif /* IGTVStoryPreviewMetadataSticker_h */