//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraLogger_Audio_h
#define IGCameraLogger_Audio_h
@import Foundation;

@interface IGCameraLogger (Audio) <NSObject>
/* instance methods */
- (void)logClipsAudioPostcapTap;
- (void)logClipsAudioBrowserAddTap;
- (void)logClipsAudioVideoVolumeDidChangeToVolume:(double)volume;
- (void)logClipsAudioBrowserVolumeDidChangeToVolume:(double)volume;
- (void)logClipsAudioBrowserEditTap;
- (void)logClipsVoiceoverPostcapTapWithModule:(id)module;
- (void)logClipsVoiceoverAudioClipCaptureWithModule:(id)module;
- (void)logClipsVoiceoverAudioClipDeleteTapAtIndex:(long long)index withModule:(id)module;
- (void)logClipsAudioMixAudioPartTappedInPostcap;
- (void)logClipsAddMusicSliderTap;
- (void)logClipsAddVoiceoverSliderTap;
- (void)logClipsEditVoiceoverSliderTap;
- (void)logClipsVoiceoverBackTapWithModule:(id)module;
- (void)logClipsVoiceoverDoneTap;
- (void)logClipsVoiceoverRecordTapWithModule:(id)module;
- (void)logClipsAudioControlsVolumeSliderContextMenuTap;
- (void)logClipsAudioControlsVolumeSliderContextMenuEditTap;
- (void)logClipsAudioControlsVolumeSliderContextMenuEffectsTap;
- (void)logClipsAudioControlsVolumeSliderContextMenuRemoveTap;
- (void)logDidTapVoiceEffectsTab:(BOOL)tab;
- (void)logDidTapVoiceEffect:(long long)effect audioEffectIsEnabled:(BOOL)enabled;
- (void)logDidTapTimedTextObject;
- (void)logDidTapTextToSpeech;
- (void)logDidTapVoice:(long long)voice;
- (void)logSeenClipsSaveWithoutAudioDialog;
- (void)logAudioMixMenuShown;
- (void)logAudioMixAddTrackButtonTapped;
- (void)logAudioMixEditTrackButtonTapped;
- (void)logDidToggleBookmarkMusicWithBookmarkValue:(BOOL)value audioId:(id)id artistName:(id)name songName:(id)name mediaAttributedAuthorId:(id)id;
- (void)logSundialSoundboardDidTapEntryWithNoAlreadyAppliedEffects;
- (void)logSundialSoundboardDidTapEntryWithAlreadyAppliedEffects;
- (void)logSundialSoundboardDidTapRemoveAllAppliedEffects;
- (void)logSundialSoundboardDidChangeVolume;
- (void)logSundialSoundboardDidScrollToSeeMoreEffects;
- (void)logSundialSoundboardDidAddSoundboardEffect;
- (void)logSundialSoundboardDidUndoAction;
- (void)logSundialSoundboardDidTapDone;
- (void)logSundialSuggestedAudioAppearance;
- (void)logSundialSuggestedAudioExitAction;
- (void)logSundialSuggestedAudioSkipAction;
- (void)logSundialSuggestedAudioNextAction;
- (void)logSundialSuggestedAudioPublishAction;
- (void)logSundialAudioEnhanceWasShown;
- (void)logSundialAudioEnhanceWasDismissedToPostCap;
- (void)logSundialAudioEnhanceDidFinish;
- (void)logSundialAudioEnhanceWasAdjustedTo:(double)to;
- (void)logReplaceFeedAudioDialogImpression:(BOOL)impression mediaId:(id)id;
- (void)logReplaceFeedAudioDone:(id)done;
@end

#endif /* IGCameraLogger_Audio_h */