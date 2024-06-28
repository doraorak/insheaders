//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveBroadcastVideoGenerator_h
#define IGLiveBroadcastVideoGenerator_h
@import Foundation;

#include "FBCancelable-Protocol.h"
#include "IGLiveBroadcastCaptureManager.h"
#include "IGLiveMediaImageGeneratorDataSource-Protocol.h"

@protocol IGLiveBroadcastVideoGeneratorDelegate;

@interface IGLiveBroadcastVideoGenerator : NSObject {
  /* instance variables */
  BOOL _suspended;
  IGLiveBroadcastCaptureManager *_captureManager;
  NSObject<FBCancelable> *_stillImageGeneratorToken;
  unsigned long long _sequenceId;
  BOOL _allowBackgroundMode;
  BOOL _newImageEachFrame;
  NSObject<IGLiveMediaImageGeneratorDataSource> *_imageDataSource;
  BOOL _isGeneratingVideo;
  unsigned long long _currentProfileImageSize;
  struct CGSize { double width; double height; } _currentCameraSize;
}

@property (weak, nonatomic) NSObject<IGLiveBroadcastVideoGeneratorDelegate> *delegate;

/* instance methods */
- (id)initWithCaptureManager:(id)manager startGeneratingVideo:(BOOL)video newImageEachFrame:(BOOL)frame imageDataSource:(id)source;
- (void)_onAppWillResignActive:(id)active;
- (void)_onAppDidBecomeActive:(id)active;
@end

#endif /* IGLiveBroadcastVideoGenerator_h */
