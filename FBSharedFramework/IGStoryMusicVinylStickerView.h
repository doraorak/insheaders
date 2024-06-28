//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMusicVinylStickerView_h
#define IGStoryMusicVinylStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGAudioMusicTrack.h"
#include "IGConstrainedZPositionStickerViewType-Protocol.h"
#include "IGDynamicSurfaceStickerViewType-Protocol.h"
#include "IGStickerBundleView.h"
#include "IGStickerViewType-Protocol.h"
#include "IGStoryMusicStickerProtocol-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGUserLauncherSet-Protocol.h"
#include "IGVinylMusicSticker.h"

@class NSString, UIColor;

@interface IGStoryMusicVinylStickerView : UIView<IGConstrainedZPositionStickerViewType, IGDynamicSurfaceStickerViewType, IGStickerViewType, IGStoryMusicStickerProtocol> {
  /* instance variables */
  IGVinylMusicSticker *_vinylStickerContentView;
  NSString *_musicBrowseSessionID;
  NSObject<IGUserLauncherSet> *_launcherSet;
}

@property (readonly, nonatomic) long long zIndexConstraint;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isDynamic;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double duration;
@property (nonatomic) double musicClipStartTime;
@property (readonly, nonatomic) long long musicStickerStyle;
@property (retain, nonatomic) IGStickerBundleView *avatarStickerView;
@property (readonly, nonatomic) IGAudioMusicTrack *musicTrack;
@property (nonatomic) double playbackTime;
@property (nonatomic) BOOL isNonDeletable;
@property (nonatomic) long long templatizableStickerState;
@property (readonly, nonatomic) long long templatizableStickerType;
@property (readonly, nonatomic) NSString *uuidString;
@property (nonatomic) BOOL isFromSuggestedTemplate;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithMusicTrack:(id)track musicBrowseSessionID:(id)id launcherSet:(id)set;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)stickerView;
- (void)detachAvatarBundleView;
- (BOOL)isDragPointInAvatarSticker:(struct CGPoint { double x0; double x1; })sticker;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (id)asyncDynamicOverlayImageProvider;
- (BOOL)supportsPTV;
- (unsigned long long)stickerSingleInstanceEnforcementType;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (id)templateModelForCompositionSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* IGStoryMusicVinylStickerView_h */
