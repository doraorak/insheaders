//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStaticStickerBundleContentView_h
#define IGStaticStickerBundleContentView_h
@import Foundation;

#include "UIView.h"
#include "IGAvatarStickerPerformanceLogger.h"
#include "IGConstrainedSizeStickerViewType-Protocol.h"
#include "IGConstrainedZPositionStickerViewType-Protocol.h"
#include "IGGeneratedStickersDownloadPerformanceLogger.h"
#include "IGHashtagStickerViewType-Protocol.h"
#include "IGImageStickerViewDelegate-Protocol.h"
#include "IGLocationStickerViewType-Protocol.h"
#include "IGOverlayTransformViewType-Protocol.h"
#include "IGStaticStickerModel.h"
#include "IGStickerBundleContentViewLoadingDelegate-Protocol.h"
#include "IGStickerBundleContentViewType-Protocol.h"
#include "IGStickerCellLoadingDelegate-Protocol.h"
#include "IGStickerViewType-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGStoryTemplatizable-Protocol.h"
#include "_TtC16IGStickerFilters21IGStickerFilterHelper.h"

@class NSMutableDictionary, NSString;
@protocol IGStaticStickerBundleContentViewInitialImageViewDelegate;

@interface IGStaticStickerBundleContentView : UIView<IGImageStickerViewDelegate, IGStickerViewType, IGStickerBundleContentViewType, IGLocationStickerViewType, IGHashtagStickerViewType, IGOverlayTransformViewType, IGConstrainedSizeStickerViewType, IGStoryTemplatizable, IGConstrainedZPositionStickerViewType> {
  /* instance variables */
  long long _currentIndex;
  NSMutableDictionary *_stickerViewsForIndexes;
  long long _maxImageSize;
  BOOL _useBrandRefreshForGlobalScripts;
  IGAvatarStickerPerformanceLogger *_avatarStickerPerfLogger;
  IGGeneratedStickersDownloadPerformanceLogger *_generatedStickerPerfLogger;
  long long _qplInstanceKey;
  BOOL _isEligibleForStickerFilters;
  long long _currentFilterIndex;
  _TtC16IGStickerFilters21IGStickerFilterHelper *_stickerFilterHelper;
  NSObject<IGStaticStickerBundleContentViewInitialImageViewDelegate> *_initialImageViewDelegate;
  IGStoryStickerExportModel *_customExportModel;
  NSString *_avatarLoggingOriginSurface;
}

@property (readonly, nonatomic) IGStaticStickerModel *model;
@property (readonly, nonatomic) BOOL brandRefresh;
@property (readonly, nonatomic) NSString *module;
@property (weak, nonatomic) NSObject<IGStickerCellLoadingDelegate> *stickerCellLoadingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (weak, nonatomic) NSObject<IGStickerBundleContentViewLoadingDelegate> *loadingDelegate;
@property (nonatomic) double playbackTime;
@property (nonatomic) long long templatizableStickerState;
@property (readonly, nonatomic) long long templatizableStickerType;
@property (readonly, nonatomic) NSString *uuidString;
@property (nonatomic) BOOL isFromSuggestedTemplate;
@property (readonly, nonatomic) long long zIndexConstraint;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (long long)numberOfStickers;
- (long long)selectedIndex;
- (void)selectStickerViewAtIndex:(long long)index;
- (id)currentStickerId;
- (BOOL)isUpsideDownableInteractiveSticker;
- (void)_refreshStickerViewAtIndex:(long long)index;
- (void)_updateModelForStickerFilter:(long long)filter;
- (id)currentLocation;
- (id)attribution;
- (long long)locationStickerViewStyle;
- (id)locationStickerViewStyleId;
- (id)currentHashtag;
- (id)hashtagAttribution;
- (BOOL)shouldUseCustomTitle;
- (long long)hashtagStickerViewStyle;
- (id)hashtagStickerViewStyleId;
- (id)transformTargetView;
- (void)dealloc;
- (void)cleanUp;
- (long long)tapState;
- (id)tapStateId;
- (void)addStickerFilters;
- (long long)currentFilterType;
- (void)imageStickerViewDidLoadImage:(id)image fromSource:(unsigned long long)source;
- (void)imageStickerView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageStickerViewFailedToLoadImage:(id)image error:(id)error;
- (id)outlinePath;
- (BOOL)highQualityOutlinePath;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (id)templateModelForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (BOOL)_isCutoutPhotoSticker;
- (void)_markQPLAnnotateForCutoutPhotoStickerWithError:(id)error;
- (void)_markQPLDownloadingCutoutPhotoStickerCanceled;
@end

#endif /* IGStaticStickerBundleContentView_h */