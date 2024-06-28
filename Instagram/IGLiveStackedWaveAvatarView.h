//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveStackedWaveAvatarView_h
#define IGLiveStackedWaveAvatarView_h
@import Foundation;

#include "UIView.h"

@class IGStackedProfilePicture, UIImageView, UILabel;

@interface IGLiveStackedWaveAvatarView : UIView {
  /* instance variables */
  UILabel *_waveDescriptionLabel;
  UIImageView *_waveProfileImageOverlay;
  IGStackedProfilePicture *_stackedWaveAvatarProfile;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGLiveStackedWaveAvatarView_h */
