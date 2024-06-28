//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInternalStickerView_h
#define IGInternalStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGGradientTextStickerView.h"
#include "IGGradientTextStickerViewType-Protocol.h"
#include "IGInternalStickerModel.h"
#include "IGOverlayTransformViewType-Protocol.h"
#include "IGSerializable-Protocol.h"
#include "IGStickerBundleContentViewLoadingDelegate-Protocol.h"
#include "IGStickerBundleContentViewType-Protocol.h"
#include "IGStickerViewBackendIdentifiableType-Protocol.h"
#include "IGStoryStickerExportModel.h"

@class NSString, UIColor;

@interface IGInternalStickerView : UIView<IGStickerBundleContentViewType, IGGradientTextStickerViewType, IGOverlayTransformViewType, IGSerializable, IGStickerViewBackendIdentifiableType> {
  /* instance variables */
  long long _currentIndex;
  IGGradientTextStickerView *_contentView;
  BOOL _useBrandRefreshColors;
  BOOL _redesignEnabled;
  BOOL _redesignStylesEnabled;
  BOOL _redesignLowercaseEnabled;
  BOOL _redesignGradientEnabled;
  double _preferredFontSize;
}

@property (retain, nonatomic) IGInternalStickerModel *model;
@property (weak, nonatomic) NSObject<IGStickerBundleContentViewLoadingDelegate> *loadingDelegate;
@property (nonatomic) double playbackTime;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long stickerBundleIndexForApplyingCustomColor;
@property (retain, nonatomic) UIColor *customColor;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initUsingBrandRefreshColors:(BOOL)colors useBrandRefreshForGlobalScripts:(BOOL)scripts redesignEnabled:(BOOL)enabled fontSize:(double)size;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (long long)numberOfStickers;
- (long long)selectedIndex;
- (void)selectStickerViewAtIndex:(long long)index;
- (id)currentStickerId;
- (BOOL)isUpsideDownableInteractiveSticker;
- (id)transformTargetView;
- (id)outlinePath;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (id)xpostingModel;
@end

#endif /* IGInternalStickerView_h */
