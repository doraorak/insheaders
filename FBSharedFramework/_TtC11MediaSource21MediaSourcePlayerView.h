//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11MediaSource21MediaSourcePlayerView_h
#define _TtC11MediaSource21MediaSourcePlayerView_h
@import Foundation;

#include "_TtC11ImageSource31ImageSourceBackgroundRenderView.h"

@interface _TtC11MediaSource21MediaSourcePlayerView : _TtC11ImageSource31ImageSourceBackgroundRenderView { // (Swift)
  /* instance variables */
   displayLinkProxy;
}

@property (nonatomic) long long gravity;
@property (nonatomic, retain) _TtC11MediaSource17MediaSourcePlayer *player;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)effectivePlaybackRateDidChange:(id)change;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame context:(id)context useSeparateTextureCache:(BOOL)cache;
@end

#endif /* _TtC11MediaSource21MediaSourcePlayerView_h */
