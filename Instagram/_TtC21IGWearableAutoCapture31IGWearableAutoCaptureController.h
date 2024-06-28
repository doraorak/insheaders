//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC21IGWearableAutoCapture31IGWearableAutoCaptureController_h
#define _TtC21IGWearableAutoCapture31IGWearableAutoCaptureController_h
@import Foundation;

#include "IGSundialSoundSyncNavigator-Protocol.h"

@interface _TtC21IGWearableAutoCapture31IGWearableAutoCaptureController : NSObject<IGSundialSoundSyncNavigator> { // (Swift)
  /* instance variables */
   userSession;
   presenter;
   postCaptureEditingViewControllerDelegate;
   shouldOpenTemplateBrowser;
}

/* instance methods */
- (id)initWithUserSession:(id)session presenter:(id)presenter postCaptureEditingViewControllerDelegate:(id)delegate shouldOpenTemplateBrowser:(BOOL)browser;
- (void)presentReelsCameraPreviewWithAssets:(id)assets appId:(id)id contentURL:(id)url metadata:(id)metadata;
- (void)presentReelsCameraPreviewWithBackgroundVideo:(id)video appId:(id)id contentURL:(id)url metadata:(id)metadata;
- (void)sundialSoundSyncNavigatorShouldGoBackForViewController:(id)controller;
- (void)sundialSoundSyncNavigatorShouldSkipForViewController:(id)controller withComposition:(id)composition;
- (void)sundialSoundSyncNavigatorShouldGoForwardForViewController:(id)controller withComposition:(id)composition;
- (id)init;
@end

#endif /* _TtC21IGWearableAutoCapture31IGWearableAutoCaptureController_h */
