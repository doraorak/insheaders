//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksVideoV2ComponentWrapperView_h
#define BKBloksVideoV2ComponentWrapperView_h
@import Foundation;

#include "UIView.h"

@class CALayer, FNFVideoPlaybackController;

@interface BKBloksVideoV2ComponentWrapperView : UIView {
  /* instance variables */
  FNFVideoPlaybackController *_playbackController;
  CALayer *_currentLayer;
}

/* instance methods */
- (void)layoutSubviews;
@end

#endif /* BKBloksVideoV2ComponentWrapperView_h */