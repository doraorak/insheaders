//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMediaCompositionEditingViewControlling_Protocol_h
#define IGStoryMediaCompositionEditingViewControlling_Protocol_h
@import Foundation;

@protocol IGStoryMediaCompositionEditingViewControlling <IGGestureHandler, IGStoryMediaPlaybackControllerProtocol>

@property (weak, nonatomic) NSObject<IGStoryMediaCompositionEditingViewControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGStoryMediaCompositionEditingViewControllerEditingEventsDelegate> *editingEventsDelegate;
@property (retain, nonatomic) UIView<IGStoryMediaCompositionEditingControlsOverlayViewProtocol> *editingControlsOverlayView;
@property (weak, nonatomic) NSObject<IGStoryMediaCompositionStickerTrayDelegate> *stickerTrayDelegate;
@property (readonly, nonatomic) IGGLKSession *igglkSession;
@property (readonly, nonatomic) long long currentMediaCompositionIndex;
@property (retain, nonatomic) NSObject<IGStoryMediaAsset> *asset;
@property (nonatomic) double mediaScale;
@property (nonatomic) struct METAMediaTransform { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } mediaTransform;
@property (nonatomic) struct METAMediaTransform { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } delayedMediaTransform;
@property (retain, nonatomic) NSObject<METAMediaEffect> *mediaEffect;
@property (retain, nonatomic) NSArray *mediaCompositions;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } mediaCompositionRegion;
@property (nonatomic) double mediaCompositionCornerRadius;
@property (readonly, nonatomic) BOOL userHasMeaningfullyModifiedCompositions;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL disableMentionsAndHashtags;
@property (nonatomic) double overallVolume;
@property (nonatomic) double videoVolume;
@property (retain, nonatomic) METAAnimationCurve *assetVolumeCurve;
@property (readonly, nonatomic) NSArray *musicTrackClips;
@property (readonly, nonatomic) NSArray *originalSoundTracks;
@property (retain, nonatomic) NSArray *audioTrackClips;
@property (nonatomic) double selectedAudioVolume;
@property (retain, nonatomic) AVAsset *voiceoverAudio;
@property (nonatomic) double voiceoverVolume;
@property (retain, nonatomic) METAAnimationCurve *voiceoverVolumeCurve;
@property (copy, nonatomic) NSArray *voiceoverAudioEffects;
@property (copy, nonatomic) NSArray *assetAudioEffects;
@property (retain, nonatomic) METAAudioTrack *bleepAudioTrack;
@property (retain, nonatomic) AVAsset *textToSpeechAudio;
@property (retain, nonatomic) METAAudioTrack *soundboardAudioTrack;
@property (nonatomic) double soundboardVolume;
@property (retain, nonatomic) AVAsset *remixReactionOriginalAudio;
@property (nonatomic) BOOL remixReactionOriginalAudioMuted;
@property (weak, nonatomic) NSObject<IGKaraokeCaptionStickerCombinationDataSourceAndDelegate> *karaokeCaptionsStickerCombinationDataSourceAndDelegate;
@property (weak, nonatomic) NSObject<IGViewerOverlayPreviewProvider> *viewerOverlayPreviewProvider;
@property (readonly, nonatomic) UIImage *currentSnapshot;
@property (retain, nonatomic) NSString *suggestedStickerId;
@property (nonatomic) BOOL stickerMediaSynchronizationDisabled;
@property (nonatomic) double stickerPlaybackTime;
@property (nonatomic) BOOL disableMentionLocationPicker;
@property (nonatomic) double videoAssetTimeStartOffset;
@property (readonly, nonatomic) double playbackRate;
@property (nonatomic) struct { double x0; double x1; } playableRange;
@property (retain, nonatomic) NSArray *postProcessFilters;
@property (retain, nonatomic) NSArray *captureToolsForLogging;
@property (nonatomic) BOOL useTapForPlaybackControls;
@property (nonatomic) BOOL shouldPlayMediaOnAppear;
@property (nonatomic) BOOL enforceMinimumStickerSize;
@property (retain, nonatomic) IGTextEditorTextToSpeechConfiguration *textToSpeechConfig;
@property (readonly, nonatomic) IGStoryMediaCompositionView *mediaCompositionView;
@property (nonatomic) BOOL isMediaCompositionViewBeingLaidOutExternally;
@property (readonly, nonatomic) IGStoryMediaCompositionStickerCreationController *stickerController;
@property (retain, nonatomic) IGPostCaptureARController *postcaptureAREffectController;
@property (retain, nonatomic) IGIOSLink *storyLink;
@property (retain, nonatomic) IGBrandedContentMedia *brandedContentMedia;
@property (retain, nonatomic) IGAPIBrandedContentGatingInfo *audienceRestrictions;
@property (readonly, nonatomic) IGStoryStickerGestureController *stickerGestureController;
@property (readonly, nonatomic) UISwipeGestureRecognizer *stickerTraySwipeGestureRecognizer;
@property (retain, nonatomic) IGAPIProductDetailsProductItemDict *suggestedProduct;
@property (retain, nonatomic) IGAPIGenAIToolInfoDict *genAiToolInfo;
@property (nonatomic) BOOL shouldOpenMagicModOnLoad;
@property (nonatomic) BOOL isBoostStoryModeEnabled;

/* instance methods */
- (void)setPlaybackTime:(double)time;
- (void)presentStickerTrayFromButton;
- (void)presentSharedListCreationViewController:(id)controller;
- (void)dismissSharedListCreationViewController;
- (BOOL)shouldKeepEditingControlsHidden;
- (void)presentStickerTrayWithTrigger:(long long)trigger;
- (void)deleteSticker:(id)sticker deleteVariant:(long long)variant;
- (void)cleanUpAnimatedTextViews;
- (void)selectStickerInLayerListAndTimeline:(id)timeline;
- (void)insertMediaComposition:(id)composition atIndex:(long long)index;
- (void)deleteMediaCompositionAtIndex:(long long)index;
- (void)setEditingControlsOverlayViewHidden:(BOOL)hidden animated:(BOOL)animated completion:(id /* block */)completion;
- (void)setEditingControlsOverlayViewHidden:(BOOL)hidden animated:(BOOL)animated;
- (id)originalCompositionAssetAtIndex:(long long)index;
- (void)animateMessageOnScreen:(id)screen;
- (void)setLoadingIndicatorViewVisible:(BOOL)visible;
- (void)setIsColorFilterPickerEnabled:(BOOL)enabled;
- (void)memeHubDidAddSticker:(id)sticker;
- (void)setStickersUserInteractionEnabled:(BOOL)enabled;
- (void)setIsSwipableFilterViewEnabled:(BOOL)enabled;
- (void)setMusicVolumeCurve:(id)curve forClipIdentifier:(id)identifier;
- (void)prepareToLaunchBoomerangEditor;
- (void)playThirdPartyAudioWave:(BOOL)wave;
- (void)prepareToLaunchMusicStickerEditor;
- (void)prepareToLaunchDrawingEditor;
- (void)prepareForMediaRendering;
- (void)beginEditingTextStickerFromTap:(id)tap;
- (void)setCurrentPlaybackTime:(double)time withCompletion:(id /* block */)completion;
- (void)didShareStory;
- (void)setCapturedAudioMuted:(BOOL)muted;
- (void)setEDRMultiplier:(double)edrmultiplier;
- (void)presentCaptionsEditingViewController;
- (void)navigateToMediaCompositionAtIndex:(long long)index animated:(BOOL)animated;
@end

#endif /* IGStoryMediaCompositionEditingViewControlling_Protocol_h */