//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC23ShowreelSwiftExtensions33ShowreelLongPressGestureExtension_h
#define _TtC23ShowreelSwiftExtensions33ShowreelLongPressGestureExtension_h
@import Foundation;

#include "SNPlaybackFeatureExtension-Protocol.h"

@interface _TtC23ShowreelSwiftExtensions33ShowreelLongPressGestureExtension : NSObject<SNPlaybackFeatureExtension> { // (Swift)
  /* instance variables */
   $__lazy_storage_$_gesture;
   playback;
}

/* instance methods */
- (void)prepareExtensionWithPlayback:(id)playback;
- (id)extensionView;
- (void)handleLongPressWithGesture:(id)gesture;
- (id)init;
@end

#endif /* _TtC23ShowreelSwiftExtensions33ShowreelLongPressGestureExtension_h */