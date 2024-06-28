//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuestionResharedMusicStickerView_h
#define IGQuestionResharedMusicStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGOverlayTransformViewType-Protocol.h"
#include "IGSerializable-Protocol.h"
#include "IGStickerBundleContentViewType-Protocol.h"

@class IGAudioMusicTrack, IGBigAlbumArtMusicSticker, IGQuestionAnswerStickerResponder, IGSmallAlbumArtMusicSticker, IGStoryStickerExportModel, NSString, UILabel, UIView;
@protocol IGStickerBundleContentViewLoadingDelegate;

@interface IGQuestionResharedMusicStickerView : UIView<IGStickerBundleContentViewType, IGOverlayTransformViewType, IGSerializable> {
  /* instance variables */
  UIView *_questionContainerView;
  UILabel *_questionLabel;
  UIView *_responseContainerView;
  IGSmallAlbumArtMusicSticker *_smallSticker;
  IGBigAlbumArtMusicSticker *_bigSticker;
  IGAudioMusicTrack *_track;
  NSString *_musicBrowseSessionId;
  struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _musicClipTimeRange;
}

@property (readonly, nonatomic) IGQuestionAnswerStickerResponder *response;
@property (nonatomic) long long style;
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
- (id)initWithQuestionStickerResponse:(id)response musicBrowseSessionId:(id)id;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (long long)numberOfStickers;
- (long long)selectedIndex;
- (void)selectStickerViewAtIndex:(long long)index;
- (id)currentStickerId;
- (BOOL)isUpsideDownableInteractiveSticker;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)isDraftSupported;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (id)transformTargetView;
- (id)outlinePath;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
@end

#endif /* IGQuestionResharedMusicStickerView_h */
