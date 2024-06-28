//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnimatedStickerContentView_h
#define IGAnimatedStickerContentView_h
@import Foundation;

#include "UIView.h"
#include "IGAnimatedImageView.h"
#include "IGAnimatedImageViewDelegate-Protocol.h"
#include "IGAnimatedStickerModel.h"
#include "IGAnimatedStickerViewType-Protocol.h"
#include "IGAsyncTask.h"
#include "IGAvatarStickerPerformanceLogger.h"
#include "IGConstrainedSizeStickerViewType-Protocol.h"
#include "IGDynamicSurfaceStickerViewType-Protocol.h"
#include "IGMediaSourceStickerViewType-Protocol.h"
#include "IGSerializableV2-Protocol.h"
#include "IGSingleStickerInstanceEnforcedViewType-Protocol.h"
#include "IGStackableStickerViewType-Protocol.h"
#include "IGStickerBundleContentViewLoadingDelegate-Protocol.h"
#include "IGStickerBundleContentViewType-Protocol.h"
#include "IGStickerCellLoadingDelegate-Protocol.h"
#include "IGStickerWithOriginalModelViewType-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGStoryStickerUnmovable-Protocol.h"
#include "IGStoryTemplatizable-Protocol.h"
#include "IGSundialPostcapturePreviewSelectionBorderProtocol-Protocol.h"

@class CAShapeLayer, NSNumber, NSString, NSURL, UIBezierPath;
@protocol IGAnimatedStickerContentViewDelegate;

@interface IGAnimatedStickerContentView : UIView<IGAnimatedImageViewDelegate, IGSundialPostcapturePreviewSelectionBorderProtocol, IGSingleStickerInstanceEnforcedViewType, IGDynamicSurfaceStickerViewType, IGStoryStickerUnmovable, IGSerializableV2, IGAnimatedStickerViewType, IGStickerBundleContentViewType, IGStickerWithOriginalModelViewType, IGConstrainedSizeStickerViewType, IGStackableStickerViewType, IGStoryTemplatizable, IGMediaSourceStickerViewType> {
  /* instance variables */
  NSURL *_cachedDataURL;
  BOOL _useHighQualityURL;
  IGAnimatedImageView *_animatedImageView;
  UIBezierPath *_cachedOutlinePath;
  BOOL _outlinePathComputationInProgress;
  IGAvatarStickerPerformanceLogger *_avatarStickerPerfLogger;
  BOOL _isFirstPlaybackLoop;
  BOOL _enableSeparateThumbnailCache;
  double _memorySizeLimit;
  NSString *_avatarLoggingOriginSurface;
  id /* block */ _onCachedOutlinePathSetBlock;
}

@property (weak, nonatomic) NSObject<IGAnimatedStickerContentViewDelegate> *delegate;
@property (readonly, nonatomic) IGAnimatedStickerModel *model;
@property (readonly, nonatomic) BOOL animating;
@property (nonatomic) double playbackTime;
@property (nonatomic) double playbackRate;
@property (readonly, nonatomic) IGAsyncTask *animatedImageFetchTask;
@property (weak, nonatomic) NSObject<IGStickerCellLoadingDelegate> *stickerCellLoadingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CAShapeLayer *previewSelectionBorder;
@property (readonly, nonatomic) BOOL isDynamic;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (nonatomic) BOOL isUnmovable;
@property (weak, nonatomic) NSObject<IGStickerBundleContentViewLoadingDelegate> *loadingDelegate;
@property (retain, nonatomic) id originalModel;
@property (retain, nonatomic) NSNumber *stackedLayerIndex;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) BOOL containsAudio;
@property (nonatomic) long long templatizableStickerState;
@property (readonly, nonatomic) long long templatizableStickerType;
@property (nonatomic) BOOL isFromSuggestedTemplate;
@property (readonly, nonatomic) BOOL requiresMediaSource;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)configureWithModel:(id)model;
- (BOOL)isAnimating;
- (void)play;
- (void)pause;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (id)asyncDynamicOverlayImageProvider;
- (id)mediaSourceWithCompositionSize:(struct CGSize { double x0; double x1; })size outputSize:(struct CGSize { double x0; double x1; })size maxDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration featureSets:(id)sets;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
- (id)outlinePath;
- (BOOL)highQualityOutlinePath;
- (void)animatedImageView:(id)view didUpdateDownloadProgress:(double)progress source:(long long)source;
- (void)animatedImageViewDidLoadImage:(id)image;
- (void)animatedImageViewDidStartPlayingLoop:(id)loop;
- (void)animatedImageViewWillEndPlayingLoop:(id)loop;
- (void)animatedImageViewDidEndPlayingLoop:(id)loop;
- (void)showPreviewSelectionBorder;
- (void)hidePreviewSelectionBorder;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (id)copyWithUserSession:(id)session;
- (void)updateWithMetadata:(id)metadata;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (id)thumbnailView;
- (long long)numberOfStickers;
- (long long)selectedIndex;
- (void)selectStickerViewAtIndex:(long long)index;
- (id)currentStickerId;
- (BOOL)isUpsideDownableInteractiveSticker;
- (id)templateModelForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (unsigned long long)stickerSingleInstanceEnforcementType;
@end

#endif /* IGAnimatedStickerContentView_h */
