//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBRMVViewMode_h
#define FBRMVViewMode_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "FBRMVViewModeARConfig.h"

@class AVAsset, NSURL, UIColor;

@interface FBRMVViewMode : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  FBRMVViewModeARConfig *_aR_arConfig;
  FBRMVViewModeARConfig *_aR3D_arConfig;
  UIColor *_aR3D_backgroundColorFor3DView;
  struct CGSize { double width; double height; } _aR3D_frameSize;
  AVAsset *_videoStream_asset;
  BOOL _videoStream_autoplay;
  BOOL _videoStream_audioEnabled;
  NSURL *_videoStream_directoryPathForVideoStorage;
  id /* block */ _videoStream_videoFrameHandler;
  id /* block */ _videoStream_didPlayToEndHandler;
  id /* block */ _videoStream_didStallHandler;
}

/* class methods */
+ (id)aR3DWithArConfig:(id)config backgroundColorFor3DView:(id)dview frameSize:(struct CGSize { double x0; double x1; })size;
+ (id)aRWithArConfig:(id)config;
+ (id)videoStreamWithAsset:(id)asset autoplay:(BOOL)autoplay audioEnabled:(BOOL)enabled directoryPathForVideoStorage:(id)storage videoFrameHandler:(id /* block */)handler didPlayToEndHandler:(id /* block */)handler didStallHandler:(id /* block */)handler;

/* instance methods */
- (void)matchAR:(id /* block */)ar aR3D:(id /* block */)d videoStream:(id /* block */)stream;
@end

#endif /* FBRMVViewMode_h */