//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC14IGStickerSwift21IGNotifyMeStickerView_h
#define _TtC14IGStickerSwift21IGNotifyMeStickerView_h
@import Foundation;

#include "IGBaseView.h"
#include "IGGradientTextStickerViewType-Protocol.h"
#include "IGNotifyMeStickerViewType-Protocol.h"
#include "IGStickerBundleContentViewLoadingDelegate-Protocol.h"
#include "IGStickerBundleContentViewType-Protocol.h"

@class UIColor;

@interface _TtC14IGStickerSwift21IGNotifyMeStickerView : IGBaseView<IGGradientTextStickerViewType, IGStickerBundleContentViewType, IGNotifyMeStickerViewType> { // (Swift)
  /* instance variables */
   viewMode;
   redesignEnabled;
   $__lazy_storage_$_styles;
   currentStyleIndex;
   $__lazy_storage_$_contentView;
   footerLabel;
}

@property (nonatomic, readonly) long long stickerBundleIndexForApplyingCustomColor;
@property (nonatomic, retain) UIColor *customColor;
@property (nonatomic, weak) NSObject<IGStickerBundleContentViewLoadingDelegate> *loadingDelegate;
@property (nonatomic) double playbackTime;

/* instance methods */
- (id)initWithViewMode:(long long)mode redesignEnabled:(BOOL)enabled;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)willMoveToSuperview:(id)superview;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (long long)numberOfStickers;
- (long long)selectedIndex;
- (void)selectStickerViewAtIndex:(long long)index;
- (id)currentStickerId;
- (BOOL)isUpsideDownableInteractiveSticker;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC14IGStickerSwift21IGNotifyMeStickerView_h */