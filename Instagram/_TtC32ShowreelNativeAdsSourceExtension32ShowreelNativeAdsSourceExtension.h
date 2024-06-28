//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC32ShowreelNativeAdsSourceExtension32ShowreelNativeAdsSourceExtension_h
#define _TtC32ShowreelNativeAdsSourceExtension32ShowreelNativeAdsSourceExtension_h
@import Foundation;

#include "SNPlaybackExtendableStateListener-Protocol.h"
#include "SNPlaybackFeatureExtension-Protocol.h"

@interface _TtC32ShowreelNativeAdsSourceExtension32ShowreelNativeAdsSourceExtension : NSObject<SNPlaybackFeatureExtension, SNPlaybackExtendableStateListener> { // (Swift)
  /* instance variables */
   playback;
   onReady;
   onFail;
}

/* instance methods */
- (void)prepareExtensionWithPlayback:(id)playback;
- (id)extensionView;
- (void)playerIsReadyToPlayback:(id)playback;
- (void)playerDidFailPlayback:(id)playback error:(id)error;
- (id)init;
@end

#endif /* _TtC32ShowreelNativeAdsSourceExtension32ShowreelNativeAdsSourceExtension_h */
