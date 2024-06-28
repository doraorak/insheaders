//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMusicTrackStickerSectionController_h
#define IGStoryMusicTrackStickerSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGAudioMusicTrack.h"

@protocol IGStoryMusicTrackStickerSectionControllerDelegate;

@interface IGStoryMusicTrackStickerSectionController : IGListSectionController {
  /* instance variables */
  struct IGGridLayoutConfiguration { double interitemSpacing; struct UIEdgeInsets { double top; double left; double bottom; double right; } insets; double mediasPerRow; double aspectRatio; double cellCornerRadius; } _layoutConfig;
  IGAudioMusicTrack *_musicTrack;
}

@property (weak, nonatomic) NSObject<IGStoryMusicTrackStickerSectionControllerDelegate> *delegate;

/* instance methods */
- (id)initWithLayoutConfig:(struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; })config;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
@end

#endif /* IGStoryMusicTrackStickerSectionController_h */
