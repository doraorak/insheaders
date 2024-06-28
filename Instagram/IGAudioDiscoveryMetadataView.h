//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioDiscoveryMetadataView_h
#define IGAudioDiscoveryMetadataView_h
@import Foundation;

#include "UIView.h"

@class IGGradientView, IGImageView, IGMedia, UILabel, UIView;

@interface IGAudioDiscoveryMetadataView : UIView {
  /* instance variables */
  IGImageView *_albumCoverImageView;
  UIView *_albumCoverShadowView;
  UILabel *_songTitleLabel;
  UILabel *_artistNameLabel;
  IGGradientView *_legibilityGradientView;
}

@property (retain, nonatomic) IGMedia *media;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
@end

#endif /* IGAudioDiscoveryMetadataView_h */