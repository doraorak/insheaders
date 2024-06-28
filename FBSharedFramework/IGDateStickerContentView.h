//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDateStickerContentView_h
#define IGDateStickerContentView_h
@import Foundation;

#include "UIView.h"
#include "IGSerializable-Protocol.h"
#include "IGStaticStickerPaddedLabel.h"
#include "IGStickerBundleContentViewLoadingDelegate-Protocol.h"
#include "IGStickerBundleContentViewType-Protocol.h"
#include "IGStoryStickerExportModel.h"

@class NSArray, NSDate, NSString;

@interface IGDateStickerContentView : UIView<IGStickerBundleContentViewType, IGSerializable> {
  /* instance variables */
  IGStaticStickerPaddedLabel *_label;
  NSArray *_dateStickerColors;
  long long _currentIndex;
}

@property (readonly, nonatomic) NSDate *date;
@property (weak, nonatomic) NSObject<IGStickerBundleContentViewLoadingDelegate> *loadingDelegate;
@property (nonatomic) double playbackTime;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithDate:(id)date;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (long long)numberOfStickers;
- (long long)selectedIndex;
- (void)selectStickerViewAtIndex:(long long)index;
- (id)currentStickerId;
- (BOOL)isUpsideDownableInteractiveSticker;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (id)outlinePath;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
@end

#endif /* IGDateStickerContentView_h */
