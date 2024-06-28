//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC34IGSundialLegibilityGradientManager34IGSundialLegibilityGradientManager_h
#define _TtC34IGSundialLegibilityGradientManager34IGSundialLegibilityGradientManager_h
@import Foundation;

#include "_TtP34IGSundialLegibilityGradientManager42IGSundialLegibilityGradientManagerDelegate_-Protocol.h"

@interface _TtC34IGSundialLegibilityGradientManager34IGSundialLegibilityGradientManager : NSObject { // (Swift)
  /* instance variables */
   queue;
   currentState;
   timer;
   didDisplayGradient;
   dynamicallyRemovingGradientEnabled;
   shouldRemoveGradientBasedOnCoverImage;
   shouldRemoveGradientBasedOnVideoFrames;
   videoFrameCheckInitialDelay;
   videoFrameCheckSubsequentDelay;
   contrastRatioThreshold;
   stopFrameChecksAfterGradientDisplay;
   removeGradientOpacityValue;
   showGradientOpacityValue;
   dynamicallyRemovingGradientDisabledForHDRVideos;
   percentOfBottomScreenToCheck;
   useAbsoluteLuminance;
   absoluteLuminanceThreshold;
   eventConfig;
   logger;
   analyticsModule;
   media;
   frameTime;
   luminosity;
   frameType;
}

@property (nonatomic, weak) NSObject<_TtP34IGSundialLegibilityGradientManager42IGSundialLegibilityGradientManagerDelegate_> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module media:(id)media;
- (void)evaluateGradientForCoverImageWithIsHDRVideo:(BOOL)hdrvideo;
- (void)startEvaluatingFramesWithIsHDRVideo:(BOOL)hdrvideo;
- (void)stopEvaluatingFrames;
- (void)dealloc;
- (id)init;
@end

#endif /* _TtC34IGSundialLegibilityGradientManager34IGSundialLegibilityGradientManager_h */
