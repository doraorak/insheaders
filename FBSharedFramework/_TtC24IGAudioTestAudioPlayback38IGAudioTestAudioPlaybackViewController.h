//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGAudioTestAudioPlayback38IGAudioTestAudioPlaybackViewController_h
#define _TtC24IGAudioTestAudioPlayback38IGAudioTestAudioPlaybackViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC24IGAudioTestAudioPlayback38IGAudioTestAudioPlaybackViewController : IGViewController { // (Swift)
  /* instance variables */
   artistLabel;
   songLabel;
   audioClusterIdLabel;
   progressiveUrlLabel;
   $__lazy_storage_$_copyProgressiveUrlButton;
   progressiveUrlText;
   dashManifestLabel;
   $__lazy_storage_$_copyDashManifestButton;
   dashManifestText;
   highlightStartTimeDashManifestLabel;
   $__lazy_storage_$_copyHighlightStartTimeDashManifestButton;
   highlightStartTimeDashManifestText;
   legacyAudioPlayerLabel;
   $__lazy_storage_$_legacyAudioPlayPauseButton;
   legacyAudioProgress;
   legacyAudioCurrentPlaybackTime;
   progressiveAudioPlayerLabel;
   $__lazy_storage_$_progressiveAudioPlayPauseButton;
   progressiveAudioProgress;
   progressiveAudioCurrentPlaybackTime;
   dashAudioPlayerLabel;
   $__lazy_storage_$_dashAudioPlayPauseButton;
   dashAudioProgress;
   dashAudioCurrentPlaybackTime;
   highlightStartTimeDashAudioPlayerLabel;
   $__lazy_storage_$_highlightStartTimeDashAudioPlayPauseButton;
   highlightStartTimeDashAudioProgress;
   highlightStartTimeDashAudioCurrentPlaybackTime;
   $__lazy_storage_$_contentLayout;
   scrollView;
   userSession;
   artistDisplayName;
   audioTitle;
   audioClusterId;
   audioFileUrl;
   dashManifestData;
   highlightStartTimeDashManifestData;
   legacyAudioPlayer;
   progressiveAudioPlayer;
   dashAudioPlayer;
   highlightStartTimeDashAudioPlayer;
}

/* instance methods */
- (id)initWithAudioAsset:(id)asset userSession:(id)session analyticsModule:(id)module;
- (id)initWithAudioModel:(id)model userSession:(id)session analyticsModule:(id)module;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)copyButtonTapped:(id)tapped;
- (void)playPauseButtonTapped:(id)tapped;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC24IGAudioTestAudioPlayback38IGAudioTestAudioPlaybackViewController_h */
