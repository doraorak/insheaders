//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMusicStickerAudioIndicatorView_h
#define IGMusicStickerAudioIndicatorView_h
@import Foundation;

#include "UIView.h"
#include "IGAudioIndicatorView.h"

@class NSString;

@interface IGMusicStickerAudioIndicatorView : UIView {
  /* instance variables */
  IGAudioIndicatorView *_audioIndicatorView;
  BOOL _useSmallAlbumArtStyleLayout;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *artistName;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityHint;
@end

#endif /* IGMusicStickerAudioIndicatorView_h */
