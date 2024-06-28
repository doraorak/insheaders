//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP24IGSundialStackedTimeline46IGSundialStackedTimelineViewControllerDelegate__Protocol_h
#define _TtP24IGSundialStackedTimeline46IGSundialStackedTimelineViewControllerDelegate__Protocol_h
@import Foundation;

@protocol _TtP24IGSundialStackedTimeline46IGSundialStackedTimelineViewControllerDelegate_ 
/* instance methods */
- (void)stackedTimelineViewController:(id)controller mightBeginAdjustingAmountTrimmedFromStartOfVideoClipAt:(long long)at;
- (void)stackedTimelineViewController:(id)controller mightBeginAdjustingAmountTrimmedFromEndOfVideoClipAt:(long long)at;
- (void)stackedTimelineViewController:(id)controller didBeginAdjustingAmountTrimmedFromStartOfVideoClipAt:(long long)at;
- (void)stackedTimelineViewController:(id)controller didBeginAdjustingAmountTrimmedFromEndOfVideoClipAt:(long long)at;
- (void)stackedTimelineViewController:(id)controller didAdjustAmountTrimmedFromStart:(double)start ofVideoClipAt:(long long)at;
- (void)stackedTimelineViewController:(id)controller didAdjustAmountTrimmedFromStart:(double)start amountTrimmedFromEnd:(double)end playbackTime:(double)time ofVideoClipAt:(long long)at;
- (void)stackedTimelineViewController:(id)controller didAdjustAmountTrimmedFromEnd:(double)end ofVideoClipAt:(long long)at;
- (void)stackedTimelineViewControllerDidEndTrimming:(id)trimming;
- (void)stackedTimelineViewControllerDidCancelTrimming:(id)trimming;
- (void)stackedTimelineViewController:(id)controller didBeginAdjustingAtIndex:(long long)index playbackTime:(double)time stickerPlaybackTime:(double)time;
- (void)stackedTimelineViewController:(id)controller isAdjustingAtIndex:(long long)index playbackTime:(double)time;
- (void)stackedTimelineViewController:(id)controller playPauseVideoClip:(BOOL)clip;
- (void)stackedTimelineViewController:(id)controller setPlaybackRate:(double)rate time:(double)time;
- (void)stackedTimelineViewControllerWillEnterEditingMode:(id)mode;
- (void)stackedTimelineViewControllerDidEnterEditingMode:(id)mode;
- (void)stackedTimelineViewControllerAddPreviewBorder:(id)border;
- (void)stackedTimelineViewControllerRemovePreviewBorder:(id)border;
- (void)stackedTimelineViewControllerDidFinishExiting:(id)exiting;
- (void)stackedTimelineViewControllerDidBeginScrubbing:(id)scrubbing;
- (void)stackedTimelineViewControllerDidEndScrubbing:(id)scrubbing;
- (void)stackedTimelineViewController:(id)controller didScrubToTime:(double)time;
- (void)stackedTimelineViewControllerDidRequestPreviewVideoShouldLoop:(BOOL)loop;
- (void)stackedTimelineViewControllerDidUpdateVideoClipsArray:(id)array clipArray:(id)array transitionArray:(id)array updateCoverPhoto:(BOOL)photo updateAutoSave:(BOOL)save groupName:(unsigned long long)name;
- (void)stackedTimelineViewControllerDidRequestAddClip:(id)clip;
- (void)stackedTimelineViewController:(id)controller didRequestReplaceClipWithInfo:(id)info;
- (void)stackedTimelineViewControllerDidRequestShare:(id)share;
- (void)stackedTimelineViewControllerDidRequestBack:(id)back;
- (void)stackedTimelineViewController:(id)controller didUpdateTransitionArray:(id)array;
- (void)stackedTimelineViewControllerDidUpdateAudioClips:(id)clips groupName:(unsigned long long)name;
- (void)stackedTimelineViewControllerDidUpdateVoiceoverAudioClips:(id)clips;
- (void)stackedTimelineViewControllerDidUpdateTimedElementsLayers:(id)layers;
- (long long)stackedTimelineViewControllerGetNumberOfTransitionEffects:(id)effects;
- (id)stackedTimelineViewControllerRemoteIconImageURL:(id)url at:(long long)at;
- (id)stackedTimelineViewControllerRemoteIconImage:(id)image at:(long long)at;
- (id)stackedTimelineViewControllerDefaultIconImage:(id)image;
- (id)stackedTimelineViewControllerAccessibilityLabel:(id)label at:(long long)at;
- (id)stackedTimelineViewControllerAccessibilityHint:(id)hint at:(long long)at;
- (id)stackedTimelineViewControllerTransitionsIgluFilterName:(id)name at:(long long)at;
- (id)stackedTimelineViewControllerTransitionsUIFilterName:(id)name at:(long long)at;
- (void)stackedTimelineViewController:(id)controller setPlayableRangeStart:(double)start duration:(double)duration playbackStartTime:(double)time forcePlayAfterSetRange:(BOOL)range;
- (void)stackedTimelineViewController:(id)controller didDeleteAudioTrackClip:(id)clip;
- (void)stackedTimelineViewController:(id)controller openAudioLyricsStickerEditorWithAudioTrackClip:(id)clip;
- (void)stackedTimelineViewController:(id)controller didRequestAudioChangeFor:(id)for fromEntrypoint:(long long)entrypoint;
- (void)stackedTimelineViewController:(id)controller didSelectAudio:(id)audio;
- (void)stackedTimelineViewControllerDidDeselectAudio:(id)audio;
- (void)stackedTimelineViewController:(id)controller didSelectTimedElement:(id)element;
- (void)stackedTimelineViewController:(id)controller didDeselectTimedElement:(id)element;
- (void)stackedTimelineViewControllerDidTapSaveVideo:(id)video;
- (void)stackedTimelineViewControllerDidTapAREffects:(id)areffects;
- (void)stackedTimelineViewControllerDidTapSoundSync:(id)sync;
- (void)stackedTimelineViewControllerDidTapSoundUnsync:(id)unsync;
- (void)stackedTimelineViewController:(id)controller didTapAddAudioAtEntrypoint:(long long)entrypoint;
- (void)stackedTimelineViewControllerDidUpdateColorFilter:(id)filter currentColorFilterIndex:(long long)index;
- (void)stackedTimelineViewController:(id)controller didTapEditTimedElement:(id)element selectTimedElementOnReturn:(BOOL)return;
- (void)stackedTimelineViewController:(id)controller didTapAddTimedElement:(long long)element preloadedTimedElementView:(id)view;
- (void)stackedTimelineViewController:(id)controller didTapDuplicateTimedElement:(id)element;
- (void)stackedTimelineViewController:(id)controller didTapEnableSpins:(id)spins;
- (void)stackedTimelineViewController:(id)controller didDeleteTimedElement:(id)element;
- (void)stackedTimelineViewController:(id)controller didUpdateRangeForTimedElement:(id)element editType:(long long)type;
- (void)stackedTimelineViewController:(id)controller didFinishUpdatingRangeForTimedElement:(id)element shouldSetCurrentPlaybackTimeTo:(double)to;
- (void)stackedTimelineViewController:(id)controller didFinishUpdatingRangeForTimedElements:(id)elements shouldSetCurrentPlaybackTimeTo:(double)to;
- (void)stackedTimelineViewController:(id)controller didTapToEnableTextToSpeechWithTimedElement:(id)element voice:(unsigned long long)voice completion:(id /* block */)completion;
- (void)stackedTimelineViewController:(id)controller didTapToPlayTextToSpeechWithTimedElement:(id)element voice:(unsigned long long)voice completionHandler:(id /* block */)handler;
- (void)stackedTimelineViewControllerLoadAudioEnhancementEffectIfNeeded:(id)needed;
- (void)stackedTimelineVolumeControlViewControllerDidChangeVolume:(id)volume forAudioControlType:(long long)type from:(double)from to:(double)to withClipIdentifier:(id)identifier;
- (void)stackedTimelineVolumeControlViewControllerDidFinishEditing:(id)editing;
- (void)stackedTimelineViewControllerDidEnterTransformMode:(id)mode playbackIsOutsideOfSelectedClipRange:(BOOL)range currentlySelectedClipIndex:(long long)index;
- (void)stackedTimelineViewController:(id)controller saveTransformOnExitWithCurrentlySelectedClipIndex:(long long)index playbackIsOutsideOfSelectedClipRange:(BOOL)range;
- (void)stackedTimelineViewController:(id)controller cancelTransformationOnCurrentlySelectedClipIndex:(long long)index;
- (void)stackedTimelineViewController:(id)controller resetTransformOnCurrentlySelectedClipIndex:(long long)index;
- (void)stackedTimelineViewController:(id)controller playbackIsOutsideOfSelectedClipRange:(BOOL)range;
- (void)stackedTimelineViewControllerPlaybackDidEnterSelectedClipRange:(id)range;
- (void)stackedTimelineViewControllerPlaybackDidExitSelectedClipRange:(id)range;
- (void)stackedTimelineViewController:(id)controller didChangeMediaFilterParameters:(id)parameters forPreviewOfClipAtIndex:(long long)index;
- (long long)currentColorFilterIndexForStackedTimelineViewController:(id)controller;
- (void)stackedTimelineViewControllerDidTapUndo:(id)undo;
- (void)stackedTimelineViewControllerDidTapRedo:(id)redo;
- (void)stackedTimelineViewControllerAutoSaveDraft:(id)draft groupName:(unsigned long long)name;
- (void)stackedTimelineViewController:(id)controller didChangeVoiceEffectInComposition:(id)composition;
@end

#endif /* _TtP24IGSundialStackedTimeline46IGSundialStackedTimelineViewControllerDelegate__Protocol_h */
