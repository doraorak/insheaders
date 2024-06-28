//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11MediaSource11AssetPlayer_h
#define _TtC11MediaSource11AssetPlayer_h
@import Foundation;

@interface _TtC11MediaSource11AssetPlayer : NSObject { // (Swift)
  /* instance variables */
   nodes;
   asset;
   player;
   playerItem;
   videoOutput;
   segmentBoundaryTimes;
   nonEmptySegmentTimes;
   preTransform;
   postColorSpace;
   delegate;
   videoOutputDelegate;
   isStalled;
   hdrEnabled;
   maxPixelBufferDimension;
   lastPixelBuffer;
   lastTime;
}

/* instance methods */
- (void)playerItemPlaybackStalledDidChange:(id)change;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)dealloc;
- (id)init;
@end

#endif /* _TtC11MediaSource11AssetPlayer_h */
