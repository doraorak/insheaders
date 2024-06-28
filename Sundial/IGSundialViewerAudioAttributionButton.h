//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerAudioAttributionButton_h
#define IGSundialViewerAudioAttributionButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGSundialAudioAssetProtocol-Protocol.h"

@class CAShapeLayer, IGAudioMultiThumbnailView, UIImageView, UIView;

@interface IGSundialViewerAudioAttributionButton : IGBouncyButton {
  /* instance variables */
  UIView *_contentWrapperView;
  IGAudioMultiThumbnailView *_multiThumbnailView;
  IGAudioMultiThumbnailView *_maskedThumbnailView;
  CAShapeLayer *_imageLayer;
  CAShapeLayer *_outerBorderLayer;
  UIImageView *_musicNoteIcon;
  BOOL _showAudioFiltersIcon;
}

@property (retain, nonatomic) NSObject<IGSundialAudioAssetProtocol> *audioAsset;
@property (nonatomic) BOOL shouldShowAlbumArtWithMusicNote;
@property (nonatomic) BOOL showUpdatedMultiTrackUI;

/* instance methods */
- (id)init;
- (id)initWithUpdatedMultiTrackUI:(BOOL)ui;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
@end

#endif /* IGSundialViewerAudioAttributionButton_h */
