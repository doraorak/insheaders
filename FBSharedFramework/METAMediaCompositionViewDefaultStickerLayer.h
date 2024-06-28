//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAMediaCompositionViewDefaultStickerLayer_h
#define METAMediaCompositionViewDefaultStickerLayer_h
@import Foundation;

#include "METAMediaCompositionViewStickerLayer-Protocol.h"
#include "METAStickerContainerView.h"

@class NSArray, NSString;
@protocol IGMediaCompositionViewStickerLayerDelegate;

@interface METAMediaCompositionViewDefaultStickerLayer : NSObject<METAMediaCompositionViewStickerLayer>

@property (retain, nonatomic) METAStickerContainerView *stickerContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGMediaCompositionViewStickerLayerDelegate> *delegate;
@property (readonly, nonatomic) NSArray *stickers;
@property (readonly, nonatomic) BOOL isInitialized;

/* instance methods */
- (id)init;
- (void)clear;
- (void)recoverStickers:(id)stickers withSceneSpaceToMediaSpaceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform mediaRegion:(struct METARegion { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; })region;
- (void)transformToMatchMediaSpace:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })space;
- (void)updateMediaRegion:(struct METARegion { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; })region;
- (void)addSticker:(id)sticker atIndex:(long long)index withSceneSpaceToMediaSpaceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (void)stickerContainerView:(id)view stickerWasAddedToContainer:(id)container;
- (void)stickerContainerView:(id)view stickerWillBeRemovedFromContainer:(id)container;
@end

#endif /* METAMediaCompositionViewDefaultStickerLayer_h */