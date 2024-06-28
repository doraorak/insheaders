//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAudioEditorBrowserViewController_h
#define IGSundialAudioEditorBrowserViewController_h
@import Foundation;

#include "IGPartialModalSheetNavigationController.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGStoryMediaPlaybackControllerProtocol-Protocol.h"
#include "IGSundialAudioBrowserViewController.h"
#include "IGSundialAudioControlViewControllerDelegate-Protocol.h"
#include "IGSundialAudioVoiceoverVideoTimelineView.h"
#include "IGSundialSoundSyncNavigator-Protocol.h"
#include "IGSundialVoiceEffectsViewControllerDelegate-Protocol.h"

@class IGAudioBrowserCameraLogger, IGPartialModalSheetViewController, IGSundialComposition, IGUserSession, NSString;
@protocol IGSundialAudioEditorBrowserViewControllerDelegate;

@interface IGSundialAudioEditorBrowserViewController : IGPartialModalSheetNavigationController<IGPartialModalSheetListener, IGSundialAudioControlViewControllerDelegate, IGSundialVoiceEffectsViewControllerDelegate, IGSundialSoundSyncNavigator> {
  /* instance variables */
  IGPartialModalSheetViewController *_partialModalSheetViewController;
  IGSundialAudioBrowserViewController *_audioBrowserViewController;
  IGSundialComposition *_composition;
  NSObject<IGStoryMediaPlaybackControllerProtocol> *_mediaEditingViewController;
  IGUserSession *_userSession;
  unsigned long long _voiceEffectApplicationType;
  IGSundialAudioVoiceoverVideoTimelineView *_voiceoverVideoTimeline;
  BOOL _presentingAudioPostCaptureEditor;
  BOOL _shouldNotifyOfSignificantChangesOnDismiss;
  IGAudioBrowserCameraLogger *_logger;
  NSObject<IGSundialAudioEditorBrowserViewControllerDelegate> *_audioBrowserEditorDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithComposition:(id)composition interactingView:(id)view mediaEditingViewController:(id)controller interactingFocusRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)audioBrowserViewController:(id)controller didTapAudioTrack:(id)track context:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)audioBrowserViewController:(id)controller didSelectAudioTrack:(id)track;
- (long long)numberOfAudioTrackClipsInCompositionFor:(id)for;
- (void)audioBrowserControlsDidSelectVoiceOver;
- (void)audioBrowserControlsDidSelectVolumeControls;
- (void)audioBrowserControlsDidSelectAudioEnhancement;
- (void)audioBrowserControlsDidSelectSoundboard;
- (void)audioBrowserControlsDidSelectSoundSync;
- (void)audioBrowserViewController:(id)controller multiTrackDidTapAudioTrack:(id)track;
- (void)sundialAudioControlViewControllerDidChangeCompositionVolume:(id)volume forAudioControlType:(long long)type fromVolume:(double)volume toVolume:(double)volume;
- (void)sundialAudioControlViewControllerDidTapAddEffects:(id)effects forAudioControlType:(long long)type;
- (void)sundialAudioControlViewControllerDidTapEditAudioButton:(id)button forAudioControlType:(long long)type;
- (void)sundialAudioControlViewControllerDidTapRemoveAudio:(id)audio forAudioControlType:(long long)type;
- (void)sundialVoiceEffectsViewController:(id)controller didChangeCompositionSelectedVoiceEffect:(id)effect;
- (void)sundialAudioEnhanceViewController:(id)controller didChangeEnhanceToValue:(double)value;
- (void)sundialAudioVoiceoverViewController:(id)controller didChangeCompositionVoiceoverAudioClips:(id)clips;
- (void)sundialAudioVoiceoverViewControllerDidTapDoneButton:(id)button;
- (void)soundboardViewController:(id)controller didUpdateAudioTrack:(id)track soundboardEffectsPointMap:(id)map;
- (void)didTapBackButtonAudioEditorToolContainerViewController:(id)controller;
- (void)sundialSoundSyncNavigatorShouldGoBackForViewController:(id)controller;
- (void)sundialSoundSyncNavigatorShouldGoForwardForViewController:(id)controller withComposition:(id)composition;
- (void)sundialSoundSyncNavigatorShouldSkipForViewController:(id)controller withComposition:(id)composition;
@end

#endif /* IGSundialAudioEditorBrowserViewController_h */
